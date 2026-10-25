/* NON_MATCHING: retail lays the per-kind availability checks out as a goto web (kind 5 locked check first, kind 3 jumping into the shared FUN_0023dcb8 tail) and keeps menu+0x3000 in r5; the equivalent nested ifs compile to a different block order and register assignment. */
#include "battle/BattleCommandMenu.h"

extern "C" {
BattleCommandEntry *FUN_00292960(u8 index, int primary);
u32 FUN_00293988(void *scene);
s32 FUN_0023dcb8(void);
s32 idOwnerHasActiveObject(void *unit);
s8 *gameGetSlotTable(void);
void *gameGetUnitRecord(s32 id);
s32 objectPartRunUnlessLocked(CommandCounter *counter);

/* Find the command the cursor selects among the available ones and return its menu action code. */
u32 FUN_00297ca4(BattleCommandMenu *menu, s32 confirm)
{
    if (confirm != 0 && menu->mode == 6)
        return 11;
    s8 *slotTable = gameGetSlotTable();
    CommandMenuState *state = &menu->state;
    BattleCommandEntry *command;
    s32 count = 0;
    for (s32 i = 0; i < 9; i++) {
        command = FUN_00292960(i, menu->cursor == 0);
        void *unit = 0;
        if (menu->cursor != 0 && slotTable[0x9107 + menu->cursor] >= 0)
            unit = gameGetUnitRecord(gameGetSlotTable()[0x9107 + menu->cursor]);
        if (!battleCommandIsAvailable(command))
            continue;
        if (command->kind != 5) {
            if (command->kind == 2) {
                if (FUN_00293988(btlGetMainState()) == 0)
                    continue;
                if ((btlGetMainState()->flags & 0x40000) != 0)
                    continue;
            }
            if (command->kind == 3) {
                if (menu->cursor == 0) {
                    if (FUN_0023dcb8() != 0)
                        continue;
                } else if (unit != 0) {
                    if (idOwnerHasActiveObject(unit) == 0)
                        continue;
                }
            } else if (command->kind != 6 && command->kind != 8) {
                if (menu->cursor == 0) {
                    if (FUN_0023dcb8() != 0)
                        continue;
                }
            }
        } else {
            if (state->slotCommandLocked != 0)
                continue;
            if (menu->cursor == 0) {
                if (FUN_0023dcb8() != 0)
                    continue;
            }
        }
        if (objectPartRunUnlessLocked(&menu->counters[menu->cursor]) == count)
            break;
        count++;
    }
    if (command != 0) {
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
