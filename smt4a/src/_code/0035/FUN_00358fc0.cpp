#include "nn/Result.h"
#include "shard/S1AsdCec.h"

struct AsdCecMessageBox;

extern "C" {

extern AsdCec g_asdCec;

s32 asdCecMessageBoxOpen(AsdCecMessageBox* box, u32 titleId, u32 messageId);
s32 FUN_0042f318(s32 box, s32 flag);
void asdCecMessageBoxClose(s32 box);

/* Open the request's message box and, when that succeeded, mark it and close it. */
void FUN_00358fc0(void)
{
    AsdCecRequest *request = g_asdCec.request;

    s32 result = asdCecMessageBoxOpen((AsdCecMessageBox*)request->box, request->titleId, request->messageId);

    if (nnResultIsSuccess(result)) {
        FUN_0042f318(g_asdCec.request->box, 1);
        asdCecMessageBoxClose(g_asdCec.request->box);
    }
}

} /* extern "C" */
