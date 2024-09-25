#ifndef MATRIX_TYPES_H
#define MATRIX_TYPES_H

#include <stdint.h>

/**
* Matrix data type definition.
*/
typedef float matrix_data_t;

/**
* \brief Matrix definition
*/
typedef struct {
    /**
    * \brief Number of rows
    */
    uint_fast8_t rows;

    /**
    * \brief Number of columns
    */
    uint_fast8_t cols;

    /**
    * \brief Pointer to the data array of size {\see rows} x {\see cols}.
    */
    matrix_data_t *data;
} matrix_t;

#endif