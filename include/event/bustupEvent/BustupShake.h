#ifndef EVENT_BUSTUPEVENT_BUSTUPSHAKE_H
#define EVENT_BUSTUPEVENT_BUSTUPSHAKE_H
#include "common.h"
#include <stddef.h>

// A timed or endless shake, with two output cells updated by the process.
struct ShakeJobWorkIV {
    /* 0x00 */ f32 elapsed;
    /* 0x04 */ f32 duration;
    /* 0x08 */ f32 fadeStart;
    /* 0x0c */ f32 amplitudeX;
    /* 0x10 */ f32 amplitudeY;
    /* 0x14 */ f32 offsetX;
    /* 0x18 */ f32 offsetY;
    /* 0x1c */ f32 *outputX;
    /* 0x20 */ f32 *outputY;
};

/* Apocalypse adds an endless-shake flag after the shared timed-shake work. */
struct ShakeJobWork : ShakeJobWorkIV {
    union {
        /* 0x24 */ u32 flags;
        /* 0x24 */ u8 endless;
    };
};
typedef char ShakeJobWorkIVLayoutCheck[
    sizeof(ShakeJobWorkIV) == 0x24 && offsetof(ShakeJobWorkIV, outputX) == 0x1c &&
    offsetof(ShakeJobWorkIV, outputY) == 0x20 ? 1 : -1];
typedef char ShakeJobWorkLayoutCheck[
    sizeof(ShakeJobWork) == 0x28 && offsetof(ShakeJobWork, outputX) == 0x1c &&
    offsetof(ShakeJobWork, endless) == 0x24 ? 1 : -1];

#endif
