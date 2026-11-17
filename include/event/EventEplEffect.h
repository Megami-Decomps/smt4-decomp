#ifndef EVENT_EVENT_EPL_EFFECT_H
#define EVENT_EVENT_EPL_EFFECT_H
#include "common.h"
#include <stddef.h>

/* An EPL event effect job's work (FUN_0030a2c0, Apocalypse event3dEventEffectCreate): the process
 * (effectJobUpdateSpawn) spawns the effect from the loaded definition and runs it, two draw tasks
 * (FUN_002248b8 / FUN_0032063c) draw it once started, and eventWorkRelease destroys it. Every
 * callback receives this work from jobGetWork(). */
struct EventEplEffectWork {
    /* 0x00 */ u32 job;
    /* 0x04 */ s32 phase;
    /* 0x08 */ const void *pending;     /* the loaded effect definition */
    /* 0x0C */ void *current;           /* the spawned effect */
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
