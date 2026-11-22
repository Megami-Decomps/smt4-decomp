/* NON_MATCHING: raw 56 / shape 10 of 146 rows, written on the battle UI's ActorCardAnimationsA with the
 * linker-inlined constant-false guard as a call to btlDebugQueryEnabled. What differs is the kind-5 and kind-3 arms:
 * retail branches `cmp #3; bne; b` (this build `beq; b`) and `cmp vacant; bne <skip>; b` (this build `beq; b`), tests
 * the unit index and the unit in two branches (this build one `cmpne`) and tests the kind for 3 again before the
 * flag test (the lead of an inlined kind-3 helper: with it written so the score does not improve). */
#include "battle/BattleContextCommandsA.h"

extern "C" {

/* The kind of the `ordinal`-th available command of the open command menu, or 0 (the out-of-line copy of
 * actorCardContextCommandKind). */
u8 btlCommandMenuKindAt(ActorCardAnimationsA *scene, s32 ordinal)
{
    u8 result = 0;
    s32 accepted = 0;
    const SaveSlotTableA *table = gameGetSlotTable();

    for (s32 index = 0; index < DEBUG_MENU_ENTRY_COUNT; ++index) {
        BtlDebugEntry *command = FUN_002cc228((u8)index, scene->page == 0);
        SlotRecordA *unit = NULL;
        if (scene->page != 4 && scene->page != 0 && table->reserve[scene->page - 1] >= 0)
            unit = gameGetSlotRecord(table->reserve[scene->page - 1]);
        if (command == NULL || command->enabled != 1)
            continue;
        if (command->flagId != 0 && gameFlagIsSet(command->flagId) == 0)
            continue;
        if (command->dataFlagId != 0 && gameDataFlagTestBit(command->dataFlagId) == 0)
            continue;
        if (command->needsBattleState != 0 &&
            (((BtlStateMasks *)btlGetMainState())->held & DAT_00573bd8.blocked) != 0)
            continue;
        if (command->kind == 5) {
            if (scene->unitIndices[scene->page] != -1 && scene->vacant[0] != 0)
                continue;
        } else if (command->kind == 2) {
            continue;
        } else if (command->kind == 3) {
            if (scene->unitIndices[scene->page] != -1 && unit != NULL && idListHasFlaggedRecord(unit) == 0) {
                if ((command->flags & 1) != 0 || btlIsDefeatSuppressed() == 0 || btlObjectHasEntryFlag(unit) == 0)
                    continue;
            }
        }
        if (command->kind != 6 && command->kind != 8) {
            if (btlDebugQueryEnabled() != 0)
                continue;
            if (command->kind == 9 && btlListIsKind9Available() == 0)
                continue;
        }
        if ((command->flags & 1) != 0 && btlIsDefeatSuppressed() != 0)
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
