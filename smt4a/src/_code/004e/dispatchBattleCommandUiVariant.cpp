/* NON_MATCHING: action mask loads, caller registers and Boolean constant scheduling differ; -O2 candidate. */
#include "battle/btlAction.h"
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/Table04Record.h"
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

void dispatchBattleCommandUiVariant(BattleUiOwner *owner, BtlUnitA *context)
{
    s32 mode = context->uiMode;
    s32 id = context->data->actionArg;
    context->uiMode = 0;
    s32 command = context->data->actionKind;
    const BattleUiActionMasks *masks = (const BattleUiActionMasks *)&g_btlAction;
    if (command == 1) {
        bool allowed = !(context->entry->flags & (masks->primaryA | masks->primaryB | masks->primaryC));
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
    if (command != 2 && command != 3 && command != 8)
        return;
    if (command == 8) {
        u16 skill = dataTable8FindRecord(id)->skillId;
        if (!skill) {
            FUN_004f7724(g_btlAux, id, !(context->entry->flags & masks->alternate), mode);
            return;
        }
        id = skill;
    }
    u32 category = dataTable04FindById(id)->itemProperties.category;
    bool alternateAllowed = true;
    if (category == 2 || category == 3 || category == 4)
        alternateAllowed = false;
    bool allowed = true;
    if (context->entry->flags & (masks->primaryA | masks->primaryB | masks->primaryC))
        allowed = !alternateAllowed;
    else if (context->entry->flags & masks->alternate)
        allowed = alternateAllowed;
    FUN_004f7ea8(g_btlAux, id, allowed, mode);
}
}
