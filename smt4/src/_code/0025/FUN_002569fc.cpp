#include "shard/W5_W5Match2_PlainData.h"

// Set a four-by-four matrix to the identity transform.
extern "C" void FUN_002569fc(Matrix44 *matrix)
{
    matrix->values[0] = matrix->values[5] = matrix->values[10] = matrix->values[15] = 1.0f;
    matrix->values[3] = 0.0f;
    matrix->values[7] = 0.0f;
    matrix->values[11] = 0.0f;
    matrix->values[4] = 0.0f;
    matrix->values[2] = 0.0f;
    matrix->values[1] = 0.0f;
    matrix->values[9] = 0.0f;
    matrix->values[8] = 0.0f;
    matrix->values[6] = 0.0f;
    matrix->values[14] = 0.0f;
    matrix->values[13] = 0.0f;
    matrix->values[12] = 0.0f;
}
