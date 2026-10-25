/* The model-effect collection built from a model's effect table (MoriModelEffect). */
#ifndef SHARD_S1MODELEFFECT_H
#define SHARD_S1MODELEFFECT_H

#include "common.h"
#include <stddef.h>

struct EffPartList;
extern "C" {
void *FUN_00178b04(u32 bytes, const char *file, u32 line);
EffPartList *FUN_00291038(EffPartList *source);
}

/* One effect entry (16 bytes). */
typedef struct ModelEffectEntry {
    /* 0x00 */ s32 id;
    /* 0x04 */ u32 flags;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ EffPartList *unk0C;
} ModelEffectEntry;
typedef char ModelEffectEntryLayoutCheck[
    sizeof(ModelEffectEntry) == 0x10 && offsetof(ModelEffectEntry, id) == 0 &&
    offsetof(ModelEffectEntry, flags) == 4 && offsetof(ModelEffectEntry, unk08) == 8 &&
    offsetof(ModelEffectEntry, unk0C) == 0xC ? 1 : -1];

/* An effect table: an array of pointers to entries. */
typedef struct ModelEffectTable {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 count;
    /* 0x0C */ ModelEffectEntry **entries;
} ModelEffectTable;

/* The list of a model's entries (itemTableClear resets the count). */
typedef struct ModelEffectList {
    /* 0x00 */ s32 count;
    /* 0x04 */ ModelEffectEntry **items;
} ModelEffectList;

/* The effects of one model: its entries copied out of the shared table. */
typedef struct ModelEffects {
    /* 0x00 */ union {
        u8 unk00[4];
        const void *vtable;
    };
    /* 0x04 */ ModelEffectTable *table;
    /* 0x08 */ union {
        u8 unk08[8];
        struct {
            u32 argument; // 0x08
            s32 count; // 0x0c
        } setup;
    };
    /* 0x10 */ u32 modelId;
    /* 0x14 */ union {
        u8 unk14[8];
        ModelEffectList filtered;
    };
    /* 0x1C */ ModelEffectList list;
} ModelEffects;

#endif
