/* NON_MATCHING: callback targets are resolved; argument decoding and the first process call's stack setup allocate r0/r1/r2/r5 differently. */
#include "shop/shopMain.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern ShopCreateWork *g_shop;
extern const char DAT_00536180[];
extern const char DAT_005361d4[];
extern const char DAT_005361c4[];
extern const char DAT_005361b0[];
void *jyoucyuGetTableEntry(u32 index);
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 tracked);
s32 FUN_0027dda4(u32 process);
void shopProcessMarkFinished(u32 process);
s32 shopMainUpdateChild(u32 process);
s32 ownerChildNotifyEarlyState(u32 process);
u32 taskCreateDraw(const char *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc draw, AsdProcFunc destroy, void *work, u32 parent);
}

/* Allocate the shop state and attach its process and three draw tasks. */
extern "C" void shopCreateProcessAndDrawTasks(const u32 *arguments, s32 bytes)
{
    jyoucyuGetTableEntry(0);
    asdDebugTrace(DAT_00536180, 166);
    ShopCreateWork *work = (ShopCreateWork *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(ShopCreateWork), 1);
    g_shop = work;
    work->unk05 = 0;
    work->done = 0;
    work->variant = 0;
    work->result = 0;
    work->unk14 = 0;
    work->unk0c = 0;
    if (arguments != NULL && bytes == 8) {
        work->variant = (u8)arguments[0];
        work->mode = arguments[1];
    } else if (arguments != NULL && bytes == 4) {
        work->mode = arguments[0];
    } else {
        work->mode = 1;
    }
    work->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_005361d4), 4, 0, NULL, FUN_0027dda4, shopProcessMarkFinished, reinterpret_cast<u32>(work));
    taskCreateDraw(DAT_005361c4, 101, 1, 0, shopMainUpdateChild, NULL, g_shop, work->task);
    taskCreateDraw(DAT_005361c4, 204, 1, 0, shopMainUpdateChild, NULL, g_shop, work->task);
    taskCreateDraw(DAT_005361b0, 235, 1, 0, ownerChildNotifyEarlyState, NULL, g_shop, work->task);
}
