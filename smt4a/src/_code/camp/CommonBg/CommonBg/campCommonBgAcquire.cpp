#include <string.h>
#include "shard/W6_W6Match5_CommonBackground.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 tracked);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                           AsdProcUpdateFunc update, AsdProcFunc end, u32 work);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc update, AsdProcFunc end, u32 work, void *owner);
s32 commonBackgroundUpdateFade(u32 handle);
void FUN_002a35fc(u32 handle);
s32 FUN_002a3600(u32 handle);
s32 commonBackgroundDraw(u32 handle);
void uiFadeOpen();
void campCommonBgCreateCrazingSumaho();
s32 gameFlagIsSet(u32 flag);
}

// Acquire the shared camp background and create its update/draw processes on first use.
extern "C" void campCommonBgAcquire()
{
    if (g_commonBg.referenceBytes[0] <= 0) {
        if (g_commonBg.background == NULL) {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\CommonBg\\CommonBg.cpp", 890);
            g_commonBg.background = (CommonBackgroundState *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x18, 1);
        }
        CommonBackgroundState *background = g_commonBg.background;
        memset(background, 0, sizeof(*background));
        background->counters.unk00 = asdProcessCreateSimple((const s8 *)"COMBG CALC", 4, 0, 0,
                                                          commonBackgroundUpdateFade, FUN_002a35fc, 0);
        taskCreateDraw((const s8 *)"COMBG DDRAW", 0xe8, 0, 0, FUN_002a3600, NULL, 0,
                       (void *)background->counters.unk00);
        taskCreateDraw((const s8 *)"COMBG DDRAW FADE", 0x15f, 0, 0, commonBackgroundDraw, NULL, 0,
                       (void *)background->counters.unk00);
        uiFadeOpen();
        background = g_commonBg.background;
        background->state = 0;
        background->progress = 0;
        background->timer = 0;
        campCommonBgCreateCrazingSumaho();
    }
    CommonBackgroundState *background = g_commonBg.background;
    if (background != NULL && background->state == 0) {
        if (gameFlagIsSet(0x400))
            background->unk0c = 0;
        else
            background->unk0c = 1;
        background->state = 1;
        background->progress = 1;
        background->timer = 0;
    }
    ++g_commonBg.referenceBytes[0];
}
