/* NON_MATCHING: retail uses register masks for the big-endian value and schedules the slot stores after its conversion. */
#include "common.h"
#include "shard/S3UiLookup.h"
#include "addon/AocSystemA.h"

extern "C" {

u32 libc_strlen(const u16 *str);
u32 nameTableLookupEntry(void *dictionary, const u16 *str, u32 length);
void FUN_004064a8(UiLookupObj *obj, u32 slot, UiFoundEntry *entry, u32 handle);

/* For every slot of the owner's name lists, looks each name up in the dictionary: entries with
 * flag 8 go to FUN_004064a8; the first entry of type 2 per slot records its value and marks the
 * slot. */
void FUN_0040683c(UiLookupObj *obj)
{
    UiOwnerBase *owner = obj->owner != NULL ? &obj->owner->base : NULL;

    if (owner == NULL) {
        return;
    }
    UiNameSlots *slots = *owner->context->slots;

    for (u32 slot = 0; slot < slots->count; slot++) {
        UiNameList *list = &slots->lists[slot];
        bool recorded = false;

        for (u32 i = 0; i < list->count; i++) {
            const u16 *name = list->names[i];
            UiLookupTable *lookup = &owner->context->lookup;
            u32 key;
            if ((key = nameTableLookupEntry(lookup->dictionary, name, libc_strlen(name))) != UILOOKUP_NOT_FOUND) {
                UiContext *entryContext = owner->context;
                UiFoundEntry *entry = entryContext->lookup.entries[key];

                if ((entry->flags & 8) != 0) {
                    FUN_004064a8(obj, slot, entry, *entryContext->handle);
                } else if (entry->flags == 2 && !recorded) {
                    u32 value = entry->value;

                    recorded = true;
                    UiSlotValue *slotValue = &obj->values[slot];
                    slotValue->value = (value << 24) + (((value >> 8) & 0xFF) << 16) + (((value >> 16) & 0xFF) << 8) + (value >> 24);
                    slotValue->set = 1;
                    UiSlotState *slotState = &obj->slots[(u16)slot];
                    slotState->flags |= 1;
                }
            }
        }
    }
}

} /* extern "C" */
