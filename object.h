#ifndef OBJECT_H
#define OBJECT_H

#include <cstdlib>
#include <stdio.h>

#include "PMT.h"

inline double maxDist() { return ACC->maxDist; }
inline int sizeofObject() { return ACC->ndims * ACC->elemsize; }

class Object : public GiSTobject	// the DB object class
{
	double *k;

        static double int2double(unsigned long i) {
          return i * ACC->max / ACC->steps + ACC->min;
        }
        static unsigned long double2int(double d) {
          return (unsigned long)floor ((d - ACC->min) * ACC->steps / ACC->max);
        }

public:
	Object() {
          k = new double [NDIMS];
          for (int i = NDIMS; i--; )
            k[i] = 0.;
        }

        Object(double *pkey);

	Object(const Object& obj) {
          k = new double [NDIMS];
          memcpy (k, obj.k, NDIMS * sizeof (double));
        }

	~Object() {
          delete [] k;
        }

	Object& operator=(const Object& obj) {
          delete [] k;

          k = new double [NDIMS];
          memcpy (k, obj.k, NDIMS * sizeof (double));
        }

	double area(double r) {
          return 0;
	}

        double *data() {
          return k;
        }

	double distance(const Object& other) const;	// distance method (needed)

	int operator==(const Object& obj)
        {
          return !memcmp (k, obj.k, NDIMS * sizeof (double));
        }

	int operator!=(const Object& obj) { return !(*this==obj); };	// inequality operator (needed)

	int CompressedLength() const {
          return sizeofObject();
        }

	Object(char *key);
	void Compress(char *key);
};

#endif
