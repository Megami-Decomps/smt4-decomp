#ifndef SHOP_SHOPSEQUENCEREQUEST_H
#define SHOP_SHOPSEQUENCEREQUEST_H

#include "shop/shopMain.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" ShopSequenceRequest *g_shopSequenceRequest;

/* Returns the queued shop request, constructing it on first use. */
static __inline ShopSequenceRequest *shopGetQueuedRequest(void)
{
    if (g_shopSequenceRequest == NULL) {
        g_shopSequenceRequest = new ShopSequenceRequest();
    }
    return g_shopSequenceRequest;
}

#endif
