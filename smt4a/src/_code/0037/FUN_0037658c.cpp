/* NON_MATCHING: Retail mov r5, r0 differs from recovered mov r5, r1. */
#include "AsdSDK/Source/Gfx/Effect/effParts.h"
#include "shard/W5_W5Match2_LinkedItems.h"


extern "C" {
EffPart *FUN_003007a0(void);
void __aeabi_memcpy4(void* destination, const void* source, u32 size);
void sysMemClear(void* destination, u32 size);
void FUN_001b4ddc(EffPart *record);

// Allocate and initialize a copy, insert it after the source, and update the owner's count.
LinkedItem *FUN_0037658c(LinkedItems *owner, LinkedItem *source)
{
    EffPart *part = FUN_003007a0();
    LinkedItem *record = reinterpret_cast<LinkedItem *>(part);
    __aeabi_memcpy4(part, source, sizeof(EffPart));
    sysMemClear(part, sizeof(record->data));
    part->unk84 = 1;
    part->unk88 = 8;
    part->unk89 = 0;
    part->unk8a = 0;
    FUN_001b4ddc(part);
    record->reference.flags |= 1;
    record->value = source->value;

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
    return record;
}
}
