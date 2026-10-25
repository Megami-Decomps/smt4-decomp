/* Requests the shop sequence using script arguments or a queued shop selection. */
#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"

struct ShopRequest {
    u8 pending;
    u8 unk01[3];
    s32 index;
};
extern "C" {
extern ShopRequest *DAT_0044df80;
void *asdOperatorNew(u32 bytes);
void *jyoucyuGetTableEntry(u32 index);
s32 scrGetArg(u32 index);
}

static __inline ShopRequest *shopGetQueuedRequest(void)
{
    if (DAT_0044df80 == NULL) {
        ShopRequest *request = (ShopRequest *)asdOperatorNew(sizeof(ShopRequest));
        if (request != NULL) {
            request->pending = 0;
            request->index = 0;
        }
        DAT_0044df80 = request;
    }
    return DAT_0044df80;
}

extern "C" u32 shopRequestSequence(void)
{
    jyoucyuGetTableEntry(0);
    s32 category = scrGetArg(0);
    s32 index = scrGetArg(1);
    if (category == -1 || index == -1) {
        if (!shopGetQueuedRequest()->pending) {
            return 1;
        }
        index = shopGetQueuedRequest()->index;
        shopGetQueuedRequest()->pending = 0;
    } else if (category != 0) {
        index += 100;
    }
    asdSequenceRequest(10, &index, sizeof(index));
    return 1;
}
