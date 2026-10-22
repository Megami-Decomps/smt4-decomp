/* NON_MATCHING: action mask loads, caller registers and Boolean constant scheduling differ; -O2 candidate. */
#include "battle/btlAction.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W4_W4Match6b_BtlUnitWork.h"

struct BattleUiOwner { BattleMaskState *battle; };
struct BattleUiContext {
    u8 unk00[0x20];
    BtlCombatantEntryA *entry;
    u32 unk24;
    BtlUnitWork *work;
    u8 unk2c[0x571];
    s8 mode;
};
struct BattleUiActionMasks {
    u8 unk00[0x18];
    u64 primaryA;
    u8 unk20[8];
    u64 primaryB, alternate, primaryC;
};
struct BattleUiQueryResult { u32 words[13]; };
struct BattleUiItem { u8 unk00[0x32]; u16 skill; };
struct BattleUiSkill {
    u8 unk00[0x28];
    struct { u32 lower : 5; u32 category : 4; u32 upper : 23; } kind;
};
extern "C" {
extern BtlActionGlobals g_btlAction;
extern void *g_btlAux;
const BattleUiItem *dataTable8FindRecord(s32);
const BattleUiSkill *dataTable04FindById(u32);
void FUN_003e8bb0(BattleUiQueryResult *, BattleMaskState *, BtlCombatantEntryA *);
void FUN_004f7724(void *, s32, u32, s32);
void FUN_004f7ea8(void *, s32, u32, s32);
void obj4FQueryPairB(void *, u32, u32, s32, u32);

void dispatchBattleCommandUiVariant(BattleUiOwner *owner, BattleUiContext *context)
{
    s32 mode = context->mode;
    s32 id = (s16)context->work->commandArg;
    context->mode = 0;
    s32 command = (s16)context->work->command;
    const BattleUiActionMasks *masks = (const BattleUiActionMasks *)&g_btlAction;
    if (command == 1) {
        bool allowed = !(context->entry->flags & (masks->primaryA | masks->primaryB | masks->primaryC));
        u16 first;
        u32 variant;
        {
            BattleUiQueryResult result;
            FUN_003e8bb0(&result, owner->battle, context->entry);
            first = result.words[0];
            FUN_003e8bb0(&result, owner->battle, context->entry);
            variant = (result.words[5] >> 8) & 0xff;
        }
        obj4FQueryPairB(g_btlAux, variant, allowed, mode, first);
        return;
    }
    if (command != 2 && command != 3 && command != 8)
        return;
    if (command == 8) {
        u16 skill = dataTable8FindRecord(id)->skill;
        if (!skill) {
            FUN_004f7724(g_btlAux, id, !(context->entry->flags & masks->alternate), mode);
            return;
        }
        id = skill;
    }
    u32 category = dataTable04FindById(id)->kind.category;
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
