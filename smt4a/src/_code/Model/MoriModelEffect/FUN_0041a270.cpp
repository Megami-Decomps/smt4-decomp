#include "shard/S1ModelEffect.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern const char DAT_00526044[];
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);

/* A fresh entry: no flags, no id. */
static __inline ModelEffectEntry *initEntry(ModelEffectEntry *entry)
{
    entry->flags = 0;
    entry->id = -1;
    entry->unk08 = 0;
    entry->unk0C = NULL;
    return entry;
}

// Build the model's private list of flagged effect entries, cloning their resource handles.
void FUN_0041a270(ModelEffects *effects)
{
    ModelEffectList *filtered = &effects->filtered;
    ModelEffectTable *table = effects->table;
    filtered->count = 0;
    s32 index = 0;
    while (index < table->count) {
        if ((table->entries[index]->flags & 1) != 0) {
            ++filtered->count;
        }
        ++index;
    }
    if (filtered->count == 0) {
        filtered->items = NULL;
        return;
    }
    asdDebugTrace(DAT_00526044, 0xC4);
    filtered->items = static_cast<ModelEffectEntry **>(asdMemoryAllocTracked(
        ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, filtered->count * sizeof(ModelEffectEntry *), 1));
    s32 copied = 0;
    for (s32 index = 0; index < table->count; ++index) {
        ModelEffectEntry *source = table->entries[index];
        if ((source->flags & 1) != 0) {
            void *memory = FUN_00178b04(sizeof(ModelEffectEntry), DAT_00526044, 0xC9);
            ModelEffectEntry *entry = memory != NULL ? initEntry(static_cast<ModelEffectEntry *>(memory)) : NULL;
            entry->id = source->id;
            entry->flags = source->flags;
            entry->unk08 = source->unk08;
            entry->unk0C = FUN_00291038(source->unk0C);
            filtered->items[copied++] = entry;
        }
    }
}
}
