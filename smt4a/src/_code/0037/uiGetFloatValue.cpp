#include "common.h"

extern "C" {

struct ValueOwner {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ s32 value;
};

f32 uiGetFloatValue(const ValueOwner *owner)
{
    return (f32)owner->value;
}

} /* extern "C" */
