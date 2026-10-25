/* NON_MATCHING: the selection range's stack slots and loads differ; register allocation of the mask AND/ORR chain differs; u64 mask loads pair differently (ldm versus two ldr); the frame/saved-register set differs (the active-entry byte already folds with the s8 flag). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

struct BattleCountAction { s16 unk00, type, id, unk06; };
struct BattleCountActions {
    u8 unk000[0x328];
    BattleCountAction current;
    u8 unk330[8];
    BattleCountAction choices[10];
};
extern "C" {
s32 scrGetArg(u32);
s32 btlResolveEntryChoice(s32);
BtlMainStateA *btlGetMainState();
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *);
s32 FUN_003249c0(BtlCombatantEntryA *, s32);
void scrSetResult(s32);
}

static __inline s32 countMatchingActions(const BtlCombatantEntryA *entry, s32 skill)
{
    const BattleCountActions *actions = (const BattleCountActions *)entry;
    if ((entry->flags & g_btlCandidateMasks.unavailable) || (entry->flags & g_btlCandidateMasks.singleAction)) {
        return (actions->current.type == 2 || actions->current.type == 3) && actions->current.id == skill;
    }
    s32 count = 0;
    for (s32 i = 0; i < 10; ++i) {
        const BattleCountAction *action = &actions->choices[i];
        if ((action->type == 2 || action->type == 3) && action->id == skill)
            ++count;
    }
    return count;
}

extern "C" u32 scrCountBattleSkillActions()
{
    s32 skill = scrGetArg(0);
    s32 group = btlResolveEntryChoice(scrGetArg(1));
    s32 starts[12], counts[3];
    s32 total = 0;
    FUN_00301a08(group, starts, counts);
    for (s32 slot = starts[0]; slot < starts[0] + counts[0]; ++slot) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[slot];
        u64 flags = entry->flags;
        if (!(flags & g_btlCandidateMasks.unavailable) && (flags & g_btlCandidateMasks.required) &&
            !(flags & g_btlCandidateMasks.excluded)) {
            total += countMatchingActions(entry, skill);
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry)
            total += FUN_003249c0(entry, skill);
    }
    scrSetResult(total);
    return 1;
}
