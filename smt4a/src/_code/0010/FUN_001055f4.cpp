#include "shard/NetManager.h"

extern "C" {

void FUN_002ebc80(u8 *part, u32 arg);

/* Applies `arg` to both parts of the network session. */
void FUN_001055f4(u32 arg)
{
    FUN_002ebc80(DAT_005949d8.session->partA, arg);
    FUN_002ebc80(DAT_005949d8.session->partB, arg);
}

} /* extern "C" */
