#include "common.h"

namespace {
struct FloatState {
    /* 0x000 */ u8 unk000[0x500];
    /* 0x500 */ f32 second;
    /* 0x504 */ f32 first;
};
}

/* Sets the two floating-point state values. */
extern "C" void FUN_002c159c(FloatState *object, f32 first, f32 second)
{
    object->first = first;
    object->second = second;
}
