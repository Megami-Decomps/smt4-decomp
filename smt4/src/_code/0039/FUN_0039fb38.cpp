/* NON_MATCHING: callee-saved register assignment of the parameters differs (retail: id r4, p1 r5, p2 r6, p0 r7), and retail keeps the entry in r0 while loading the override pointer into r1. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

extern int FUN_00230fe4(int a, int kind, u32 id, u32 p0, u32 p1, u32 width, u32 height, u32 p2, u32 p3);

/* Looks up the entry of kind 0x1C and forwards its size (the override if valid, else the entry's own size without the flag bit) with the caller's parameters. */
void FUN_0039fb38(u32 id, u32 p0, u32 p1, u32 p2, u32 p3)
{
    TextureTableEntryIV *entry = asdTMTexTableEntryAt(0x1C, id);
    TexturePlacementPrefixIV *override;
    u32 width;
    u32 height;

    override = entry->placement;
    if (override != NULL && override->mode == 1) {
        width = override->width;
        height = override->height;
    } else {
        width = entry->width & 0xFFFF7FFF;
        height = entry->height & 0xFFFF7FFF;
    }
    FUN_00230fe4(2, 0x1C, id, p0, p1, width, height, p2, p3);
}

} /* extern "C" */
