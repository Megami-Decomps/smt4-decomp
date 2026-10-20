/* NON_MATCHING: register allocation only: retail keeps the constant 0 in r6 and the g_eplSlots address in r7, built the other way round */
#include "shard/W4_Match3_EplSlots.h"

extern "C" {

extern void resourceListDestroy(void *list);
extern void asdMemFree(void *block);

/* Releases every slot's resource list and buffer, then the slot table itself. */
void FUN_002b7534(void)
{
    s32 i;

    for (i = 0; i < EPL_SLOT_COUNT; i++) {
        EplSlot *slot = &g_eplSlots->slots[i];

        if (slot->list != NULL) {
            resourceListDestroy(slot->list);
            slot->list = NULL;
            slot->loaded = 0;
        }
        if (slot->buffer != NULL) {
            asdMemFree(slot->buffer);
            slot->buffer = NULL;
            slot->loaded = 0;
        }
    }
    if (g_eplSlots != NULL) {
        asdMemFree(g_eplSlots);
        g_eplSlots = NULL;
    }
}

} /* extern "C" */
