/* NON_MATCHING: parameters and the size lookup match; in the size lookup retail puts the width in r2 and the height in r0 (storing the width alone, then height and p2 with stm), where this build uses r0/r1 and stores the three words with one stm. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

extern int FUN_00230fe4(int a, int kind, u32 id, u32 p0, u32 p1, u32 width, u32 height, u32 p2, u32 p3);

/* Looks up the entry of kind 0x1C and forwards its size (the override if valid, else the entry's own size without the flag bit) with the caller's parameters. */
void FUN_0039fb38(u32 id, u32 p0, u32 p1, u32 p2, u32 p3)
{
    u32 width;
    u32 height;
    asdTMTexTableEntrySize(0x1C, id, &width, &height);
    FUN_00230fe4(2, 0x1C, id, p0, p1, width, height, p2, p3);
}

} /* extern "C" */
