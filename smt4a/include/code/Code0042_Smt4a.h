#pragma once
#include "common.h"

/* Functions in the 0x00420000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Object00429d58;
struct CounterPair;
struct AnimationModeState;
extern "C" {

u32 FUN_00426264(void *output, const void *input);

u32 FUN_00429d58(Object00429d58 *object);

u8 counterPairReset(CounterPair *obj);

f32 animationGetModeChannelValue(AnimationModeState* state);

} /* extern "C" */
