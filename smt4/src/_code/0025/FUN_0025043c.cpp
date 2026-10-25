/* NON_MATCHING: result code three is not retained across skill validation, and shared return-zero/three blocks have different placement. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "gamedata/Table04Record.h"
#include <stddef.h>
#include "battle/BtlMainAccess.h"

namespace {
struct BattleActionDefinition {
    u8 unk00[0x60];
    u16 id;
    u16 skill;
    u8 unk64[7];
    u8 kind;
    u8 unk6C;
    u8 mode;
    u8 unk6E[0x12];
};
typedef char BattleActionDefinitionOffsetsCheck[sizeof(BattleActionDefinition) == 0x80 &&
    offsetof(BattleActionDefinition, skill) == 0x62 &&
    offsetof(BattleActionDefinition, kind) == 0x6B &&
    offsetof(BattleActionDefinition, mode) == 0x6D ? 1 : -1];
}

extern "C" {
BattleActionDefinition *dataTable08Sub1GetRecord(u16 id);
Table04Record *dataTable40FindById(u32 skillId);
s32 FUN_0033fe6c(s32 side, s32 mode, BattleActionDefinition *action, s32 enabled);
s32 FUN_0023d9b8(s32 side, s32 mode, Table04Record *skill);

// Dispatch supported table-eight actions and skill targets unless the battle suppresses them.
u32 FUN_0025043c(s32 side, u16 actionId)
{
    if (actionId == 0)
        return 1;
    BattleActionDefinition *action = dataTable08Sub1GetRecord(actionId);
    if (action == NULL)
        return 1;
    if ((action->mode != 2 && action->mode != 3) || action->kind != 1)
        return 2;
    if (action->skill != 0) {
        Table04Record *skill = dataTable40FindById(action->skill);
        if (skill == NULL)
            return 1;
        if (skill->effectProperties.mode != 2 && skill->effectProperties.mode != 3)
            return 2;
        switch (skill->sort.category) {
        case 0:
        case 1:
        case 2:
        case 5:
        case 6:
        case 10:
            break;
        default:
            if ((btlGetMainState()->editorControl.flags & 0x02000000) == 0) {
                if (skill->sort.category != 3) {
                    switch (skill->effectProperties.targeting) {
                    case 0:
                    case 1:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 8:
                        return 0;
                    }
                }
                u32 result = FUN_0023d9b8(side, 1, skill);
                if (result != 0)
                    result = 3;
                return result;
            }
        }
        return 0;
    }
    if ((btlGetMainState()->editorControl.flags & 0x02000000) != 0)
        return 0;
    u32 result = FUN_0033fe6c(side, 1, action, 1);
    if (result != 0)
        result = 3;
    return result;
}
}
