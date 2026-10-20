#include "shard/Shard004C.h"

extern "C" {

typedef struct HalfTable152 {
    /* 0x000 */ u8 unk000[0x152];
    /* 0x152 */ u16 values[1];
} HalfTable152;

u8 halfTable152TopIs2(HalfTable152 *obj, s32 index)
{
    return obj->values[index] >> 10 == 2;
}

} /* extern "C" */
