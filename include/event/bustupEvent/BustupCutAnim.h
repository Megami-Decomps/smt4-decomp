/* event/bustupEvent/BustupCutAnim.c: the bust-up cut animation of the events. */
#ifndef EVENT_BUSTUPEVENT_BUSTUPCUTANIM_H
#define EVENT_BUSTUPEVENT_BUSTUPCUTANIM_H

#include "common.h"
#include <stddef.h>

#define BUSTUP_CUT_SLOTS 4
#define BUSTUP_CUT_ENTRIES 0x1C

struct ShakeAmplitudes {
    /* 0x00 */ f32 values[3];
};

/* The animation's state block (Shin Megami Tensei IV layout), kept by a module global. */
typedef struct BustupCutAnim {
    /* 0x000 */ u32 job;                          /* job that runs the animation */
    union {
        /* 0x004 */ u8 unk004[0x5E0];
        struct {
            u8 unk004BeforeTransition[0x5D4];
            /* 0x5D8 */ f32 duration;
            u8 unk5DC[4];
            /* 0x5E0 */ u32 mode;
        } transition;
    };
    /* 0x5E4 */ s32 unk5E4;
    /* 0x5E8 */ s32 unk5E8;
    /* 0x5EC */ s32 unk5EC;
    /* 0x5F0 */ u8 unk5F0[2];
    /* 0x5F2 */ u8 unk5F2;
    /* 0x5F3 */ u8 unk5F3[0x11];
    /* 0x604 */ u32 unk604;
    union {
        /* 0x608 */ u8 unk608[0x28];
        /* 0x608 */ u32 recentJobs[10];
    };
    /* 0x630 */ u32 slots[BUSTUP_CUT_SLOTS];      /* job handles */
    union {
        /* 0x640 */ u8 unk640[0x18];
        struct {
            u8 unk640BeforePosition[0x10];
            /* 0x650 */ f32 x;
            /* 0x654 */ f32 y;
        } transitionPosition;
    };
    /* 0x658 */ u32 unk658[BUSTUP_CUT_ENTRIES];
    /* 0x6C8 */ u32 unk6C8[BUSTUP_CUT_ENTRIES];
    /* 0x738 */ f32 shakeX;
    /* 0x73C */ f32 shakeY;
} BustupCutAnim;

typedef char BustupCutAnimLayoutCheck[sizeof(BustupCutAnim) == 0x740 &&
    offsetof(BustupCutAnim, unk604) == 0x604 &&
    offsetof(BustupCutAnim, slots) == 0x630 ? 1 : -1];
typedef char BustupCutTransitionOffsetCheck[
    offsetof(BustupCutAnim, transition.duration) == 0x5D8 &&
    offsetof(BustupCutAnim, transition.mode) == 0x5E0 &&
    offsetof(BustupCutAnim, recentJobs) == 0x608 &&
    offsetof(BustupCutAnim, transitionPosition.x) == 0x650 &&
    offsetof(BustupCutAnim, transitionPosition.y) == 0x654 ? 1 : -1];

/* The same block in Apocalypse: everything from unk5E8 on sits four bytes later. */
typedef struct BustupCutAnimA {
    /* 0x000 */ u32 job;
    union {
        /* 0x004 */ u8 unk004[0x5E4];
        struct {
            u8 unk004BeforeTransition[0x5D8];
            /* 0x5DC */ f32 duration;
            u8 unk5E0[4];
            /* 0x5E4 */ u32 mode;
        } transition;
    };
    /* 0x5E8 */ s32 unk5E8;
    /* 0x5EC */ s32 unk5EC;
    /* 0x5F0 */ s32 unk5F0;
    /* 0x5F4 */ u8 unk5F4[2];
    /* 0x5F6 */ u8 unk5F6;
    /* 0x5F7 */ u8 unk5F7[0x11];
    /* 0x608 */ u32 unk608;
    union {
        /* 0x60C */ u8 unk60C[0x28];
        /* 0x60C */ u32 recentJobs[10];
    };
    /* 0x634 */ u32 slots[BUSTUP_CUT_SLOTS];
    union {
        /* 0x644 */ u8 unk644[0x18];
        struct {
            u8 unk644BeforePosition[0x10];
            /* 0x654 */ f32 x;
            /* 0x658 */ f32 y;
        } transitionPosition;
    };
    /* 0x65C */ u32 unk65C[BUSTUP_CUT_ENTRIES];
    /* 0x6CC */ u32 unk6CC[BUSTUP_CUT_ENTRIES];
    /* 0x73C */ f32 shakeX;
    /* 0x740 */ f32 shakeY;
} BustupCutAnimA;

typedef char BustupCutAnimALayoutCheck[sizeof(BustupCutAnimA) == 0x744 &&
    offsetof(BustupCutAnimA, unk608) == 0x608 &&
    offsetof(BustupCutAnimA, slots) == 0x634 ? 1 : -1];

typedef char BustupCutAnimATransitionOffsets[
    offsetof(BustupCutAnimA, transition.duration) == 0x5DC &&
    offsetof(BustupCutAnimA, transition.mode) == 0x5E4 &&
    offsetof(BustupCutAnimA, recentJobs) == 0x60C &&
    offsetof(BustupCutAnimA, transitionPosition.x) == 0x654 &&
    offsetof(BustupCutAnimA, transitionPosition.y) == 0x658 ? 1 : -1];

#endif
