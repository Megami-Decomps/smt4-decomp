#include "shop/ShopItemDescription.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "code/Code003c_Smt4a.h"

extern "C" {
extern const char DAT_005332c4[];
u32 dataFindKindRecordWithAocOverrides(u32 sound, u32 mode);
s32 scrRunOpcodesStub(u32 script);
u32 scrScriptProcessStartEntry(u32 script, s32 entry);
s32 panelIsMissingOrFlagClear();
s32 tableGroupFindEntryIndex(u32 table, const char *name);

/* Registers shop voices, runs the selection script and starts the chosen item description. */
void npcShopUpdateItemDescription(ShopItemDescription *work)
{
    enum {
        REGISTER_VOICES = 0,
        START_SELECTION = 1,
        WAIT_FOR_SELECTION = 2,
        WAIT_FOR_DESCRIPTION = 3,
        SCRIPT_COMPLETE = 2,
        CANCEL_CHOICE = 3,
        DESCRIPTION_EXIT_MODE = 3
    };

    switch (work->selectionState.state) {
    case REGISTER_VOICES:
        if (work->initialVoice.sound != 0)
            scrSetStringSlot(0, (const char *)dataFindKindRecordWithAocOverrides(work->initialVoice.sound, 0));
        if (work->entries[0].voice.sound != 0)
            scrSetStringSlot(1, (const char *)dataFindKindRecordWithAocOverrides(work->entries[0].voice.sound, 0));
        if (work->entries[1].voice.sound != 0)
            scrSetStringSlot(2, (const char *)dataFindKindRecordWithAocOverrides(work->entries[1].voice.sound, 0));
        /* Fall through: the initial voices and subsequent descriptions use the same selection entry. */
    case START_SELECTION: {
        messageMainRequestBanner();
        s32 entry = tableGroupFindEntryIndex(work->tableGroup, DAT_005332c4);
        if (entry >= 0)
            scrScriptProcessStartEntry(work->script, entry);
        work->selectionState.state = WAIT_FOR_SELECTION;
        break;
    }
    case WAIT_FOR_SELECTION: {
        if (scrRunOpcodesStub(work->script) != SCRIPT_COMPLETE || !panelIsMissingOrFlagClear())
            return;
        s32 choice = messageGetChoiceResult();
        if (choice == -1 || choice == CANCEL_CHOICE) {
            npcShopChangeDescriptionMode(work, DESCRIPTION_EXIT_MODE);
        } else {
            work->progress.selectedEntry = choice;
            scrScriptProcessStartEntry(work->script, work->entries[choice].scriptEntry);
            work->selectionState.state = WAIT_FOR_DESCRIPTION;
        }
        messageMainClearBannerRequest();
        return;
    }
    case WAIT_FOR_DESCRIPTION:
        if (scrRunOpcodesStub(work->script) == SCRIPT_COMPLETE)
            work->selectionState.state = START_SELECTION;
        break;
    }
}

} /* extern "C" */
