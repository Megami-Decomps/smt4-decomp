/* NON_MATCHING: CEC idle dispatch branches and stripped-call NOPs differ from retail. */
#include "camp/CecMenu.h"
#include "shard/Shard0042.h"

extern "C" {
extern CampCecMenu *g_campCec;
HalfPair48 *saveGetIndexedMapValue(s32 index);
s32 gameDataBlockTestFlag(u32 mask);
void buttonHelpSetPreset(u32 preset);
s32 partyPanelIsActive(void);
void messageBannerInitSelection(s32 enabled, s32 mode);
void messageInitializeSavedBanner(void);
u32 FUN_0031e384(void *polling);
u32 FUN_002228d4(void);

/* Dispatch the selected CEC action and maintain idle help, saved banner and visibility flags. */
u32 FUN_002e1898(CampCecMenu *menu)
{
    u32 result = 0;
    if (menu->substate != -1) {
        if (menu->substate == 1) {
            if (menu->optionalProcessAvailable != 0 && gameDataBlockTestFlag(0x20) != 0)
                menu->state = 7;
            else {
                buttonHelpSetPreset(60);
                menu->state = 11;
            }
        } else if (menu->substate == 2) {
            s32 occupied = 0;
            for (s32 index = 0; index < 12; ++index) {
                if (saveGetIndexedMapValue(index)->unk48 != 0)
                    occupied++;
            }
            if (occupied != 0)
                menu->state = 8;
            else {
                buttonHelpSetPreset(60);
                menu->state = 10;
            }
        } else if (menu->substate == 3) {
            menu->state = 9;
        }
        if (menu->substate != 0)
            result = 2;
    } else {
        result = 2;
    }
    if (menu->helpInitialized == 0) {
        buttonHelpSetPreset(partyPanelIsActive() != 0 ? 4 : 3);
        menu->helpInitialized = 1;
    }
    if (menu->savedBannerPending != 0) {
        menu->savedBannerPending = 0;
        messageBannerInitSelection(1, 0);
        messageInitializeSavedBanner();
    }
    if ((FUN_0031e384(menu->polling.work) & 2) != 0) {
        if ((FUN_002228d4() & 2) != 0)
            g_campCec->visibility.flags |= 2;
        else
            g_campCec->visibility.flags &= ~2;
    }
    return result;
}
}
