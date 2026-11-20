/* NON_MATCHING: the maximum's operand and address setup differs, and the two battle-flag updates use other registers. */
#include "battle/BtlEntry.h"
#include "battle/BtlGlobals.h"
#include "battle/btlMain.h"

struct CommandEventContext { BtlMainState *battle; };
struct CommandEventData { u8 unk000[0x14c]; u16 type; };
struct CommandEventChoice {
    u32 flags;
    u8 unk04[0x20];
    u32 effectHandle;
    CommandEventData *command;
};
extern "C" {
void FUN_00246454(u32, CommandEventChoice *, BtlEntry *);
void btlMenuCursorStepReflectAction(u32, CommandEventChoice *, u32, u32, u32);
void FUN_002569ac(CommandEventContext *, u32);
void btlEntryValuesCopy(CommandEventContext *, CommandEventChoice *);

void btlResolveCommandEvent(CommandEventContext *context, CommandEventChoice *choice)
{
    BtlEntry *target = btlMainFindEntryByListedId(context->battle, context->battle->playerCheck.checkId);
    if (target && !(context->battle->battleMask & 0x200)) {
        BtlMainState *battle = context->battle;
        s32 level = battle->commandEvent.maximumTargetLevel;
        s32 targetLevel = target->data.level;
        if (level <= targetLevel) {
            level = targetLevel;
        }
        battle->commandEvent.maximumTargetLevel = level;
    }
    switch (context->battle->commandEvent.mode) {
    case 1:
        break;
    case 2:
        context->battle->battleMask |= 0x400000;
        break;
    case 3:
        choice->command->type = 4;
        return;
    }
    bool queueEffect = false;
    u32 effect = 0;
    if (context->battle->commandEvent.mode == 1) {
        switch (context->battle->commandEvent.event) {
        case 1: queueEffect = true; effect = 12; break;
        case 2: queueEffect = true; effect = 5; break;
        case 3: queueEffect = true; effect = 3; break;
        case 4: queueEffect = true; effect = 14; break;
        case 7:
            context->battle->battleMask |= 0x80;
            choice->flags |= 4;
            break;
        }
        BtlMainState *battle = context->battle;
        if (battle->commandEvent.targetMode == 2) {
            BtlEntry *unit = btlMainFindEntryByListedId(battle, battle->playerCheck.checkId);
            if (unit)
                FUN_00246454(0, choice, unit);
        }
        if (queueEffect)
            btlMenuCursorStepReflectAction(0, choice, effect, choice->effectHandle, 1);
    }
    BtlMainState *battle = context->battle;
    enum { FIRST_ENEMY_SLOT = 4, END_ENEMY_SLOT = 54 };
    s32 active = 0;
    for (s32 slot = FIRST_ENEMY_SLOT; slot < END_ENEMY_SLOT; ++slot) {
        if ((battle->entries[slot].flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(battle->entries[slot].flags & BTL_ENTRY_FLAG_BLOCKED)) {
            ++active;
        }
    }
    if (active == 0)
        battle->actionState.mode = 10;
    FUN_002569ac(context, context->battle->actionState.index);
    btlEntryValuesCopy(context, choice);
}
}
