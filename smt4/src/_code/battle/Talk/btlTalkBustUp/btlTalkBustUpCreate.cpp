/* NON_MATCHING: default-value/callback load scheduling and contiguous parameter-stream pointer calculation differ. */
#include "battle/Talk/btlTalkBustUp.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include <stddef.h>
#include "AsdSDK/AsdMemAlloc.h"

namespace {
// The allocation has additional presentation fields after the shared 0x2fc-byte prefix.
struct TalkBustUpWork {
    BtlTalkBustUp state;
    f32 scaleX;
    f32 scaleY;
    f32 progress;
    u32 flags;
};
typedef char TalkBustUpWorkLayoutCheck[sizeof(TalkBustUpWork) == 0x30C &&
    offsetof(TalkBustUpWork, scaleX) == 0x2FC && offsetof(TalkBustUpWork, flags) == 0x308 ? 1 : -1];
}

extern "C" {
extern TalkBustUpWork *g_btlTalkBustUp;
extern const u8 DAT_003ffa6c[];
void memClear(void *data, u32 size);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work);
u32 taskCreateDraw(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, void *owner);
s32 FUN_00206528(u32 handle);
s32 FUN_0022535c(u32 handle);
void drawParameterBlockClear(UiResourceParameters *parameters);


void btlTalkBustUpCreate(void)
{
    if (g_btlTalkBustUp == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\Talk\\btlTalkBustUp.cpp", 0x3D5);
        g_btlTalkBustUp = static_cast<TalkBustUpWork *>(asdMemAlloc(
            ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(TalkBustUpWork), 1));
        TalkBustUpWork *work = g_btlTalkBustUp;
        memClear(work, sizeof(TalkBustUpWork));
        work->state.textureNode = -1;
        work->flags = 0;
        work->scaleX = 1.0f;
        work->scaleY = 1.0f;
        work->progress = 0.0f;
        work->state.state = 0;
        work->state.unk2EC = 0;
        work->state.job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("TMD CALC"),
            2, 0, 0, FUN_00206528, NULL, 0);
        taskCreateDraw(reinterpret_cast<const s8 *>("TalkBustUp DrawLeft"), 0x7D, 0, 0,
            FUN_0022535c, NULL, 0, reinterpret_cast<void *>(work->state.job));
        taskCreateDraw(reinterpret_cast<const s8 *>("TalkBustUp DrawRight"), 0xDB, 0, 0,
            FUN_0022535c, NULL, 0, reinterpret_cast<void *>(work->state.job));
        UiResourceParameters *parameters = reinterpret_cast<UiResourceParameters *>(&work->state);
        drawParameterBlockClear(parameters);
        // The three preceding parameter streams immediately precede the final resource stream.
        paramsInit(parameters, DAT_003ffa6c - 0x90 - 0x144 - 0x60, 0x60, DAT_003ffa6c - 0x90 - 0x144, 0x144, DAT_003ffa6c - 0x90, 0x90, 0, 0, DAT_003ffa6c, 0x9BC);
    }
}
}
