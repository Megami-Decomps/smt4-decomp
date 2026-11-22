#include "quest_center/qcMain.h"
#include "camp/CecMenu.h"
#include "code/Code0029_Smt4.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "camp/CecMenu.h"
#include "shard/Shard0042.h"

extern "C" {
HalfPair48 *saveGetIndexedMapValue(s32 index);
s32 gameDataBlockTestFlag(u32 mask);
void messageInitializeSavedBanner(void);
u32 cheatSequenceUpdate(void *polling);
u32 gameDataGetMenuIdleFlags(void);

/* Dispatch the selected CEC action and maintain idle help, saved banner and visibility flags. */
u32 campCecMenuIdleState(CampCecMenu *menu)
{
    u32 result = 0;
    switch (menu->substate) {
    case -1:
        break;
    case 1:
        if (menu->optionalProcessAvailable != 0 && gameDataBlockTestFlag(0x20) != 0) {
            menu->state = 7;
        } else {
            buttonHelpSetPreset(60);
            menu->state = 11;
        }
        break;
    case 2: {
        s32 occupied = 0;
        for (s32 index = 0; index < 12; ++index) {
            if (saveGetIndexedMapValue(index)->unk48 != 0)
                occupied++;
        }
        if (occupied == 0) {
            buttonHelpSetPreset(60);
            menu->state = 10;
        } else {
            menu->state = 8;
        }
        break;
    }
    case 3:
        menu->state = 9;
        break;
    }
    if (menu->substate != 0)
        result = 2;
    if (menu->helpInitialized == 0) {
        if (partyPanelIsActive() != 0)
            buttonHelpSetPreset(4);
        else
            buttonHelpSetPreset(3);
        menu->helpInitialized = 1;
    }
    if (menu->savedBannerPending != 0) {
        menu->savedBannerPending = 0;
        messageBannerInitSelection(1, 0);
        messageInitializeSavedBanner();
    }
    if ((cheatSequenceUpdate(menu->polling.work) & 2) != 0) {
        if ((gameDataGetMenuIdleFlags() & 2) != 0)
            g_campCec->card.flags |= 2;
        else
            g_campCec->card.flags &= ~2;
    }
    return result;
}
}
