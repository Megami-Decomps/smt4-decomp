#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern void renderGetCameraViewMatrix(u32 *matrix);

/* Captures the three matrix translation components. */
void matrixGetTranslation(MatrixTranslation *result)
{
    u32 matrix[16];
    renderGetCameraViewMatrix(matrix);
    result->first = matrix[2];
    result->second = matrix[6];
    result->third = matrix[10];
    result->scalar = 0.0f;
}

} /* extern "C" */
