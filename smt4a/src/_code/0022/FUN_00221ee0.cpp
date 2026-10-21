/* NON_MATCHING: the compiler schedules the scalar output store before the second component store rather than after it. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern void FUN_001bced4(u32 *matrix);

/* Captures the three matrix translation components. */
void FUN_00221ee0(MatrixTranslation *result)
{
    u32 matrix[16];
    FUN_001bced4(matrix);
    result->first = matrix[2];
    result->second = matrix[6];
    result->scalar = 0.0f;
    result->third = matrix[10];
}

} /* extern "C" */
