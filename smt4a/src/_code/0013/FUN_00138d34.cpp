/* NON_MATCHING: instruction selection/order differs: retail .word 0x00000000  [R_ARM_ABS32 DAT_00636f58]; compiler .word 0x3f800000  [R_ARM_ABS32 DAT_00636f58]  [R_ARM_ABS32 DAT_005b3ce8]. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern Vector4 DAT_00636f58;
extern Vector4 *DAT_005b3ce8;

/* Initializes the default four-component vector to one. */
void FUN_00138d34(void)
{
    DAT_00636f58.x = 1.0f;
    DAT_00636f58.y = 1.0f;
    DAT_00636f58.z = 1.0f;
    DAT_00636f58.w = 1.0f;
    DAT_005b3ce8 = &DAT_00636f58;
}

} /* extern "C" */
