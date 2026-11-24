/* The runtime entry pool at 0x5F32A0 and its two counters at 0x580C90. */
#ifndef SHARD_RUNTIME_ENTRY_TABLE_H
#define SHARD_RUNTIME_ENTRY_TABLE_H

#include "common.h"
#include <stddef.h>

struct RuntimeEntryTable {
    /* 0x00 */ s32 boundsCount;
    /* 0x04 */ s32 count;
};

struct RuntimeEntry {
    /* 0x000 */ f32 primaryVectors[8][3];
    /* 0x060 */ u8 unk060[0xC];
    /* 0x06C */ f32 vector6C[3];
    /* 0x078 */ u8 unk078[4];
    /* 0x07C */ f32 secondaryVectors[6][3];
    /* 0x0C4 */ f32 scalars[6];
    /* 0x0DC */ u8 unk0DC[0x48];
    /* 0x124 */ u32 handle;
    /* 0x128 */ u8 kind;
    /* 0x129 */ u8 unk129[3];
    union {
        /* 0x12C */ void *object;
        /* 0x12C */ s32 id;
    };
    /* 0x130 */ u32 creationId;
    /* 0x134 */ s32 state;
    /* 0x138 */ u8 unk138[0x24];
    /* 0x15C */ u16 frame;
    /* 0x15E */ s16 previous;
    /* 0x160 */ s16 requiredFlag;
    /* 0x162 */ s16 forbiddenFlag;
    /* 0x164 */ s8 disabled;
    /* 0x165 */ u8 unk165;
    /* 0x166 */ u16 first;
    /* 0x168 */ u16 second;
    /* 0x16A */ u16 unk16A;
    /* 0x16C */ u8 flags;
    /* 0x16D */ u8 mode;
    /* 0x16E */ u8 unk16E[6];
    /* 0x174 */ s32 target;
    /* 0x178 */ u16 unk178;
    /* 0x17A */ u16 unk17A;
};

typedef char RuntimeEntryOffsets[
    sizeof(RuntimeEntry) == 0x17C && offsetof(RuntimeEntry, vector6C) == 0x6C &&
    offsetof(RuntimeEntry, secondaryVectors) == 0x7C && offsetof(RuntimeEntry, scalars) == 0xC4 &&
    offsetof(RuntimeEntry, handle) == 0x124 && offsetof(RuntimeEntry, kind) == 0x128 &&
    offsetof(RuntimeEntry, object) == 0x12C && offsetof(RuntimeEntry, creationId) == 0x130 &&
    offsetof(RuntimeEntry, state) == 0x134 && offsetof(RuntimeEntry, frame) == 0x15C &&
    offsetof(RuntimeEntry, previous) == 0x15E && offsetof(RuntimeEntry, requiredFlag) == 0x160 &&
    offsetof(RuntimeEntry, forbiddenFlag) == 0x162 && offsetof(RuntimeEntry, disabled) == 0x164 &&
    offsetof(RuntimeEntry, first) == 0x166 && offsetof(RuntimeEntry, second) == 0x168 &&
    offsetof(RuntimeEntry, flags) == 0x16C && offsetof(RuntimeEntry, mode) == 0x16D &&
    offsetof(RuntimeEntry, target) == 0x174 ? 1 : -1];
typedef char RuntimeEntryTableOffsets[
    sizeof(RuntimeEntryTable) == 8 && offsetof(RuntimeEntryTable, count) == 4 ? 1 : -1];

extern "C" {
extern RuntimeEntryTable DAT_00580c90;
extern RuntimeEntry g_recordTable[160];
} /* extern "C" */

#endif
