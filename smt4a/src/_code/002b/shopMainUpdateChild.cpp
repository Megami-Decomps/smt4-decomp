#include "shop/shopMain.h"

extern "C" {

extern ShopWork *g_shop;

int FUN_004990e4(void *child);

/* Runs FUN_004990e4 on the shop entity's child when its kind is 0, 1 or 2; always returns 0. */
u32 shopMainUpdateChild(void)
{
    ShopWork *entity = g_shop;

    switch (entity->screenMode) {
    case 0:
    case 1:
    case 2:
        if (entity != NULL && entity->result != 0) {
            FUN_004990e4((void *)entity->result);
        }
        break;
    }
    return 0;
}

} /* extern "C" */
