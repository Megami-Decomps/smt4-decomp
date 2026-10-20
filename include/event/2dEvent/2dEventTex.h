/* event/2dEvent/2dEventTex.c: textures of the 2D event scenes. */
#ifndef EVENT_2DEVENT_2DEVENTTEX_H
#define EVENT_2DEVENT_2DEVENTTEX_H

#include "common.h"

#define EVENT_TEX_SLOTS 4
#define EVENT_TEX_HANDLES 10

/* The scene's texture block (Shin Megami Tensei IV layout), kept by a module global. */
typedef struct EventTex {
    /* 0x00 */ u32 job;                       /* job that runs the scene */
    /* 0x04 */ u32 slots[EVENT_TEX_HANDLES];  /* first `count` are in use */
    /* 0x2C */ s32 count;
    /* 0x30 */ u32 current;                   /* handle currently shown */
    /* 0x34 */ u32 handles[EVENT_TEX_HANDLES];
    /* 0x5C */ u8 flag;
} EventTex;

/* The same block in Apocalypse: sixteen of each handle. */
#define EVENT_TEX_HANDLES_A 0x10

typedef struct EventTexA {
    /* 0x00 */ u32 job;
    /* 0x04 */ u32 slots[EVENT_TEX_HANDLES_A];
    /* 0x44 */ s32 count;
    /* 0x48 */ u32 current;
    /* 0x4C */ u32 handles[EVENT_TEX_HANDLES_A];
    /* 0x8C */ u8 flag;
} EventTexA;

#endif
