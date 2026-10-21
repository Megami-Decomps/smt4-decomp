#include "common.h"
#include "nn/Result.h"
#include "shard/S3AsdCec.h"

struct AsdCecMessageBox;

extern "C" {
s32 asdCecMessageBoxOpen(AsdCecMessageBox* box, u32 param0, u32 param1);
void FUN_00358664(u32 handle, u32 arg1);
void asdCecMessageBoxClose(u32 handle);
extern AsdCec g_asdCec;

/* Opens the CEC message box, resets it on success, then closes it. */
void asdCecResetMessageBox(void)
{
    s32 result = asdCecMessageBoxOpen((AsdCecMessageBox*)g_asdCec.box->handle,
        g_asdCec.box->param0, g_asdCec.box->param1);
    if (nnResultIsSuccess(result)) {
        FUN_00358664(g_asdCec.box->handle, 0);
        asdCecMessageBoxClose(g_asdCec.box->handle);
    }
}
}
