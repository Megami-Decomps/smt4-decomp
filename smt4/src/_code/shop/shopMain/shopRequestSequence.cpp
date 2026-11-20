#include "common.h"
#include "shop/shopMain.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {
extern ShopSequenceRequest *g_shopSequenceRequest; /* NULL until first used */
void *asdOperatorNew(u32 bytes);
void *jyoucyuGetTableEntry(u32 index);
s32 scrGetArg(u32 index);
}

/* Returns the queued shop request, allocating a cleared one on first use. */
static __inline ShopSequenceRequest *shopGetQueuedRequest(void)
{
    if (g_shopSequenceRequest == NULL) {
        ShopSequenceRequest *request = (ShopSequenceRequest *)asdOperatorNew(sizeof(ShopSequenceRequest));
        if (request != NULL) {
            request->pending = 0;
            request->screen = 0;
        }
        g_shopSequenceRequest = request;
    }
    return g_shopSequenceRequest;
}

/* Script command: switches to the shop sequence on screen (category, index), screens of category 1
 * numbered from 100; with either argument -1, reopens the queued request's screen if one is
 * pending. */
extern "C" u32 shopRequestSequence(void)
{
    jyoucyuGetTableEntry(0);
    s32 category = scrGetArg(0);
    s32 screen = scrGetArg(1);
    if (category == -1 || screen == -1) {
        if (!shopGetQueuedRequest()->pending) {
            return 1;
        }
        screen = shopGetQueuedRequest()->screen;
        shopGetQueuedRequest()->pending = 0;
    } else if (category != 0) {
        screen += SHOP_SCREEN_SECOND_CATEGORY;
    }
    asdSequenceRequest(SHOP_SEQUENCE, &screen, sizeof(screen));
    return 1;
}
