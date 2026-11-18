/* NON_MATCHING: one paired-load schedule and the spill slot of the fallback card's selection differ. */
#include "camp/CecMenu.h"
#include "camp/CampCec/CampCecView.h"
#include "code/Code0025_Smt4.h"
#include "shard/W6_W6Match3_ForwardEffect.h"
#include "shard/W6_W6Match2_HelpResources.h"
#include "nn/fnd/TimeSpan.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/asdTMTexTableLoadSprites.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {
void cecProcessStart();
u32 FUN_00259800();
void btlTalkBustUpCreate();
u32 fileSlotLoad(u32 slot);
void threadSleepDuration(nn::fnd::TimeSpan delay);
void rt_aeabi_memclr(void *block, u32 size);
s32 rt_memcmp(const void *lhs, const void *rhs, u32 size);
s32 gameDataBlockTestFlag(u32 flag);
u8 gameDataBlocksGetFlagByteA();

// Load the four camp resources, reconcile the outbound card with the selected demon,
// and signal the main thread once the asynchronous loads complete.
void campCecLoaderThread(CampCecMenu *menu)
{
    for (;;) {
        if (menu->stopLoader)
            return;
        switch (menu->loadState) {
        case 0: {
            cecProcessStart();
            fileSlotLoad(0x25);
            btlTalkBustUpCreate();
            asdLoadFileAsyncSimple("camp/CecItemTable.tbl", &menu->itemTable, 0);
            asdLoadFileAsyncSimple("camp/CecUnionTable.tbl", &menu->unionTable, 0);
            asdLoadFileAsyncSimple("camp/CecMain_scr.bf", &menu->scriptFile, 0);
            asdLoadFileAsyncSimple("camp/CecMain_msg.mbm", &menu->messageFile, 0);
            asdTMTexTableLoadSprites(0x39);
            asdTMTexTableLoadEntryAsync(0x39, 0);

            cecCardBuild(&g_campCec->card, FUN_00262f78(), gameDataBlocksGetFlagByteA(), FUN_00259800());
            if (!FUN_00262f78())
                rt_aeabi_memclr(&g_campCec->card.demon, sizeof(CecCardDemon));
            u32 available = cecQueryOptionalProcess();
            menu->optionalProcessAvailable = available;
            bool changed = false;
            if (available && gameDataBlockTestFlag(0x20)) {
                CecProcessSlot previous;
                cecOutboxReadCard(&previous);
                changed = rt_memcmp(&previous.demon, &g_campCec->card.demon, sizeof(CecCardDemon)) != 0;
            }
            if (changed) {
                if (g_campCec->card.demon.id == 0) {
                    cecCardBuild(&g_campCec->card, 0, gameDataBlocksGetFlagByteA(), FUN_00259800());
                    FUN_002597c0();
                    cecProcessForward(&g_campCec->card);
                    rt_aeabi_memclr(&g_campCec->card.demon, sizeof(CecCardDemon));
                } else {
                    FUN_002597c0();
                    cecProcessForward(&g_campCec->card);
                }
            }
            ++menu->loadState;
            break;
        }
        case 1:
            if (menu->itemTable && menu->unionTable && menu->scriptResource && menu->messageFile)
                ++menu->loadState;
            break;
        }
        threadSleepDuration(nn::fnd::TimeSpan::FromMilliSeconds(10));
    }
}
}
