/* Apocalypse: the battle command menu's list of available commands (the player's menu, or a reserve position's).
 * The command rows are BtlDebugEntry (battle/BtlDebugMenuEntry.h). */
#ifndef SMT4A_BATTLE_BATTLECONTEXTCOMMANDSA_H
#define SMT4A_BATTLE_BATTLECONTEXTCOMMANDSA_H

#include "battle/ActorCardAnimations.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlDebugMenuEntry.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "shard/W6_W6Match8_StatGrowth.h"

/* The battle-state masks that hide a command (observed field). */
struct CommandBlockMasks {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u64 blocked;
};

extern "C" {

extern CommandBlockMasks DAT_00573bd8;

s32 idListHasFlaggedRecord(SlotRecordA *record);
s32 btlIsDefeatSuppressed(void);
s32 btlObjectHasEntryFlag(SlotRecordA *record);
s32 btlListIsKind9Available(void);
s32 btlDebugQueryEnabled(void);    /* constant 0 (armlink inlines its `mov r0, #0`) */
u8 btlCommandMenuKindAt(ActorCardAnimationsA *scene, s32 ordinal);

} /* extern "C" */

/* The kind of the `ordinal`-th available command of the open command menu, or 0. btlCommandMenuKindAt is this body
 * out of line; btlCommandMenuDraw holds an inlined copy for each row it draws. */
static __inline u8 actorCardContextCommandKind(ActorCardAnimationsA *scene, s32 ordinal)
{
    u8 result = 0;
    s32 accepted = 0;
    const SaveSlotTableA *table = gameGetSlotTable();

    for (s32 index = 0; index < DEBUG_MENU_ENTRY_COUNT; ++index) {
        BtlDebugEntry *command = btlDebugFindCommandByIndex((u8)index, scene->page == 0);
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

#endif
