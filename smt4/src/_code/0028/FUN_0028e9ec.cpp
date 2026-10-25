/* NON_MATCHING: menu-state base hoist precedes the slot clear; kind-3 test uses BEQ/B rather than retail BNE/B. */
#include "battle/BattleCommandMenu.h"

extern "C" {
BattleCommandEntry *FUN_00292960(u8 index, int primary);
u32 FUN_00293988(void *scene);
s32 FUN_0023dcb8(void);
s32 idOwnerHasActiveObject(void *unit);
s8 *gameGetSlotTable(void);
void *gameGetUnitRecord(s32 id);
void FUN_0029f848(CommandCounter *counter, s32 value, s32 a, s32 b, s32 c, s32 d);

/* Count the commands available in the battle command menu for the party and for each party member. */
void FUN_0028e9ec(BattleCommandMenu *menu)
{
    s32 count = 0;
    for (s32 i = 0; i < 9; i++) {
        BattleCommandEntry *command = FUN_00292960(i, 1);
        if (!battleCommandIsAvailable(command))
            continue;
        if (command->kind == 2) {
            if (FUN_00293988(btlGetMainState()) == 0)
                continue;
            if ((btlGetMainState()->flags & 0x40000) != 0)
                continue;
        }
        if (command->kind == 6 || command->kind == 8 || FUN_0023dcb8() == 0)
            count++;
    }
    FUN_0029f848(&menu->counters[0], count, 1, count, 1, 1);
    CommandMenuState *state = &menu->state;
    for (s32 slot = 0; slot < 3; slot++) {
        s32 slotCount = 0;
        if (gameGetSlotTable()[0x9108 + slot] >= 0) {
            void *unit = gameGetUnitRecord(gameGetSlotTable()[0x9108 + slot]);
            if (unit != 0) {
                for (s32 i = 0; i < 9; i++) {
                    BattleCommandEntry *command = FUN_00292960(i, 0);
                    if (!battleCommandIsAvailable(command))
                        continue;
                    if (command->kind == 5) {
                        if (state->slotCommandLocked != 0)
                            continue;
                    } else if (command->kind == 3) {
                        if (idOwnerHasActiveObject(unit) == 0)
                            continue;
                    }
                    slotCount++;
                }
            }
        }
        FUN_0029f848(&menu->counters[1 + slot], slotCount, 1, slotCount, 1, 1);
    }
}
}
