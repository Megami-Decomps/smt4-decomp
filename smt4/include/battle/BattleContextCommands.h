/* IV: the battle command menu's list of available commands (the player's menu, or an active position's). */
#ifndef SMT4_BATTLE_BATTLECONTEXTCOMMANDS_H
#define SMT4_BATTLE_BATTLECONTEXTCOMMANDS_H

#include "ui/UiSpriteApi.h"
#include "shard/PlayScene.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/UnitRecordAccess.h"
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"

/* One row of the battle command table (0x60 bytes). */
struct ContextCommandDefinition {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 enabled;
    /* 0x02 */ u8 unk02[0x59];
    /* 0x5B */ u8 blockedInBattleMode;     /* hidden while the battle has flag 0x40000 */
    /* 0x5C */ u16 requiredGameFlag;
    /* 0x5E */ u16 requiredStatusFlag;
};

/* ContextCommandDefinition::kind values the list treats specially. */
enum {
    CONTEXT_COMMAND_KIND_2 = 2,     /* needs FUN_00293988 and no battle flag 0x40000 */
    CONTEXT_COMMAND_KIND_3 = 3,     /* a position's unit needs an active object (idOwnerHasActiveObject) */
    CONTEXT_COMMAND_KIND_5 = 5,     /* not offered by a vacant position */
    CONTEXT_COMMAND_KIND_6 = 6,     /* kinds 6 and 8 stay available while FUN_0023dcb8 blocks the player's others */
    CONTEXT_COMMAND_KIND_8 = 8,
    CONTEXT_COMMAND_COUNT = 9
};

extern "C" {
const ContextCommandDefinition *FUN_00292960(u8 index, bool protagonist);
s32 idOwnerHasActiveObject(void *unit);
u32 FUN_00293988(void *battle);
s32 FUN_0023dcb8(void); // declcheck: local (code/Code0023.h declares it void; the list tests its result)
}

/* The kind of the `ordinal`-th available command of the open command menu, or 0. btlCommandMenuKindAt is this
 * body out of line; btlCommandMenuDraw holds a copy armcc inlined late for each row it draws (a plain `static`
 * function: as `static __inline` its temporaries are scheduled and reloaded differently). */
static u8 playSceneContextCommandKind(PlayScene *scene, s32 ordinal)
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

#endif
