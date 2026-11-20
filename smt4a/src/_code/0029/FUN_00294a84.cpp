/* NON_MATCHING: Popup-event selection is reconstructed; state guard lowering and table traversal preserve a different register set. */
#include "gamedata/PartnerInfoTable.h"
#include "code/Code0015.h"
#include "gamedata/SaveSlotTable.h"
#include "map/PopupStateA.h"

struct PopupSaveSlot {
    /* 0x000 */ u8 unk000[0x12c];
    /* 0x12C */ u16 selection;
};

extern "C" {
s32 gameFlagIsSet(u32 flag);
s32 randRange(s32 maximum);
const char *popupSelectWeightedMessage(s32 type);
}

/* Queue a selected-slot popup, subject to its flags and probability table. */
extern "C" void FUN_00294a84(s32 immediate)
{
    messageVoiceFlagsGet();
    if (g_popupState->state == 3)
        return;
    if (g_popupState->state != 0)
        return;
    PopupSaveSlot *slot = reinterpret_cast<PopupSaveSlot *>(saveSlotFindSelected());
    if (slot == NULL) {
        return;
    }
    if (gameFlagIsSet(0x1a2) && randRange(99) + 1 <= 50) {
        return;
    }
    if (immediate != 0) {
        g_popupState->speakerId = slot->selection;
        g_popupState->message = popupSelectWeightedMessage(6);
        g_popupState->timer = 0;
        g_popupState->state = 4;
        return;
    }
    DataTableView<PartnerInfoRecord> table(0x43, 0);
    for (s32 i = 0; i < static_cast<s32>(table.count); ++i) {
        DataTableView<PartnerInfoRecord> currentTable(0x43, 0);
        const PartnerInfoRecord *entry = currentTable.at(i);
        if (entry->kind != 5 || entry->partnerId != slot->selection) {
            continue;
        }
        if (entry->requiredFlag != 0 && !gameFlagIsSet(entry->requiredFlag)) {
            continue;
        }
        if (entry->excludedFlag != 0 && gameFlagIsSet(entry->excludedFlag)) {
            continue;
        }
        if (entry->argument < randRange(99) + 1) {
            continue;
        }
        g_popupState->speakerId = slot->selection;
        g_popupState->message = popupSelectWeightedMessage(5);
        g_popupState->timer = 0;
        g_popupState->state = 4;
        return;
    }
}
