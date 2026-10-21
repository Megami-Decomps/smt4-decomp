#include "common.h"

namespace {
struct PositionState {
    /* 0x00 */ u8 unk00[0x9c];
    /* 0x9c */ u32 first;
    /* 0xa0 */ u32 second;
    /* 0xa4 */ u8 unkA4[4];
    /* 0xa8 */ f32 scale;
};
}

/* Updates the position parameters and scale. */
extern "C" void FUN_002bd81c(PositionState *object, u32 first, u32 second, f32 scale)
{
    object->first = first;
    object->second = second;
    object->scale = scale;
}
