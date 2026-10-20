/* Returns the shop screen's result value. */
#include "common.h"
#include "shop/shopMain.h"

extern "C" {

extern ShopWork *g_shop;

u32 shopGetResult(void)
{
    return g_shop->result;
}

} /* extern "C" */
