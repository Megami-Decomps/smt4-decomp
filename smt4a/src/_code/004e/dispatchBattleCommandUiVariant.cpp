/* NON_MATCHING: 20 lines (120 vs 120 rows): only scratch register assignment in the command==1/8 mask tests and the load order of owner->battle vs context->entry before the second btlEntryBuildSummary call differ. */
#include "battle/btlAction.h"
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/ConsumableRecordA.h"
#include "battle/BtlGlobals.h"

struct BattleUiOwner { BtlMainStateA *battle; };
struct BattleUiActionMasks {
    u8 unk00[0x18];
    u64 primaryA;
    u8 unk20[8];
    u64 primaryB, alternate, primaryC;
};
struct BattleUiQueryResult { u32 words[13]; };
extern "C" {
extern void *g_btlAux;
void btlEntryBuildSummary(BattleUiQueryResult *, BtlMainStateA *, BtlCombatantEntryA *);
void FUN_004f7724(void *, s32, u32, s32);
void FUN_004f7ea8(void *, s32, u32, s32);
void obj4FQueryPairB(void *, u32, u32, s32, u32);

static __inline bool hasAnyMask(const BtlCombatantEntryA *entry, u64 mask)
{
    return (entry->flags & mask) != 0;
}

void dispatchBattleCommandUiVariant(BattleUiOwner *owner, BtlUnitA *context)
{
    s32 mode = context->uiMode;
    s32 id = context->data->actionArg;
    context->uiMode = 0;
    s32 command = context->data->actionKind;
    bool allowed = true;
    bool alternateAllowed = true;
    if (command == 1) {
        if (hasAnyMask(context->entry, ((const BattleUiActionMasks *)&g_btlAction)->primaryA |
                                       ((const BattleUiActionMasks *)&g_btlAction)->primaryB |
                                       ((const BattleUiActionMasks *)&g_btlAction)->primaryC)) {
            allowed = false;
        }
        u16 first;
        u32 variant;
        {
            BattleUiQueryResult result;
            btlEntryBuildSummary(&result, owner->battle, context->entry);
            first = result.words[0];
            btlEntryBuildSummary(&result, owner->battle, context->entry);
            variant = (result.words[5] >> 8) & 0xff;
        }
        obj4FQueryPairB(g_btlAux, variant, allowed, mode, first);
        return;
    }
    if (command != 2 && command != 3 && command != 8) {
        return;
    }
    if (command == 8) {
        u16 skill = itemTableGetItemRecord(id)->skillId;
        if (!skill) {
            if (hasAnyMask(context->entry, ((const BattleUiActionMasks *)&g_btlAction)->alternate)) {
                allowed = false;
            }
            FUN_004f7724(g_btlAux, id, allowed, mode);
            return;
        }
        id = skill;
    }
    u32 category = skillDataFindById(id)->itemProperties.category;
    if (category == 2 || category == 3 || category == 4) {
        alternateAllowed = false;
    }
    if (hasAnyMask(context->entry, ((const BattleUiActionMasks *)&g_btlAction)->primaryA |
                                   ((const BattleUiActionMasks *)&g_btlAction)->primaryB |
                                   ((const BattleUiActionMasks *)&g_btlAction)->primaryC)) {
        allowed = !alternateAllowed;
    } else if (hasAnyMask(context->entry, ((const BattleUiActionMasks *)&g_btlAction)->alternate)) {
        allowed = alternateAllowed;
    }
    FUN_004f7ea8(g_btlAux, id, allowed, mode);
}
}
