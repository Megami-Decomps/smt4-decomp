/* NON_MATCHING: retail tests the handle before the push (ldrne/cmnne, bxeq); armcc tests only NULL there and the handle after the prologue. */
#include "common.h"
#include "addon/AocSlot.h"

extern "C" {

extern u32 g_aocSystem;

extern void asdTMTexTableReleaseNode(u32 node);
extern void packageFileDisableByKindName(u32 system, u32 node, s32 handle);

/* Releases the slot's texture node and handle and marks the slot inactive. */
void aocSlotRelease(AocSlot *slot)
{
    if (slot != NULL) {
        if (slot->handle != -1) {
            if (slot->active != 0) {
                asdTMTexTableReleaseNode(slot->node);
                packageFileDisableByKindName(g_aocSystem, slot->node, slot->handle);
                slot->handle = -1;
                slot->active = 0;
            }
        }
    }
}

} /* extern "C" */
