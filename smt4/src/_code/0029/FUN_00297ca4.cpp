/* NON_MATCHING: 4 lines. Retail enters the kind-2 checks with bne/b where the build uses beq/b. */
#include "battle/BattleCommandMenu.h"
#include "battle/BattleCommandLookup.h"
#include "code/Code0023.h"
#include "code/Code0029_Smt4.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
u32 FUN_00293988(void *scene);
s32 idOwnerHasActiveObject(void *unit);
s32 objectPartRunUnlessLocked(CommandCounter *counter);

/* Find the command the cursor selects among the available ones and return its menu action code. */
u32 FUN_00297ca4(BattleCommandMenu *menu, s32 confirm)
{
    if (confirm != 0 && menu->mode == 6)
        return 11;
    const SaveSlotTableIV *slotTable = gameGetSlotTable();
    const ContextCommandDefinition *command;
    s32 count = 0;
    for (s32 i = 0; i < 9; i++) {
        command = btlDebugFindCommandByIndex(i, menu->cursor == 0);
        void *unit = NULL;
        if (menu->cursor != 0 && slotTable->active[menu->cursor - 1] >= 0)
            unit = gameGetUnitRecord(gameGetSlotTable()->active[menu->cursor - 1]);
        if (!battleCommandIsAvailable(command))
            continue;
        if (command->kind == 5) {
            if (menu->state.slotCommandLocked != 0)
                continue;
        } else if (command->kind == 2) {
            if (FUN_00293988(btlGetMainState()) == 0)
                continue;
            if ((btlGetMainState()->battleFlags & 0x40000) != 0)
                continue;
        }
        if (command->kind == 3 && menu->cursor != 0) {
            if (unit != 0 && idOwnerHasActiveObject(unit) == 0)
                continue;
        }
        if (command->kind != 6 && command->kind != 8 && menu->cursor == 0 && FUN_0023dcb8() != 0)
            continue;
        if (objectPartRunUnlessLocked(&menu->counters[menu->cursor]) == count)
            break;
        count++;
    }
    if (command != NULL) {
        switch (command->kind) {
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 7;
        case 4:
            return 3;
        case 5:
            return 10;
        case 6:
            return 9;
        case 7:
            return 4;
        }
    }
    return 5;
}
}
