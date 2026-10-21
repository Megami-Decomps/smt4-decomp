/* NON_MATCHING: instruction selection/order differs: retail vldmia sp, {s0-s3}; compiler add r0, ip, #44. */
#include "shard/W5_W5Match1_RecordKeys.h"

struct CoordinateDefaults {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u32 first;
    /* 0x20 */ u32 third;
    /* 0x24 */ f32 x;
    /* 0x28 */ f32 y;
    /* 0x2C */ u32 second;
    /* 0x30 */ u32 fourth;
    /* 0x34 */ f32 z;
    /* 0x38 */ f32 w;
};

extern "C" {

extern CoordinateDefaults DAT_00465120;

/* Stores paired coordinate defaults and their scale vectors. */
void FUN_0010a174(u32 first, u32 second, u32 third, u32 fourth, Vector4 vector)
{
    DAT_00465120.first = first;
    DAT_00465120.third = third;
    DAT_00465120.second = second;
    DAT_00465120.fourth = fourth;
    DAT_00465120.x = vector.x;
    DAT_00465120.z = vector.y;
    DAT_00465120.y = vector.z;
    DAT_00465120.w = vector.w;
}

} /* extern "C" */
