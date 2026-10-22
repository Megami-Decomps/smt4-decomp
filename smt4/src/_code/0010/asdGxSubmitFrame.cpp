#include "AsdSDK/Source/Sys/Gx/AsdGxFrameState.h"

extern "C" {
void asdGxCommandListFlip(void);
void asdGxCommandListBindBack(void);
void FUN_0010ec90(s32, u32);
void FUN_00123934(void);
void FUN_002bdb44(void);
void FUN_002bef68(void *, s32);
void FUN_002bf0d8(void);
void FUN_002c2424(u32, u32);
void asdModelResetCommandBuffer(void);
void nngxRunCmdlist(void);
u32 FUN_002c3984(void);
u32 nnosGetHeapBase(void);
extern AsdGxFrameState g_asdGxPresets;
}

/* Flush recorded GPU data, submit this frame, and flip the command-list buffers. */
extern "C" void asdGxSubmitFrame(u32 frame)
{
    FUN_002bdb44();
    FUN_002bef68(g_asdGxPresets.commandLists, g_asdGxPresets.currentList == 0);
    FUN_00123934();
    asdModelResetCommandBuffer();
    asdGxCommandListBindBack();
    u32 bytes = FUN_002c3984();
    u32 heap = nnosGetHeapBase();
    FUN_002c2424(heap, bytes);
    FUN_002bef68(g_asdGxPresets.commandLists, g_asdGxPresets.currentList);
    FUN_002bf0d8();
    nngxRunCmdlist();
    g_asdGxPresets.currentList = 1 - g_asdGxPresets.currentList;
    asdGxCommandListFlip();
    FUN_002bef68(g_asdGxPresets.commandLists, g_asdGxPresets.currentList);
    if (g_asdGxPresets.displayMode == 0) {
        FUN_0010ec90(0, frame);
    } else {
        FUN_0010ec90(1, frame);
    }
}
