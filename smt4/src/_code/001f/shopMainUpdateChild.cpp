#include "shop/shopMain.h"

extern "C" {

extern int hintWindowDrawArrows(void);

extern ShopGlobals g_shop;

/* Calls hintWindowDrawArrows when the held target is in mode 0-2 and has a handle; always returns 0. */
u32 shopMainUpdateChild(void)
{
    ShopWork *target = g_shop.work;

    if (target->screenMode == 0 || target->screenMode == 1 || target->screenMode == 2) {
        if (target != NULL && target->result != 0) {
            hintWindowDrawArrows();
        }
    }
    return 0;
}

} /* extern "C" */
