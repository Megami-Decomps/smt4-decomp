#include "status/StatusDownA.h"

extern "C" {

extern int uiListGetVisibleCount(ScrollSelection *list);

/* Selects `index` in the status list, clamped to the number of entries. */
void statusDownSelectListIndex(int index)
{
    StatusDownStateA *status = g_statusDown;
    int count;

    if (status != NULL) {
        count = uiListGetVisibleCount(&status->list);
        if (count <= index) {
            index = count - 1;
        }
        if (index < 0) {
            index = 0;
        }
        scrollListSetSelectionTracked(&status->list, index);
    }
}

} /* extern "C" */
