#ifndef EVENT_EVENT_EPL_EFFECT_H
#define EVENT_EVENT_EPL_EFFECT_H
#include "common.h"
#include <stddef.h>

struct EventEplEffectWork {
    /* 0x00 */ u32 job;
    /* 0x04 */ s32 phase;
    /* 0x08 */ const void *pending;
    /* 0x0C */ void *current;
    /* 0x10 */ u8 started;
    /* 0x11 */ u8 unk11[7];
    /* 0x18 */ u32 resource;
    /* 0x1C */ f32 translation[4];
};
typedef char EventEplEffectWorkOffsets[
    offsetof(EventEplEffectWork, pending) == 8 &&
    offsetof(EventEplEffectWork, current) == 0xC &&
    offsetof(EventEplEffectWork, started) == 0x10 &&
    offsetof(EventEplEffectWork, resource) == 0x18 &&
    offsetof(EventEplEffectWork, translation) == 0x1C &&
    sizeof(EventEplEffectWork) == 0x2C ? 1 : -1];
#endif
