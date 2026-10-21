/* NON_MATCHING: retail uses ldr r1, [pc, #40] where the compiled block uses ldr r0, [pc, #28]. */
#include "common.h"

struct AsdFileHashPack;

extern "C" {
extern AsdFileHashPack *g_asdFileHashPack;
s32 FUN_001a70dc(AsdFileHashPack *pack, u32 arg);

u8 FUN_001860e4(u32 arg)
{
    AsdFileHashPack *pack = g_asdFileHashPack;
    if (pack != NULL) {
        return FUN_001a70dc(pack, arg) != 0;
    }

    return 0;
}
}
