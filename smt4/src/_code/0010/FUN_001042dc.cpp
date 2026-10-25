/* NON_MATCHING: literal pool orders 1.0f before the vector address; retail orders the address first. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern Vector4 DAT_004daed8;
extern Vector4 *DAT_00464c40;

/* Initializes the default four-component vector to one. */
void FUN_001042dc(void)
{
    Vector4 *vector = &DAT_004daed8;
    vector->x = 1.0f;
    vector->y = 1.0f;
    vector->z = 1.0f;
    vector->w = 1.0f;
    DAT_00464c40 = vector;
}

} /* extern "C" */
