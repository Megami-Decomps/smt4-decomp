#include "AsdSDK/Source/Sys/Gx/AsdGxFrameState.h"

extern "C" {
void asdGxCommandListFlip(void);
void asdGxCommandListBindBack(void);
void FUN_00144f1c(s32, u32);
void FUN_00161a10(void);
void FUN_0017dd80(void);
void asdGxBindCmdlistAt(void *, s32);
void FUN_0017cdb0(void);
void nn_gxlow_CTR_FlushDataCacheForward(u32, u32);
void asdModelResetCommandBuffer(void);
void nngxRunCmdlist(void);
u32 FUN_00188c94(void);
u32 FUN_00188ca4(void);
extern AsdGxFrameState g_asdGxPresets;
}

/* Flush recorded GPU data, submit this frame, and flip the command-list buffers. */
extern "C" void asdGxSubmitFrame(u32 frame)
{
    FUN_0017dd80();
    asdGxBindCmdlistAt(g_asdGxPresets.commandLists, g_asdGxPresets.currentList == 0);
    FUN_00161a10();
    asdModelResetCommandBuffer();
    asdGxCommandListBindBack();
    u32 bytes = FUN_00188c94();
    u32 heap = FUN_00188ca4();
    nn_gxlow_CTR_FlushDataCacheForward(heap, bytes);
    asdGxBindCmdlistAt(g_asdGxPresets.commandLists, g_asdGxPresets.currentList);
    FUN_0017cdb0();
    nngxRunCmdlist();
    g_asdGxPresets.currentList = 1 - g_asdGxPresets.currentList;
    asdGxCommandListFlip();
    asdGxBindCmdlistAt(g_asdGxPresets.commandLists, g_asdGxPresets.currentList);
    if (g_asdGxPresets.displayMode == 0) {
        FUN_00144f1c(0, frame);
    } else {
        FUN_00144f1c(1, frame);
    }
}
