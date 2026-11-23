/* event/2dEvent/2dEventTex.c: textures of the 2D event scenes. */
#ifndef EVENT_2DEVENT_2DEVENTTEX_H
#define EVENT_2DEVENT_2DEVENTTEX_H

#include "common.h"
#include <stddef.h>

#define EVENT_TEX_SLOTS 4
#define EVENT_TEX_HANDLES 10

struct EventTexOrigin {
    f32 x;
    f32 y;
};

/* The scene's texture block (Shin Megami Tensei IV layout), kept by a module global. */
typedef struct EventTex {
    /* 0x00 */ u32 job;                       /* job that runs the scene */
    /* 0x04 */ u32 slots[EVENT_TEX_HANDLES];  /* first `count` are in use */
    /* 0x2C */ s32 count;
    /* 0x30 */ u32 current;                   /* handle currently shown */
    /* 0x34 */ u32 handles[EVENT_TEX_HANDLES];
    /* 0x5C */ u8 flag;                       /* draws every valid job when set */
    /* 0x5D */ u8 unk5D[3];
    /* 0x60 */ EventTexOrigin drawOrigin;
} EventTex;

/* The same block in Apocalypse: sixteen of each handle. */
#define EVENT_TEX_HANDLES_A 0x10

typedef struct EventTexA {
    /* 0x00 */ u32 job;
    /* 0x04 */ u32 slots[EVENT_TEX_HANDLES_A];
    /* 0x44 */ s32 count;
    /* 0x48 */ u32 current;
    /* 0x4C */ u32 handles[EVENT_TEX_HANDLES_A];
    /* 0x8C */ u8 flag;                       /* draws every valid job when set */
    /* 0x8D */ u8 unk8D[3];
    /* 0x90 */ EventTexOrigin drawOrigin;
} EventTexA;

typedef char EventTexDrawLayoutCheck[offsetof(EventTex, drawOrigin) == 0x60 && sizeof(EventTex) == 0x68 &&
    offsetof(EventTexA, drawOrigin) == 0x90 && sizeof(EventTexA) == 0x98 ? 1 : -1];

extern "C" {
u8 *saveGetUserSettingsBlock(void);
}

#endif
