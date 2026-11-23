/* The model-effect collection built from a model's effect table (MoriModelEffect). */
#ifndef SHARD_S1MODELEFFECT_H
#define SHARD_S1MODELEFFECT_H

#include "Model/ModelUnitBuffers.h"

struct EffPartList;
extern "C" {
void *asdMemoryAllocTraced(u32 bytes, const char *file, u32 line);
EffPartList *effPartClone(EffPartList *source);
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

/* Copy an entry's metadata and clone the owned effect parts. */
static void modelEffectCopyEntry(ModelEffectEntry *entry, const ModelEffectEntry *source)
{
    entry->id = source->id;
    entry->flags = source->flags;
    entry->unk08 = source->unk08;
    entry->unk0C = effPartClone(source->unk0C);
}

typedef UnitExtraData ModelEffectTable;
typedef ModelUnitExtra ModelEffects;

#endif
