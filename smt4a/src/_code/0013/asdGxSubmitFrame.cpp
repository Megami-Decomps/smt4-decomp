#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
void asdGxCommandListFlip(void);
void asdGxCommandListBindBack(void);
void asdGxSwapDisplayBuffers(s32 refresh, u32 stereo);
void asdGxWaitForPreviousFrame(void);
void asdGxFlushCommandBuffer(void);
void asdGxBindCmdlistAt(void *lists, s32 index);
void asdGxCheckError(void);
void nn_gxlow_CTR_FlushDataCacheForward(u32, u32);
void asdModelResetCommandBuffer(void);
void nngxRunCmdlist(void);
u32 nnosGetHeapSize(void);
u32 nnosGetHeapBase(void);
}

/* Submits the frame: flushes the heap from the data cache, runs the frame's command list, flips the
 * command lists and swaps the display buffers (the right eye's own buffer when `stereo`). */
extern "C" void asdGxSubmitFrame(u32 stereo)
{
    asdGxFlushCommandBuffer();
    asdGxBindCmdlistAt(g_asdGxPresets.commandLists, g_asdGxPresets.currentList == 0);
    asdGxWaitForPreviousFrame();
    asdModelResetCommandBuffer();
    asdGxCommandListBindBack();
    u32 heapSize = nnosGetHeapSize();
    u32 heapBase = nnosGetHeapBase();
    nn_gxlow_CTR_FlushDataCacheForward(heapBase, heapSize);
    asdGxBindCmdlistAt(g_asdGxPresets.commandLists, g_asdGxPresets.currentList);
    asdGxCheckError();
    nngxRunCmdlist();
    g_asdGxPresets.currentList = 1 - g_asdGxPresets.currentList;
    asdGxCommandListFlip();
    asdGxBindCmdlistAt(g_asdGxPresets.commandLists, g_asdGxPresets.currentList);
    if (g_asdGxPresets.displayMode == 0) {
        asdGxSwapDisplayBuffers(0, stereo);
    } else {
        asdGxSwapDisplayBuffers(1, stereo);
    }
}
