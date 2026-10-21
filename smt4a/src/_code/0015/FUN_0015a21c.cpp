#include "common.h"

namespace {
struct FloatState {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ f32 first;
    /* 0x54 */ u8 unk54[8];
    /* 0x5c */ f32 second;
};
}

/* Clears the two floating-point state values. */
extern "C" void FUN_0015a21c(FloatState *object)
{
    object->first = 0.0f;
    object->second = 0.0f;
}
