/* Structs shared by the helper functions in code shard 004B. */
#ifndef SHARD_SHARD004B_H
#define SHARD_SHARD004B_H

#include "common.h"

#include "shard/Shard004A.h"

typedef struct ListEntry20 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 kind;
    /* 0x21 */ u8 unk21[7];
    /* 0x28 */ s16 cameraView;   /* the view the scene's camera controller takes for this entry */
    /* 0x2A */ u8 unk2A;
    /* 0x2B */ s8 modelIndex;    /* which of the location's models the entry shows */
    /* 0x2C */ u8 unk2C[0x2E];
    /* 0x5A */ u16 unk5A;
} ListEntry20;

typedef struct Menu4C {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ u32 flags;
    /* 0x024 */ u8 unk024[0x1E];
    /* 0x042 */ u8 value42[6];
    /* 0x048 */ u8 unk048[0x2C];
    /* 0x074 */ u8 block74[0x10];
    /* 0x084 */ u8 flag84;
    union {
        /* 0x085 */ u8 unk085[0x23];
        struct {
            /* 0x085 */ u8 unk085;
            /* 0x086 */ s8 enabled;
        } selectionInput;
    };
    /* 0x0A8 */ u8 blockA8[4];
    /* 0x0AC */ u8 unk0AC[0x73C];
    /* 0x7E8 */ s32 count;
    /* 0x7EC */ ListEntry20 *list[0x7F];
    /* 0x9E8 */ u8 unk9E8[4];
    /* 0x9EC */ u8 inputLocked;  /* set while the owner leaves for the camp */
    /* 0x9ED */ u8 unk9ED;
    /* 0x9EE */ u8 unk9EE;
    /* 0x9EF */ u8 unk9EF[0x21];
    /* 0xA10 */ u8 rowsA10[10][0x8C];
    /* 0xF88 */ u8 unkF88[0x8C];
    /* 0x1014 */ u32 unk1014;
    /* 0x1018 */ u32 unk1018;
    /* 0x101C */ u32 unk101C;
    /* 0x1020 */ u32 unk1020;
    union {
        /* 0x1024 */ u8 unk1024[0x10];
        /* 0x1024 */ s32 selectionIds[4];
        struct {
            /* 0x1024 */ u8 unk1024[8];
            /* 0x102C */ s32 node;
            /* 0x1030 */ s32 keyframe;
        } preload;
    };
    union {
        /* 0x1034 */ u8 flags1034[0x40];
        /* 0x1034 */ u32 resetFlags[16];
    };
    /* 0x1074 */ u32 unk1074;
} Menu4C;

typedef struct EntryD0 {
    /* 0x00 */ u8 data[0xD0];
} EntryD0;

#include <stddef.h>

struct ItemRankDefinition {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 category;
};

typedef char Menu4CPreloadOffsetCheck[
    sizeof(Menu4C) == 0x1078 &&
    offsetof(Menu4C, selectionInput.enabled) == 0x86 &&
    offsetof(Menu4C, preload.node) == 0x102C &&
    offsetof(Menu4C, preload.keyframe) == 0x1030 ? 1 : -1];
typedef char Menu4CResetOffsets[
    offsetof(Menu4C, selectionIds) == 0x1024 &&
    offsetof(Menu4C, resetFlags) == 0x1034 &&
    sizeof(Menu4C) == 0x1078 ? 1 : -1];

#endif
