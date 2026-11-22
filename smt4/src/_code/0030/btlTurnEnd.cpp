/* NON_MATCHING: 225 lines (79 by shape): the calls, tests, stores and callee-saved registers are retail's. Every flag
 * update goes through the 64-bit battleMask (retail's updates keep their temporaries in r1/r2 and reload the word
 * after the turn-pass test, the u64 sign); the 32-bit view at some sites scored better (110) but chose the view per
 * site by score, which the wave 76 review rejected. Left: retail's first state request (12, after the listed-action
 * test) has the value in r0 and the block in r1 with its own epilogue (it shares the others' store here, which shifts
 * every later branch target); the clear of 0x1002080 before FUN_003ae3cc uses r0 in retail; the turn-pass update is
 * scheduled after the counter address; the second loop's entry base is r1 in retail (r2 here). */
#include "battle/BtlGlobals.h"
#include "battle/BtlUiGlobal.h"
#include "battle/btlScript.h"
#include "code/Code0024_Smt4.h"
#include "ui/UiControl.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {

u32 btlListedActionsPending(BtlMainState *battle);
u32 btlRollAilmentChance(u32 id, s32 ailment);
u32 FUN_00246d38(s32 actor, u32 options, BtlActionRecord *target, u32 mask);
void btlUiRefreshSlotRanks(BtlUi *ui);
s32 btlAdjustPropertyClamped(s32 id, s32 stat, s32 delta, s32 preview);
void FUN_00255180(u32 id, s32 index, s32 value);
s32 mapCategoryToDestinationGroup(u32 category);
void btlClearEntryStatusModifiers(BtlMainState *battle, s32 mode);
void FUN_0033b100(BtlMainState *battle, s32 mode);
void FUN_003ae3cc(BtlUi *ui);
void FUN_003af0c4(BtlUi *ui, u32 value);
void FUN_003ddc44(u32 slot, u32 extra);
void FUN_003bef8c(void);
u32 btlSupportVoiceChoose(s32 category, u32 excludedVoice);
u16 questCurrentGetValue(void);

/* Asks the battle's main process for its next state. */
static __inline void btlRequestState(s32 state)
{
    BtlMainState *battle = g_btlMainState.state;
    if (battle != NULL)
        battle->core.nextState = state;
}

/* Whether the entry is a live unit of the side whose turn ends (battle flag 4: the second side's). */
static __inline bool btlEntryEndsTurn(BtlMainState *battle, BtlEntry *entry)
{
    if ((entry->flags & 1) == 0)
        return false;
    if ((entry->flags & 0x40) != 0)
        return false;
    if ((battle->battleFlags & 4) != 0) {
        if ((entry->flags & 0x10) == 0)
            return false;
    } else if ((entry->flags & 0x10) != 0) {
        return false;
    }
    return true;
}

/* The first live entry with flag 0x20 (the support unit), NULL when there is none. */
static __inline BtlEntry *btlFindSupportEntry(BtlMainState *battle)
{
    for (s32 i = 0; i < BTL_ENTRY_COUNT; i++) {
        u32 flags = battle->entries[i].flags;
        if ((flags & 0x20) != 0 && (flags & 1) != 0)
            return &battle->entries[i];
    }
    return NULL;
}

/* btlScriptUnitIsIncapacitated's body: whether the script's battle unit has flag 0x80 or 0x1000 set. */
static __inline s32 btlScriptUnitIncapacitated(void)
{
    BtlUnit *unit = btlUnitGet((BtlMainState *const *)g_btlScriptUnit);
    if (unit == NULL)
        return 0;
    if (unit->flags & 0x80)
        return 1;
    if (unit->flags & 0x1000)
        return 1;
    return 0;
}

/* Counts one more turn, stopping at 255. */
static __inline void btlTurnCounterAdd(u8 *counter)
{
    *counter = *counter + 1;
    *counter = *counter < 255 ? *counter : 255;
}

/* Ends a side's turn. While actions are still listed or the cursor moves, the main process is sent back to wait;
 * otherwise the ending side's units roll for recovery from their ailments (sleep, panic, bind and poison bits) and
 * count the ailments' turns, the support unit may comment, and the turn passes to the other side. */
void btlTurnEnd(BtlMainState *battle)
{
    if (btlListedActionsPending(battle) != 0) {
        btlRequestState(12);
        return;
    }
    battle->listedActions.count = 0;
    if (battle->turnEnd.waitCount > 0) {
        btlRequestState(8);
        return;
    }
    if (battle->menuCursor.stepsX > 0 || battle->menuCursor.stepsY > 0) {
        if ((battle->editorControl.flags & 0x10) == 0) {
            if ((battle->battleFlags & 0x80) == 0) {
                if ((battle->battleFlags & 0x1000000) == 0)
                    pickerAdvance(battle);
            }
        }
        btlUiRefreshSlotRanks(g_btlUiBlock);
        battle->battleMask &= ~0x1000080ULL;
        btlRequestState(12);
        return;
    }

    /* Roll each ailment's recovery and report the ones that end. */
    for (s32 i = 0; i < BTL_ENTRY_COUNT; i++) {
        BtlEntry *entry = &battle->entries[i];
        if (!btlEntryEndsTurn(battle, entry))
            continue;
        u32 recovered = 0;
        if ((entry->data.statusFlags & 0x80) != 0 && btlRollAilmentChance(i, 7) != 0)
            recovered = 0x80;
        if ((entry->data.statusFlags & 0x40) != 0 && btlRollAilmentChance(i, 6) != 0)
            recovered |= 0x40;
        if ((entry->data.statusFlags & 0x100) != 0 && btlRollAilmentChance(i, 8) != 0)
            recovered |= 0x100;
        if ((entry->data.statusFlags & 8) != 0 && btlRollAilmentChance(i, 3) != 0)
            recovered |= 8;
        if (recovered != 0 && entry->ids[0] >= 0)
            FUN_00246d38(0, 0, &battle->actions[entry->ids[0]], recovered);
    }

    /* Count a turn for each ailment the unit still has; the others start over. */
    for (s32 i = 0; i < BTL_ENTRY_COUNT; i++) {
        BtlEntry *entry = &battle->entries[i];
        if (!btlEntryEndsTurn(battle, entry))
            continue;
        s16 id = entry->ids[0];
        if ((entry->data.statusFlags & 0x80) != 0)
            btlAdjustPropertyClamped(id, 22, 1, 0);
        else
            FUN_00255180(id, 22, mapCategoryToDestinationGroup(22));
        if ((entry->data.statusFlags & 0x40) != 0)
            btlAdjustPropertyClamped(id, 23, 1, 0);
        else
            FUN_00255180(id, 23, mapCategoryToDestinationGroup(23));
        if ((entry->data.statusFlags & 0x100) != 0)
            btlAdjustPropertyClamped(id, 24, 1, 0);
        else
            FUN_00255180(id, 24, mapCategoryToDestinationGroup(24));
        if ((entry->data.statusFlags & 8) != 0)
            btlAdjustPropertyClamped(id, 25, 1, 0);
        else
            FUN_00255180(id, 25, mapCategoryToDestinationGroup(25));
    }

    /* The support unit's turn: its comment, then state 14 before the turn passes. */
    if (battle->supportTurn != 0 && (battle->editorControl.flags & 0x8000000) == 0) {
        if (btlFindSupportEntry(battle) == NULL) {
            battle->supportTurn = 0;
        } else if ((battle->battleFlags & 0x3004) == 0 && battle->commandEvent.event != 4) {
            if (FUN_00245c78() != 0 || (FUN_00245c78() == 0 && questCurrentGetValue() != 0))
                FUN_003af0c4(g_btlUiBlock, btlScriptUnitIncapacitated() ^ 1);
            if (FUN_00245c78() != 0) {
                if (!btlScriptUnitIncapacitated() && jyoucyuGetTableEntry(1) == 0 && FUN_00245c78() != 0 &&
                    !btlScriptUnitIncapacitated()) {
                    if (btlFindSupportEntry(battle) != NULL)
                        battle->pending = btlSupportVoiceChoose(1, battle->pending);
                }
            }
            battle->battleMask |= 0x1000ULL;
            btlRequestState(14);
            return;
        }
    }

    battle->battleMask &= ~0x1002080ULL;
    FUN_003ae3cc(g_btlUiBlock);
    if (battle->battleMask & 4) {
        battle->battleMask &= ~0x1004ULL;
        btlTurnCounterAdd(&battle->encounterControl.busyA);
        btlTurnCounterAdd(&battle->encounterControl.bonus);
        btlRequestState(17);
        btlClearEntryStatusModifiers(battle, 0);
        FUN_0033b100(battle, 1);
        FUN_003bef8c();
    } else {
        FUN_003ddc44(0, 0);
        battle->battleMask &= ~0x1000ULL;
        battle->battleMask |= 4;
        btlTurnCounterAdd(&battle->encounterControl.bonus);
        btlRequestState(17);
        btlClearEntryStatusModifiers(battle, 1);
        FUN_0033b100(battle, 0);
        FUN_003bef8c();
    }
}

} /* extern "C" */
