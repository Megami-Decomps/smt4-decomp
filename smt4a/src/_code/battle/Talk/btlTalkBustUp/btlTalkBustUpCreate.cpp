/* NON_MATCHING: default-value/callback load scheduling and contiguous parameter-stream pointer calculation differ. */
#include "battle/Talk/btlTalkBustUp.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include <stddef.h>

extern "C" {
extern const u8 DAT_005275c0[];
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
void sysMemClear(void *data, u32 size);
u32 taskCreateDraw(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, void *owner);
s32 FUN_002cd414(u32 handle);
s32 FUN_00321544(u32 handle);
void paramsClearPacket(UiResourceParameters *parameters);


void btlTalkBustUpCreate(void)
{
    if (g_btlTalkBustUp == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\Talk\\btlTalkBustUp.cpp", 0x3D5);
        g_btlTalkBustUp = static_cast<BtlTalkBustUp *>(asdMemoryAllocTracked(
            ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(BtlTalkBustUp), 1));
        BtlTalkBustUp *work = g_btlTalkBustUp;
        sysMemClear(work, sizeof(BtlTalkBustUp));
        work->textureNode = -1;
        work->devilId = 0;
        work->scaleX = 1.0f;
        work->scaleY = 1.0f;
        work->progress = 0.0f;
        work->state = 0;
        work->stateCounter = 0;
        work->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("TMD CALC"), 4, 0, 0, FUN_002cd414, NULL, 0);
        taskCreateDraw(reinterpret_cast<const s8 *>("TalkBustUp DrawLeft"), 0x81, 0, 0,
            FUN_00321544, NULL, 0, reinterpret_cast<void *>(work->job));
        taskCreateDraw(reinterpret_cast<const s8 *>("TalkBustUp DrawRight"), 0xDD, 0, 0,
            FUN_00321544, NULL, 0, reinterpret_cast<void *>(work->job));
        UiResourceParameters *parameters = &work->resources;
        paramsClearPacket(parameters);
        // The three preceding parameter streams immediately precede the final resource stream.
        paramsInit(parameters, DAT_005275c0 - 0x90 - 0x144 - 0x60, 0x60,
            DAT_005275c0 - 0x90 - 0x144, 0x144, DAT_005275c0 - 0x90, 0x90,
            NULL, 0, DAT_005275c0, 0x9BC);
    }
}
}
