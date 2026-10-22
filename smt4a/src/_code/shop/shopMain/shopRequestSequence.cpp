/* Requests the shop sequence using script arguments or a queued shop selection. */
#include "common.h"

struct ShopRequest {
    u8 pending;
    u8 unk01[3];
    s32 index;
};
extern "C" {
extern ShopRequest *DAT_00588eec;
void *asdOperatorNew(u32 bytes);
void *jyoucyuGetTableEntry(u32 index);
s32 scrGetArg(u32 index);
void asdSequenceRequest(u32 sequence, const void *arguments, u32 bytes);
}

static __inline ShopRequest *shopGetQueuedRequest(void)
{
    if (DAT_00588eec == NULL) {
        ShopRequest *request = (ShopRequest *)asdOperatorNew(sizeof(ShopRequest));
        if (request != NULL) {
            request->pending = 0;
            request->index = 0;
        }
        DAT_00588eec = request;
    }
    return DAT_00588eec;
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
