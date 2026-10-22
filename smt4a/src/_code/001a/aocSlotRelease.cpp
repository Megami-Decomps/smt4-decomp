/* NON_MATCHING: retail tests the handle before the push (ldrne/cmnne, bxeq); armcc tests only NULL there and the handle after the prologue. */
#include "common.h"

extern "C" {

typedef struct AocSlot {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 node;
    /* 0x14 */ u8 unk14[0x6C];
    /* 0x80 */ s32 active;
    /* 0x84 */ s32 handle;
} AocSlot;

extern u32 g_aocSystem;

extern void asdTMTexTableReleaseNode(u32 node);
extern void FUN_001b2d54(u32 system, u32 node, s32 handle);

/* Releases the slot's texture node and handle and marks the slot inactive. */
void aocSlotRelease(AocSlot *slot)
{
    if (slot != NULL && slot->handle != -1 && slot->active != 0) {
        asdTMTexTableReleaseNode(slot->node);
        FUN_001b2d54(g_aocSystem, slot->node, slot->handle);
        slot->handle = -1;
        slot->active = 0;
    }
}

} /* extern "C" */
