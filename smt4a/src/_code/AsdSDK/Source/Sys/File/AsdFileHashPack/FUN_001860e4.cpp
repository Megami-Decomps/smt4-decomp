#include "AsdSDK/Source/Sys/File/AsdFileHashPack.h"

extern "C" {
extern AsdFileHashPack *g_asdFileHashPack; /* the open pack */

s32 FUN_001a70dc(AsdFileHashPack *pack, u32 arg);

/* Forwards to the pack; returns whether it succeeded (0 when no pack is open). */
u8 FUN_001860e4(u32 arg)
{
    if (g_asdFileHashPack == NULL) {
        return 0;
    }
    return FUN_001a70dc(g_asdFileHashPack, arg) != 0;
}

} /* extern "C" */
