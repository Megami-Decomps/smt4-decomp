#include "AsdSDK/Source/Sys/File/AsdFileHashPack.h"

extern "C" {
extern AsdFileHashPack *g_asdFileHashPack; /* the open pack */

void asdFileHashPackReadRequest(AsdFileHashPack *pack, u32 arg);

void asdFileHashPackTryReadRequest(u32 arg)
{
    if (g_asdFileHashPack != NULL) {
        asdFileHashPackReadRequest(g_asdFileHashPack, arg);
    }
}

} /* extern "C" */
