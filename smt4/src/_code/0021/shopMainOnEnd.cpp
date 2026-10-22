#include "shop/shopMain.h"

extern "C" ShopWork *g_shop;

// Notify the shop controller that its task ended.
extern "C" ShopWork *shopMainOnEnd()
{
    g_shop->done = 1;
    return g_shop;
}
