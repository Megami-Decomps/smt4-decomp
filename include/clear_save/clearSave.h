/* clear_save/clearSave.c: the clear-data save screen shown after finishing the game. */
#ifndef CLEAR_SAVE_CLEARSAVE_H
#define CLEAR_SAVE_CLEARSAVE_H

#include "common.h"

/* Work area, Shin Megami Tensei IV. */
typedef struct ClearSaveWork {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u8 active;
    /* 0x09 */ u8 unk09[0x3];
    /* 0x0C */ s32 state;                  /* update state machine step */
    /* 0x10 */ u8 unk10[0x78];
    /* 0x88 */ void *heapA;               /* heap block, freed on close */
    /* 0x8C */ u32 resource;               /* released on close */
    /* 0x90 */ void *heapB;               /* heap block, freed on close */
} ClearSaveWork;

/* Work area, Shin Megami Tensei IV: Apocalypse. */
typedef struct ClearSaveWorkA {
    /* 0x00 */ u8 unk00[0x8C];
    /* 0x8C */ void *heapA;               /* heap block, freed on close */
    /* 0x90 */ u32 resource;               /* released on close */
    /* 0x94 */ void *heapB;               /* heap block, freed on close */
} ClearSaveWorkA;

#endif
