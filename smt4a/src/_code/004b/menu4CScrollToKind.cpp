#include "shard/Shard004B.h"

extern "C" {

extern void setListWindow(Menu4C *obj, s32 a, s32 b);

/* Scrolls the 10-row window so the first entry whose kind equals `kind` is visible. */
void menu4CScrollToKind(Menu4C *obj, u32 kind)
{
    s32 i;

    for (i = 0; i < obj->count; i++) {
        if (obj->list[i]->kind == kind) {
            if (i < 10) {
                setListWindow(obj, 0, i);
            } else {
                setListWindow(obj, i - 9, 9);
            }
            return;
        }
    }
}

} /* extern "C" */
