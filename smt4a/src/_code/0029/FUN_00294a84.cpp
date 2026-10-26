/* NON_MATCHING: Popup-event selection is reconstructed; state guard lowering and table traversal preserve a different register set. */
#include "gamedata/DataTable.h"
#include "code/Code0015.h"
#include "gamedata/SaveSlotTable.h"

struct PopupState {
    /* 0x00 */ s32 state;
    /* 0x04 */ u32 step;
    /* 0x08 */ u8 unk08[0xc];
    /* 0x14 */ u32 handle;
    /* 0x18 */ u32 selection;
};
struct PopupSaveSlot {
    /* 0x000 */ u8 unk000[0x12c];
    /* 0x12C */ u16 selection;
};
struct PopupEventRecord {
    /* 0x00 */ u32 selection;
    /* 0x04 */ u32 type;
    /* 0x08 */ s16 requiredFlag;
    /* 0x0A */ s16 excludedFlag;
    /* 0x0C */ s16 probability;
    /* 0x0E */ u8 unk0e[0x12];
};

extern "C" {
extern PopupState *g_popupState;
s32 gameFlagIsSet(u32 flag);
s32 randRange(s32 maximum);
u32 FUN_002d8b58(s32 type);
}

/* Queue a selected-slot popup, subject to its flags and probability table. */
extern "C" void FUN_00294a84(s32 immediate)
{
    FUN_00152f44();
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
        g_popupState->selection = slot->selection;
        g_popupState->handle = FUN_002d8b58(6);
        g_popupState->step = 0;
        g_popupState->state = 4;
        return;
    }
    DataTableView<PopupEventRecord> table(0x43, 0);
    for (s32 i = 0; i < static_cast<s32>(table.count); ++i) {
        DataTableView<PopupEventRecord> currentTable(0x43, 0);
        const PopupEventRecord *entry = currentTable.at(i);
        if (entry->type != 5 || entry->selection != slot->selection) {
            continue;
        }
        if (entry->requiredFlag != 0 && !gameFlagIsSet(entry->requiredFlag)) {
            continue;
        }
        if (entry->excludedFlag != 0 && gameFlagIsSet(entry->excludedFlag)) {
            continue;
        }
        if (entry->probability < randRange(99) + 1) {
            continue;
        }
        g_popupState->selection = slot->selection;
        g_popupState->handle = FUN_002d8b58(5);
        g_popupState->step = 0;
        g_popupState->state = 4;
        return;
    }
}
