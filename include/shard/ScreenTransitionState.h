#ifndef SHARD_SCREENTRANSITIONSTATE_H
#define SHARD_SCREENTRANSITIONSTATE_H

#include "common.h"
#include <stddef.h>

struct ScreenTransitionCallback;
struct ScreenTransitionCallbackVtable {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*destroy)(ScreenTransitionCallback *callback);
};
struct ScreenTransitionCallback {
    /* 0x00 */ ScreenTransitionCallbackVtable *vtable;
};
struct ScreenTransitionState {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ u32 flags;
    /* 0x008 */ s32 phase;
    /* 0x00c */ u8 unk00c[0x1fc];
    /* 0x208 */ ScreenTransitionCallback *callback;
};

typedef char ScreenTransitionStateLayoutCheck[sizeof(ScreenTransitionState) == 0x20c &&
    offsetof(ScreenTransitionState, phase) == 8 &&
    offsetof(ScreenTransitionState, callback) == 0x208 ? 1 : -1];

#endif
