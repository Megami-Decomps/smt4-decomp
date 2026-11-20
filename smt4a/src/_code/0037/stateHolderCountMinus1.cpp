#include "status/StatusDownA.h"
#include "shard/Shard0037.h"

extern "C" {

extern s32 gridNavigationGetItemCount(ScrollSelection *list);

s32 stateHolderCountMinus1(void)
{
    if (g_statusDown == NULL) {
        return 0;
    }
    return gridNavigationGetItemCount(&g_statusDown->list) - 1;
}

} /* extern "C" */
