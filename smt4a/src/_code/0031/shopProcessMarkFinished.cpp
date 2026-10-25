#include "shop/shopMain.h"

extern "C" ShopWork *g_shop;

// Mark the shop process as finished.
extern "C" void shopProcessMarkFinished(u32 process)
{
    ShopWork *work = g_shop;
    work->done = 1;
}
