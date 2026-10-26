/* NON_MATCHING: the idle flags are read through a block pointer at menu+0xD00 (as retail) and written through the menu; retail lays the help-init and occupied-slot arms out of line after the epilogue, built keeps them inline. */
#include "camp/CecMenu.h"
#include "shard/Shard0042.h"

struct CecIdleBlock {
    u8 unk00[0x60];
    u8 optionalProcessAvailable;
    u8 helpInitialized;
    u8 unk62;
    u8 savedBannerPending;
};

/* Reads of the idle flags go through the block at 0xD00, writes through the menu itself. */

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
    CecIdleBlock *idle = reinterpret_cast<CecIdleBlock *>(reinterpret_cast<u8 *>(menu) + 0xD00);
    u32 result = 0;
    if (menu->substate != -1) {
        if (menu->substate == 1) {
            if (idle->optionalProcessAvailable != 0 && gameDataBlockTestFlag(0x20) != 0)
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
    if (idle->helpInitialized == 0) {
        buttonHelpSetPreset(partyPanelIsActive() != 0 ? 4 : 3);
        menu->helpInitialized = 1;
    }
    if (idle->savedBannerPending != 0) {
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
