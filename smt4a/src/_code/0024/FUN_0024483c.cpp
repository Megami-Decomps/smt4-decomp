/* NON_MATCHING: retail multiplies index*25 before loading g_eplSlots (r0 reused); built loads g_eplSlots into r2 first. */
#include "common.h"

extern "C" {

typedef struct EplSlot {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ void *resourceB;
    /* 0x5C */ void *resourceA;
    /* 0x60 */ u8 dirty;
    /* 0x61 */ u8 unk61[3];
} EplSlot; /* 0x64 */

typedef struct EplSlots {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ EplSlot slots[16];
} EplSlots;

extern EplSlots *g_eplSlots;

extern void resourceListDestroy(void *resource);
extern void asdMemFree(void *resource);

/* Frees the two resources of effect slot `index` and clears the slot's dirty byte. */
void FUN_0024483c(s32 index)
{
    EplSlot *slot = &g_eplSlots->slots[index];

    if (slot->resourceA != NULL) {
        resourceListDestroy(slot->resourceA);
        slot->resourceA = NULL;
        slot->dirty = 0;
    }
    if (slot->resourceB != NULL) {
        asdMemFree(slot->resourceB);
        slot->resourceB = NULL;
        slot->dirty = 0;
    }
}

} /* extern "C" */
