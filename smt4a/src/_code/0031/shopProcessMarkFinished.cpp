#include "shop/shopMain.h"

extern "C" ShopWork *g_shop;

// Mark the shop process as finished.
extern "C" ShopWork *shopProcessMarkFinished(void *context)
{
    ShopWork *work = g_shop;
    work->done = 1;
    return work;
}
