/* NON_MATCHING: retail shrink-wraps the null guard before the push (`ldr r1,[pc]; ldr r2,[r1]; cmp; moveq r0,#0; bxeq lr`); armcc here pushes first. */
#include "common.h"

struct AsdFileHashPack;

extern "C" {
extern AsdFileHashPack *g_asdFileHashPack;
s32 FUN_001a70dc(AsdFileHashPack *pack, u32 arg);

u8 FUN_001860e4(u32 arg)
{
    AsdFileHashPack *pack = g_asdFileHashPack;
    if (pack == NULL)
        return 0;
    return FUN_001a70dc(pack, arg) != 0;
}
}
