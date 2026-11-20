#include "status/StatusDown.h"

extern "C" {

extern int gridNavigationGetItemCount(ScrollSelection *list);

int statusDownGetLastEntryIndex(void)
{
    int count;

    if (g_statusDown == NULL) {
        return 0;
    }
    count = gridNavigationGetItemCount(&g_statusDown->list);
    return count - 1;
}

} /* extern "C" */
