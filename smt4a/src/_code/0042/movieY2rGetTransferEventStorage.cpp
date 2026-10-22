#include "shard/Shard0042.h"

extern "C" {

extern u32 g_y2rTransferEvent;

u32 *movieY2rGetTransferEventStorage(void)
{
    return &g_y2rTransferEvent;
}

} /* extern "C" */
