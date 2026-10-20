/* event/bustupEvent/BustupCutAnim.c: the bust-up cut animation of the events. */
#ifndef EVENT_BUSTUPEVENT_BUSTUPCUTANIM_H
#define EVENT_BUSTUPEVENT_BUSTUPCUTANIM_H

#include "common.h"

#define BUSTUP_CUT_SLOTS 4
#define BUSTUP_CUT_ENTRIES 0x1C

/* The animation's state block (Shin Megami Tensei IV layout), kept by a module global. */
typedef struct BustupCutAnim {
    /* 0x000 */ u32 job;                          /* job that runs the animation */
    /* 0x004 */ u8 unk004[0x5E0];
    /* 0x5E4 */ s32 unk5E4;
    /* 0x5E8 */ s32 unk5E8;
    /* 0x5EC */ s32 unk5EC;
    /* 0x5F0 */ u8 unk5F0[2];
    /* 0x5F2 */ u8 unk5F2;
    /* 0x5F3 */ u8 unk5F3[0x3D];
    /* 0x630 */ u32 slots[BUSTUP_CUT_SLOTS];      /* job handles */
    /* 0x640 */ u8 unk640[0x18];
    /* 0x658 */ u32 unk658[BUSTUP_CUT_ENTRIES];
    /* 0x6C8 */ u32 unk6C8[BUSTUP_CUT_ENTRIES];
} BustupCutAnim;

/* The same block in Apocalypse: everything from unk5E8 on sits four bytes later. */
typedef struct BustupCutAnimA {
    /* 0x000 */ u32 job;
    /* 0x004 */ u8 unk004[0x5E4];
    /* 0x5E8 */ s32 unk5E8;
    /* 0x5EC */ s32 unk5EC;
    /* 0x5F0 */ s32 unk5F0;
    /* 0x5F4 */ u8 unk5F4[2];
    /* 0x5F6 */ u8 unk5F6;
    /* 0x5F7 */ u8 unk5F7[0x3D];
    /* 0x634 */ u32 slots[BUSTUP_CUT_SLOTS];
    /* 0x644 */ u8 unk644[0x18];
    /* 0x65C */ u32 unk65C[BUSTUP_CUT_ENTRIES];
    /* 0x6CC */ u32 unk6CC[BUSTUP_CUT_ENTRIES];
} BustupCutAnimA;

#endif
