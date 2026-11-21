/* NON_MATCHING: only the kind-2 test's branch sense differs (retail: cmp #2; bne <kind 3>; b <kind 2>, the build: beq <kind 2>; b <kind 3>). */
#include "ui/UiSpriteApi.h"
#include "shard/PlayScene.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "gamedata/UnitRecordAccess.h"

struct ContextCommandDefinition {
    u8 kind, enabled;
    u8 unk02[0x59];
    u8 blockedInBattleMode;
    u16 requiredGameFlag, requiredStatusFlag;
};
extern "C" {
const ContextCommandDefinition *FUN_00292960(u8 index, bool protagonist);
void *gameGetSlotTable(void);
s32 idOwnerHasActiveObject(void *unit);
u32 FUN_00293988(void *battle);
s32 FUN_0023dcb8(void);

/* The kind of the `ordinal`-th available command of the current party slot's menu, or 0. */
u8 FUN_00330f80(PlayScene *scene, s32 ordinal)
{
    /* The slot table's party unit indices (byte column 0x9108 + slot). */
    struct CommandPartySlots { u8 prefix[0x9107]; s8 units[1]; };
    u8 result = 0;
    s32 accepted = 0;
    const CommandPartySlots *slots = static_cast<const CommandPartySlots *>(gameGetSlotTable());
    for (s32 index = 0; index < 9; ++index) {
        const ContextCommandDefinition *command = FUN_00292960(static_cast<u8>(index), scene->unk305C == 0);
        void *unit = NULL;
        if (scene->unk305C != 0 && slots->units[scene->unk305C] >= 0)
            unit = gameGetUnitRecord(slots->units[scene->unk305C]);
        if (command == NULL || command->enabled != 1)
            continue;
        if (command->requiredGameFlag && !gameFlagIsSet(command->requiredGameFlag))
            continue;
        if (command->requiredStatusFlag && !flagBitIsSet(command->requiredStatusFlag))
            continue;
        if (command->blockedInBattleMode && (btlGetMainState()->battleFlags & 0x40000))
            continue;
        if (command->kind == 5) {
            if (scene->unk305C != 0 && scene->party.vacant[0])
                continue;
        } else {
            if (command->kind == 2 &&
                (!FUN_00293988(btlGetMainState()) || (btlGetMainState()->battleFlags & 0x40000)))
                continue;
            if (command->kind == 3 && scene->unk305C != 0 && unit != NULL && !idOwnerHasActiveObject(unit))
                continue;
        }
        if (command->kind != 6 && command->kind != 8 && scene->unk305C == 0 && FUN_0023dcb8())
            continue;
        if (accepted == ordinal) {
            result = command->kind;
            break;
        }
        ++accepted;
    }
    return result;
}
}
