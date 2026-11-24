#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

extern int FUN_00230fe4(int a, int kind, u32 id, u32 p0, u32 p1, u32 width, u32 height, u32 p2, u32 p3);

/* Looks up the entry of kind 0x1C and forwards its size (the override if valid, else the entry's own size without the flag bit) with the caller's parameters. */
void uiDrawNativeSizeTableSprite(u32 id, u32 p0, u32 p1, u32 p2, u32 p3)
{
    u32 width;
    u32 height;
    asdTMTexTableEntrySize(0x1C, id, &width, &height);
    FUN_00230fe4(2, 0x1C, id, p0, p1, width, height, p2, p3);
}

} /* extern "C" */
