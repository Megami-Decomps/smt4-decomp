/* clear_save/clearSave.c: the clear-data save screen shown after finishing the game. */
#ifndef CLEAR_SAVE_CLEARSAVE_H
#define CLEAR_SAVE_CLEARSAVE_H

#include "common.h"
#include <stddef.h>

/* Work area, Shin Megami Tensei IV. */
typedef struct ClearSaveWork {
    union {
        /* 0x00 */ u8 unk00[0x8];
        /* 0x00 */ u32 process;
    };
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
    union {
        /* 0x00 */ u8 unk00[0x8C];
        struct {
            /* 0x00 */ u32 process;
            /* 0x04 */ u8 unk04[4];
            /* 0x08 */ u8 active;
        } initialization;
    };
    /* 0x8C */ void *heapA;               /* heap block, freed on close */
    /* 0x90 */ u32 resource;               /* released on close */
    /* 0x94 */ void *heapB;               /* heap block, freed on close */
} ClearSaveWorkA;
typedef char ClearSaveWorkLayoutCheck[
    sizeof(ClearSaveWork) == 0x94 && sizeof(ClearSaveWorkA) == 0x98 &&
    offsetof(ClearSaveWork, process) == 0 && offsetof(ClearSaveWork, heapA) == 0x88 ? 1 : -1];
typedef char ClearSaveWorkAInitializationOffsets[
    offsetof(ClearSaveWorkA, initialization.process) == 0 &&
    offsetof(ClearSaveWorkA, initialization.active) == 8 && sizeof(ClearSaveWorkA) == 0x98 ? 1 : -1];

extern "C" {
void FUN_00212204(u32 index);
}

#endif
