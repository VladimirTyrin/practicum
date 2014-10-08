#ifndef BLOCK_UTILS_H
#define BLOCK_UTILS_H

#include "datatypes.h"

/* ----------------------------------------------------------- */

inline
double *
get_block_start(const struct block_matrix *, int, int);


inline
int
get_block_height(const struct block_matrix *, int, int);


inline
int
get_block_width(const struct block_matrix *, int, int);


block
get_block(const struct block_matrix *, int, int);

/* ----------------------------------------------------------- */

#endif