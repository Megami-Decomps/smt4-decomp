/* NON_MATCHING: owner test, the lookup-table base (UiLookupTable at +0x3c), slot value/state pointers and the non-`rev` byte swap now match retail; the swap's masks are materialised differently (retail keeps 0xFF in a register) and the lookup key lives in r1 in retail (here r0, so a redundant move). */
#include "common.h"
#include "shard/S3UiLookup.h"

extern "C" {

u32 libc_strlen(const u16 *str);
u32 FUN_001a7a20(void *dictionary, const u16 *str, u32 length);
void FUN_004064a8(UiLookupObj *obj, u32 slot, UiFoundEntry *entry, u32 handle);

/* Byte swap of a big endian value. */
#define SWAP32(v) (((v) << 24) | ((((v) >> 8) & 0xFF) << 16) | ((((v) >> 16) & 0xFF) << 8) | ((v) >> 24))

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
            UiContext *context = owner->context;
            UiLookupTable *lookup = &context->lookup;
            u32 key = FUN_001a7a20(lookup->dictionary, name, libc_strlen(name));

            if (key != UILOOKUP_NOT_FOUND) {
                UiFoundEntry *entry = owner->context->lookup.entries[key];

                if ((entry->flags & 8) != 0) {
                    FUN_004064a8(obj, slot, entry, *owner->context->handle);
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
