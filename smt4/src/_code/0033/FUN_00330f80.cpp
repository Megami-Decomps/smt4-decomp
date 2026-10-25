/* NON_MATCHING: ordinal and accepted-count values remain in registers instead of retail argument homing; scene gate folds to direct addressing and return tails differ. */
#include "shard/PlayScene.h"
#include "shard/flagBitIsSet.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"

struct ContextCommandDefinition {
    u8 kind, enabled;
    u8 unk02[0x59];
    u8 blockedInBattleMode;
    u16 requiredGameFlag, requiredStatusFlag;
};
extern "C" {
const ContextCommandDefinition *FUN_00292960(u8 index, bool protagonist);
void *gameGetSlotTable(void);
void *gameGetUnitRecord(s32 index);
s32 idOwnerHasActiveObject(void *unit);
s32 gameFlagIsSet(u16 flag);
u32 FUN_00293988(void *battle);
s32 FUN_0023dcb8(void);

u8 FUN_00330f80(PlayScene *scene, s32 ordinal)
{
    // These byte columns are accessed inside canonical opaque scene/party-manager data.
    struct CommandSceneGate { u8 prefix[0x38D1]; u8 blocked; };
    struct CommandPartySlots { u8 prefix[0x9107]; s8 units[1]; };
    const CommandPartySlots *slots = static_cast<const CommandPartySlots *>(gameGetSlotTable());
    s32 accepted = 0;
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
            if (scene->unk305C != 0 && reinterpret_cast<const CommandSceneGate *>(scene)->blocked)
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
        if (accepted == ordinal)
            return command->kind;
        ++accepted;
    }
    return 0;
}
}
