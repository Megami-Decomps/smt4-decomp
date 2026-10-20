#include "shard/Shard0043.h"

extern "C" {

/* IEEE-754 1.0f. */
#define FLOAT_ONE 0x3F800000

/* Builds a translation matrix (identity with the translation in the last column) from a vector. */
void matrixSetTranslation(u32 *matrix, const u32 *translation)
{
    matrix[1] = 0;
    matrix[0] = FLOAT_ONE;
    matrix[2] = 0;
    matrix[3] = translation[0];
    matrix[4] = 0;
    matrix[5] = FLOAT_ONE;
    matrix[6] = 0;
    matrix[7] = translation[1];
    matrix[8] = 0;
    matrix[9] = 0;
    matrix[10] = FLOAT_ONE;
    matrix[11] = translation[2];
    matrix[12] = 0;
    matrix[13] = 0;
    matrix[14] = 0;
    matrix[15] = FLOAT_ONE;
}

} /* extern "C" */
