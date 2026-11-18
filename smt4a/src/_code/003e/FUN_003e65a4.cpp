/* NON_MATCHING: the script-start call is not predicated and the choice paths emit separate tail calls. */
#include "shop/ShopItemDescription.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
extern const char DAT_005332c4[];
u32 dataFindKindRecordWithAocOverrides(u32 sound, u32 mode);
s32 scrRunOpcodesStub(u32 script);
u32 scrScriptProcessStartEntry(u32 script, s32 entry);
s32 panelIsMissingOrFlagClear();
s32 tableGroupFindEntryIndex(u32 table, const char *name);
void FUN_003c1060();
void FUN_003c3e14();

// Register shop voices, run the selection script, and dispatch the chosen description entry.
void FUN_003e65a4(ShopItemDescription *work)
{
    switch (work->selectionState.state) {
    case 0:
        if (work->initialVoice.sound != 0)
            scrSetStringSlot(0, reinterpret_cast<const char *>(dataFindKindRecordWithAocOverrides(work->initialVoice.sound, 0)));
        if (work->entries[0].voice.sound != 0)
            scrSetStringSlot(1, reinterpret_cast<const char *>(dataFindKindRecordWithAocOverrides(work->entries[0].voice.sound, 0)));
        if (work->entries[1].voice.sound != 0)
            scrSetStringSlot(2, reinterpret_cast<const char *>(dataFindKindRecordWithAocOverrides(work->entries[1].voice.sound, 0)));
        // Fall through: the initial voices and subsequent descriptions use the same selection entry.
    case 1: {
        FUN_003c1060();
        s32 entry = tableGroupFindEntryIndex(work->tableGroup, DAT_005332c4);
        if (entry >= 0)
            scrScriptProcessStartEntry(work->script, entry);
        work->selectionState.state = 2;
        break;
    }
    case 2: {
        if (scrRunOpcodesStub(work->script) != 2 || !panelIsMissingOrFlagClear())
            return;
        s32 choice = messageGetChoiceResult();
        if (choice != -1 && choice != 3) {
            work->progress.selectedEntry = choice;
            scrScriptProcessStartEntry(work->script, work->entries[choice].scriptEntry);
            work->selectionState.state = 3;
            return FUN_003c3e14();
        } else {
            ShopDescriptionState next(3, 0, work->selectionState.mode);
            work->selectionState = next;
        }
        FUN_003c3e14();
        break;
    }
    case 3:
        if (scrRunOpcodesStub(work->script) == 2)
            work->selectionState.state = 1;
        break;
    }
}
}
