/* clear_save/clearSave.c: the clear-data save screen shown after finishing the game. */
#ifndef CLEAR_SAVE_CLEARSAVE_H
#define CLEAR_SAVE_CLEARSAVE_H

#include "common.h"
#include <stddef.h>
#include "script/ScriptVm.h"

/* Work area, Shin Megami Tensei IV. */
typedef struct ClearSaveWork {
    union {
        /* 0x00 */ u8 unk00[0x8];
        /* 0x00 */ u32 process;
    };
    /* 0x08 */ u8 active;
    /* 0x09 */ u8 unk09[0x3];
    /* 0x0C */ s32 state;                  /* update state machine step */
    /* 0x10 */ u8 options[8];              /* what to clear; [6] is set once a unit was picked */
    /* 0x18 */ s32 selectedUnit;           /* the stock unit to keep */
    /* 0x1C */ s32 cursor;                 /* the option row, 0..8 */
    /* 0x20 */ s32 unitCursor;             /* the row of the unit list */
    /* 0x24 */ s32 unitIds[24];            /* the stock units listed */
    /* 0x84 */ s32 unitCount;
    /* 0x88 */ void *heapA;               /* heap block, freed on close */
    /* 0x8C */ ScriptProcess *resource;               /* released on close */
    /* 0x90 */ void *heapB;               /* heap block, freed on close */
} ClearSaveWork;

/* Work area, Shin Megami Tensei IV: Apocalypse. */
typedef struct ClearSaveWorkA {
    /* 0x00 */ u32 process;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u8 active;
    /* 0x09 */ u8 unk09[0x3];
    /* 0x0C */ s32 state;                  /* update state machine step */
    /* 0x10 */ u8 options[9];              /* IV's eight plus Apocalypse's ninth; [6] is set once a unit was picked */
    /* 0x19 */ u8 unk19[0x3];
    /* 0x1C */ s32 selectedUnit;           /* the stock unit to keep */
    /* 0x20 */ s32 cursor;                 /* the option row, 0..8 */
    /* 0x24 */ s32 unitCursor;             /* the row of the unit list */
    /* 0x28 */ s32 unitIds[24];            /* the stock units listed */
    /* 0x88 */ s32 unitCount;
    /* 0x8C */ void *heapA;               /* heap block, freed on close */
    /* 0x90 */ ScriptProcess *resource;               /* released on close */
    /* 0x94 */ void *heapB;               /* heap block, freed on close */
} ClearSaveWorkA;
typedef char ClearSaveWorkLayoutCheck[
    sizeof(ClearSaveWork) == 0x94 && sizeof(ClearSaveWorkA) == 0x98 &&
    offsetof(ClearSaveWork, process) == 0 && offsetof(ClearSaveWork, heapA) == 0x88 ? 1 : -1];
typedef char ClearSaveWorkStepOffsets[
    offsetof(ClearSaveWork, options) == 0x10 && offsetof(ClearSaveWork, cursor) == 0x1C &&
    offsetof(ClearSaveWork, unitIds) == 0x24 && offsetof(ClearSaveWork, unitCount) == 0x84 ? 1 : -1];
typedef char ClearSaveWorkAOffsets[
    offsetof(ClearSaveWorkA, process) == 0 && offsetof(ClearSaveWorkA, active) == 8 &&
    offsetof(ClearSaveWorkA, state) == 0xC && offsetof(ClearSaveWorkA, options) == 0x10 &&
    offsetof(ClearSaveWorkA, selectedUnit) == 0x1C && offsetof(ClearSaveWorkA, unitIds) == 0x28 &&
    offsetof(ClearSaveWorkA, unitCount) == 0x88 && offsetof(ClearSaveWorkA, resource) == 0x90 ? 1 : -1];

extern "C" {
void screenFadeSlotReset(u32 index);
s32 clearSaveUpdate(u32 job);
void FUN_00261a28(const u8 *options);
}

#endif
