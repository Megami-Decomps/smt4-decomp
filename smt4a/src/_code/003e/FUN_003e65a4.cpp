/* NON_MATCHING: state-transition stores, script-start call predication and saved registers differ. */
#include "shop/ShopItemDescription.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "shard/messageGetChoiceResult.h"

extern "C" {
extern const char DAT_005332c4[];
u32 FUN_0015f858(u32 sound, u32 mode);
s32 scrRunOpcodesStub(u32 script);
u32 scrScriptProcessStartEntry(u32 script, s32 entry);
s32 panelIsMissingOrFlagClear();
s32 tableGroupFindEntryIndex(u32 table, const char *name);
void FUN_003c1060();
void FUN_003c3e14();

// Register shop voices, run the selection script, and dispatch the chosen description entry.
void FUN_003e65a4(ShopItemDescription *work)
{
    switch (work->state) {
    case 0:
        if (work->initialVoice.sound != 0)
            FUN_003180c4(0, reinterpret_cast<const char *>(FUN_0015f858(work->initialVoice.sound, 0)));
        if (work->entries[0].voice.sound != 0)
            FUN_003180c4(1, reinterpret_cast<const char *>(FUN_0015f858(work->entries[0].voice.sound, 0)));
        if (work->entries[1].voice.sound != 0)
            FUN_003180c4(2, reinterpret_cast<const char *>(FUN_0015f858(work->entries[1].voice.sound, 0)));
        // Fall through: the initial voices and subsequent descriptions use the same selection entry.
    case 1: {
        FUN_003c1060();
        s32 entry = tableGroupFindEntryIndex(work->tableGroup, DAT_005332c4);
        if (entry >= 0)
            scrScriptProcessStartEntry(work->script, entry);
        work->state = 2;
        break;
    }
    case 2: {
        if (scrRunOpcodesStub(work->script) != 2 || !panelIsMissingOrFlagClear())
            return;
        s32 choice = messageGetChoiceResult();
        if (choice != -1 && choice != 3) {
            // A word overlay here would raise the two-byte-aligned entry type's alignment.
            struct SelectionView { u8 prefix[0x4C]; s32 selected; };
            reinterpret_cast<SelectionView *>(work)->selected = choice;
            scrScriptProcessStartEntry(work->script, work->entries[choice].scriptEntry);
            work->state = 3;
        } else {
            u32 previousMode = work->mode;
            work->mode = 3;
            work->state = 0;
            work->previousMode = previousMode;
        }
        FUN_003c3e14();
        break;
    }
    case 3:
        if (scrRunOpcodesStub(work->script) == 2)
            work->state = 1;
        break;
    }
}
}
