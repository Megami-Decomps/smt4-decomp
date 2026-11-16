#include "shop/shopMain.h"

extern "C" {

extern ShopWork *g_shop;

int hintWindowDrawArrows(void *child);

/* Runs hintWindowDrawArrows on the shop entity's child when its kind is 0, 1 or 2; always returns 0. */
s32 shopMainUpdateChild(u32 process)
{
    ShopWork *entity = g_shop;

    switch (entity->screenMode) {
    case 0:
    case 1:
    case 2:
        if (entity != NULL && entity->result != 0) {
            hintWindowDrawArrows((void *)entity->result);
        }
        break;
    }
    return 0;
}

} /* extern "C" */
