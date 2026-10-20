#include "AsdSDK/Source/Sys/File/AsdFileHashPack.h"

extern "C" {
extern AsdFileHashPack *g_asdFileHashPack; /* the open pack */

void FUN_00187788(AsdFileHashPack *pack, u32 arg);

void FUN_00167f74(u32 arg)
{
    if (g_asdFileHashPack != NULL) {
        FUN_00187788(g_asdFileHashPack, arg);
    }
}

} /* extern "C" */
