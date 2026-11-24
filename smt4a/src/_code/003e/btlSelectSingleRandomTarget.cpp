/* NON_MATCHING: 52 lines (126 vs 126 rows): loop 1, clearActionParameters, battleSortTurnOrder, and final selection match; retail predicates the <= 0 stores with ble to the shared epilogue and loads both loop-2 masks with ldm. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "util/Random.h"
#include "battle/BtlGlobals.h"

struct RandomTargetFields {
    u8 unk000[0x6e];
    u16 identifier;
    u8 unk070[0xf4];
    struct SubData {
        u8 unk000[0x1ce];
        u16 actionParameters[4]; /* 0x332 - 0x164 = 0x1ce */
        u8 unk1d6[0x56];
        u16 targetMarker; /* 0x390 - 0x164 = 0x22c */
    } sub;
};

/* Clears the four action-parameter halfwords inside the +0x164 combatant subobject (matches clearTwoWords at +0x1ce in btlEntryApplyOptionOverrides and btlMainLeaveFixedParty). */
static __inline void clearActionParameters(RandomTargetFields::SubData *sub)
{
    if (sub != NULL) {
        sub->actionParameters[0] = 0;
        sub->actionParameters[1] = 0;
        sub->actionParameters[2] = 0;
        sub->actionParameters[3] = 0;
    }
}

extern "C" {
void battleSortTurnOrder(BtlMainStateA *, u32);

void btlSelectSingleRandomTarget(BtlMainStateA *battle)
{
    s32 count = 0;
    s32 slot;
    for (slot = 0; slot < 109; ++slot) {
        BtlCombatantEntryA *unit = &battle->entries[slot];
        if ((unit->flags & g_btlMain.combatantMasks.required) && !(unit->flags & g_btlMain.exclusionMask) &&
            ((RandomTargetFields *)unit)->sub.actionParameters[1] && !hasAnyOf3DC2(unit->data.statusFlags)) {
            battle->turnOrder.indices[count++] = ((RandomTargetFields *)&battle->entries[slot])->identifier;
            ((RandomTargetFields *)&battle->entries[slot])->sub.targetMarker = 0;
        }
    }
    if (count <= 0) {
        battle->turnOrder.position = -1;
        battle->commandEntry.selection = -1;
    } else {
        battle->turnOrder.position = 0;
        s32 selectedIndex = lcgRandomRange((u16)(count - 1));
        s16 selected = battle->turnOrder.indices[selectedIndex];
        for (s32 i = 0; i < 12; ++i)
            battle->turnOrder.indices[i] = -1;
        battle->turnOrder.indices[0] = selected;
        u64 active = g_btlMain.combatantMasks.required;
        u64 excluded = g_btlMain.exclusionMask;
        for (slot = 0; slot < 109; ++slot) {
            BtlCombatantEntryA *unit = &battle->entries[slot];
            if ((unit->flags & active) && !(unit->flags & excluded) &&
                ((RandomTargetFields *)unit)->sub.actionParameters[1] && (s16)((RandomTargetFields *)unit)->identifier != selected) {
                clearActionParameters(&((RandomTargetFields *)unit)->sub);
            }
        }
        battleSortTurnOrder(battle, 0);
        battle->commandEntry.selection = battle->turnOrder.indices[battle->turnOrder.position];
    }
}
}
