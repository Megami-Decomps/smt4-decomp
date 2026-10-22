#include "common.h"

extern "C" {

typedef struct StatusList {
    /* 0x00 */ u8 unk00[0x10];
} StatusList;

typedef struct StatusDown {
    /* 0x000 */ u8 unk000[0x5EC];
    /* 0x5EC */ StatusList list;
} StatusDown;

extern StatusDown *g_statusDown; /* 0x588fe8 */

extern int uiSearchPrimary(StatusList *list);
extern int FUN_002a4964(StatusList *list, int index);

/* Selects `index` in the status list, clamped to the number of entries. */
void statusDownSelectListIndex(int index)
{
    StatusDown *status = g_statusDown;
    int count;

    if (status != NULL) {
        count = uiSearchPrimary(&status->list);
        if (count <= index) {
            index = count - 1;
        }
        if (index < 0) {
            index = 0;
        }
        FUN_002a4964(&status->list, index);
    }
}

} /* extern "C" */
