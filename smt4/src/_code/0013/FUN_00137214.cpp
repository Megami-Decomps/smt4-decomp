/* NON_MATCHING: retail does not shrink-wrap (push {r4, lr} before the allocator test and a shared pop; same for FUN_002bbaf8); armcc returns early with bx lr */
/* Allocates a cleared 0x28-byte record from the graphics allocator; returns NULL when there is no allocator or it fails. */
#include "gfx/HandleRegistry.h"

extern "C" {
extern GfxHandleAllocator g_gfxAllocateCallback;

/* A zero-initialised graphics record. */
struct GfxRecord {
    /* 0x00 */ u32 words[10];
};

GfxRecord *FUN_00137214(void)
{
    GfxRecord *record = NULL;

    if (g_gfxAllocateCallback.allocate != NULL) {
        record = (GfxRecord *)g_gfxAllocateCallback.allocate(0x10000, 0x100, 0, sizeof(GfxRecord));
        if (record != NULL) {
            for (s32 i = 0; i < 10; i++) {
                record->words[i] = 0;
            }
        }
    }
    return record;
}
}
