/* NON_MATCHING: only the kind-2 test's branch sense differs (retail: cmp #2; bne <kind 3>; b <kind 2>, the build: beq <kind 2>; b <kind 3>). */
#include "battle/BattleContextCommands.h"

extern "C" {

/* The kind of the `ordinal`-th available command of the open command menu, or 0 (the out-of-line copy of
 * playSceneContextCommandKind: as a call of that inline armcc does not spill the two parameters as retail does). */
u8 btlCommandMenuKindAt(PlayScene *scene, s32 ordinal)
{
    u8 result = 0;
    s32 accepted = 0;
    const SaveSlotTableIV *table = gameGetSlotTable();
    for (s32 index = 0; index < CONTEXT_COMMAND_COUNT; ++index) {
        const ContextCommandDefinition *command = FUN_00292960((u8)index, scene->commandOwner == 0);
        void *unit = NULL;
        if (scene->commandOwner != 0 && table->active[scene->commandOwner - 1] >= 0)
            unit = gameGetUnitRecord(table->active[scene->commandOwner - 1]);
        if (command == NULL || command->enabled != 1)
            continue;
        if (command->requiredGameFlag && !gameFlagIsSet(command->requiredGameFlag))
            continue;
        if (command->requiredStatusFlag && !flagBitIsSet(command->requiredStatusFlag))
            continue;
        if (command->blockedInBattleMode && (btlGetMainState()->battleFlags & 0x40000))
            continue;
        if (command->kind == CONTEXT_COMMAND_KIND_5) {
            if (scene->commandOwner != 0 && scene->party.vacant[0])
                continue;
        } else {
            if (command->kind == CONTEXT_COMMAND_KIND_2 &&
                (!FUN_00293988(btlGetMainState()) || (btlGetMainState()->battleFlags & 0x40000)))
                continue;
            if (command->kind == CONTEXT_COMMAND_KIND_3 && scene->commandOwner != 0 && unit != NULL &&
                !idOwnerHasActiveObject(unit))
                continue;
        }
        if (command->kind != CONTEXT_COMMAND_KIND_6 && command->kind != CONTEXT_COMMAND_KIND_8 &&
            scene->commandOwner == 0 && FUN_0023dcb8())
            continue;
        if (accepted == ordinal) {
            result = command->kind;
            break;
        }
        ++accepted;
    }
    return result;
}

} /* extern "C" */
