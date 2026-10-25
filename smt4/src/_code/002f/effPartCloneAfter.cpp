#include "AsdSDK/Source/Gfx/Effect/effParts.h"
#include "shard/W5_W5Match2_LinkedItems.h"


static inline void linkedItemsInsertAfter(LinkedItems *owner, LinkedItem *source, LinkedItem *record)
{
    if (source->next != NULL) {
        source->next->previous = record;
        record->next = source->next;
    } else {
        record->next = NULL;
        owner->tail = record;
    }
    source->next = record;
    record->previous = source;
    ++owner->count;
}

extern "C" {
EffPart *FUN_0025c870(void);
void __aeabi_memcpy4(void* destination, const void* source, u32 size);
void memClear(void* destination, u32 size);
void FUN_002a3d58(EffPart *record);

// Allocate and initialize a copy, insert it after the source, and update the owner's count.
LinkedItem *effPartCloneAfter(LinkedItems *owner, LinkedItem *source)
{
    EffPart *part = FUN_0025c870();
    LinkedItem *record = reinterpret_cast<LinkedItem *>(part);
    __aeabi_memcpy4(part, source, sizeof(EffPart));
    memClear(part, sizeof(record->data));
    part->unk84 = 1;
    part->unk88 = 8;
    part->unk89 = 0;
    part->unk8a = 0;
    FUN_002a3d58(part);
    record->reference.flags |= 1;
    record->value = source->value;

    linkedItemsInsertAfter(owner, source, record);
    return record;
}
}
