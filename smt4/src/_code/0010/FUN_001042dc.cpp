/* NON_MATCHING: instruction selection/order differs: retail .word 0x00000000  [R_ARM_ABS32 DAT_004daed8]; compiler .word 0x3f800000  [R_ARM_ABS32 DAT_004daed8]  [R_ARM_ABS32 DAT_00464c40]. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern Vector4 DAT_004daed8;
extern Vector4 *DAT_00464c40;

/* Initializes the default four-component vector to one. */
void FUN_001042dc(void)
{
    DAT_004daed8.x = 1.0f;
    DAT_004daed8.y = 1.0f;
    DAT_004daed8.z = 1.0f;
    DAT_004daed8.w = 1.0f;
    DAT_00464c40 = &DAT_004daed8;
}

} /* extern "C" */
