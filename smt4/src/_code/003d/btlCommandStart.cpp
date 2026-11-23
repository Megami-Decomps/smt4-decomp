/* NON_MATCHING: 324 lines (266 by shape); the same calls, saved registers and block order as retail (496 rows
 * against 498). What differs:
 * - retail keeps the UI block's address in r4 and the constant 29 in r7 (r7 and r4 here), and materialises the
 *   64-bit zero's low word before the -1 at entry;
 * - retail's only `mov r0, #1; pop` is the one after mode 4's refused-entry block; the build keeps mode 1's copy
 *   (writing mode 4 with the accepted entry first scores 284 lines, but retail has the refused-entry block
 *   where this form puts it, after the accepted path's branch to the exit);
 * - retail loads the slots pointer before the acting index at every command store, the build at some of them. */
#include "battle/BattleCommandController.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlAction.h"
#include "battle/BtlUnitWork.h"
#include "AsdSDK/AsdMemUtil.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlUiGlobal.h"
#include "battle/btlHelp.h"

/* Battle state fields this step touches that the shared BtlMainState does not name yet. */
struct CommandStartView {
    /* 0x0000 */ u8 unk0000[0x2258];
    /* 0x2258 */ u16 unk2258;
    /* 0x225a */ u8 unk225a[0xCAA];
    /* 0x2f04 */ u8 unk2f04;
    /* 0x2f05 */ u8 unk2f05[0x1AC3];
    /* 0x49c8 */ s32 retreating;
};

typedef char CommandStartViewOffsets[
    offsetof(CommandStartView, unk2258) == 0x2258 &&
    offsetof(CommandStartView, unk2f04) == 0x2f04 &&
    offsetof(CommandStartView, retreating) == 0x49c8 ? 1 : -1];

extern "C" {
extern void *g_btlAux;

void btlSlotManagerResetAll(BtlMainState *state);
u16 mapCategoryToDestinationGroup(s32 kind);
void memClearTwo200(void *object);
s32 btlScriptUnitIsIncapacitated(BtlMainState *state);
s32 btlUiIsSceneTransitionReady(BtlUi *ui);
s32 btlSceneIsReady(BtlUi *ui);
void btlMenuCursorStepReflectAction(s32 chance, CommandState *work, s32 a, BtlActionRecord *record, s32 b);
s32 FUN_00256940(void *main, BtlMainState *state, u32 flag);
void btlReflectQueueKind34(s32 a, CommandState *work);
void btlReflectCreateKind18(s32 a, CommandState *work, s32 kind, s32 b, s32 c);
s32 FUN_00245c78(void);
s32 btlRollAilmentChance(s32 unit, s32 kind);
void FUN_00246d38(s32 a, s32 b, BtlActionRecord *record, u32 mask);
void FUN_00255180(s32 unit, s32 kind, s32 value);
void FUN_003c0484(BtlEntry *entry, u32 mask, s32 context);
void FUN_002569ac(BtlMainState **block, s32 bank);
void btlEntryValuesCopy(BtlMainState **block, CommandState *work);
void btlAdjustPropertyClamped(s32 id, s32 stat, s32 delta, s32 preview);
s32 btlClearActionMarksAndSelectTarget(BtlMainState **block, CommandState *work, s32 target);
void FUN_00229b10(BtlMainState **block, CommandState *work);

/* Sets the acting combatant's pending action. */
static __inline void setPendingAction(BtlMainState **block, s32 pending)
{
    BtlActionSlot *slot = &g_btlAction.slots[(*block)->actionState.index];
    slot->unit.command = pending;
}

u32 btlCommandStart(BtlMainState **block, CommandState *work)
{
    (*block)->commandEvent.mode = 0;
    (*block)->commandEvent.event = 0;
    (*block)->commandEvent.targetMode = 0;
    reinterpret_cast<CommandStartView *>(*block)->unk2258 = 0;
    (*block)->playerCheck.checkId = 0;
    (*block)->effectValue = 0;
    (*block)->affinity.minimumPercentApplied = 0;
    work->targetIndex = -1;
    reinterpret_cast<CommandStartView *>(*block)->unk2f04 = 0;
    (*block)->pendingAction = 0;
    (*block)->secondaryPendingAction = 0;
    (*block)->battleMask &= ~(2ULL << 32);
    (*block)->core.firstBonus = -1;
    (*block)->core.secondBonus = -1;
    btlSlotManagerResetAll(*block);
    for (s32 index = 0; index < 109; ++index) {
        BtlEntry *entry = &(*block)->entries[index];
        entry->stat[2] = mapCategoryToDestinationGroup(2);
        entry->flagMask &= ~0x60000000;
        /* The unsigned literal also clears the mask's high word. */
        entry->flagMask &= ~0x80000000;
        entry->unk0C8 = 0;
    }
    memClearTwo200(g_btlAux);
    work->selection->kind = 0;
    work->selection->value = 0;
    work->entry->modifierFlags = 0;
    work->trailer = 0;
    for (s32 index = 0; index < 109; ++index) {
        BtlUnitData *data = &(*block)->entries[index].data;
        data->primaryFlags = 0;
        data->alternateFlags = 0;
    }
    if (((*block)->battleMask & 0x40) != 0) {
        work->flags |= 0x80;
    } else if (((*block)->battleMask & 0x100) != 0) {
        work->flags |= 0x1000;
    }
    if (btlScriptUnitIsIncapacitated(*block) != 0 && btlUiIsSceneTransitionReady(g_btlUiBlock) == 0)
        return 0;

    if (((*block)->battleMask & 0x20000) != 0) {
        if (btlSceneIsReady(g_btlUiBlock) == 0)
            return 0;
        btlMenuCursorStepReflectAction(0, work, 15, work->record, 1);
        (*block)->battleMask |= 0x2000;
        (*block)->battleMask &= ~0x20000ull;
        g_btlUiBlock->panelState.state = 0;
        FUN_00229a24(g_btlUiBlock);
        setPendingAction(block, 29);
        return 1;
    }

    if (work->mode == 1) {
        work->selection->kind = 7;
        work->selection->value = 8;
        work->itemSlot = 0;
        memClear(work->targetMarks, sizeof(work->targetMarks));
        btlClearActionMarksAndSelectTarget(block, work, work->target);
        (*block)->playerCheck.checkId = (*block)->entries[work->target].ids[0];
        setPendingAction(block, 11);
        return 1;
    }
    if (work->mode == 4) {
        if ((work->entry->flags & 1) == 0) {
            (*block)->battleMask |= 0x1000000;
            setPendingAction(block, 35);
            return 1;
        }
        work->selection->kind = 1;
        work->entry->modifierFlags = work->commandValue;
        if ((work->entry->flags & 6) != 0)
            work->selection->value = 1;
        else
            work->selection->value = 0;
        memClear(work->targetMarks, sizeof(work->targetMarks));
        if (btlClearActionMarksAndSelectTarget(block, work, work->target) != 0) {
            work->flags |= 0x204;
            FUN_00229b10(block, work);
            return 1;
        }
        setPendingAction(block, 35);
        return 1;
    }
    if (work->mode == 5) {
        setPendingAction(block, 28);
        return 1;
    }

    if (FUN_00256940(g_btlMain, *block, 1) != 0) {
        s32 unit = -1;
        s32 kind = (*block)->resolution.kind;
        if (kind == 0)
            unit = 1;
        else if (kind == 1)
            unit = 2;
        else if (kind == 2)
            unit = 3;
        else if (kind == 3)
            unit = 4;
        g_btlMain->unk760 = unit;
    }
    if (g_btlMain->unk760 != (*block)->resolution.kind &&
        g_btlMain->unk760 >= 0 &&
        FUN_00256940(g_btlMain, *block, 1) != 0) {
        btlReflectQueueKind34(0, work);
    }
    btlReflectCreateKind18(1, work, (*block)->resolution.kind, 1, 1);
    if ((work->entry->flags & 0x20) != 0 && FUN_00245c78() == 0) {
        FUN_002569ac(block, (*block)->actionState.index);
        btlEntryValuesCopy(block, work);
        btlAdjustPropertyClamped(work->record->memberId, 29, 1, 0);
        setPendingAction(block, 29);
        return 1;
    }
    u32 responses = 0;
    s32 unitId = work->record->memberId;
    if ((work->selection->responseFlags & 0x80) != 0 && btlRollAilmentChance(unitId, 7) != 0)
        responses = 0x80;
    if ((work->selection->responseFlags & 0x40) != 0 && btlRollAilmentChance(unitId, 6) != 0)
        responses |= 0x40;
    if ((work->selection->responseFlags & 0x100) != 0 && btlRollAilmentChance(unitId, 8) != 0)
        responses |= 0x100;
    if ((work->selection->responseFlags & 8) != 0 && btlRollAilmentChance(unitId, 3) != 0)
        responses |= 8;
    if (responses != 0)
        FUN_00246d38(0, 0, work->record, responses);
    if ((work->selection->responseFlags & 0x80) == 0)
        FUN_00255180(unitId, 22, mapCategoryToDestinationGroup(22));
    if ((work->selection->responseFlags & 0x40) == 0)
        FUN_00255180(unitId, 23, mapCategoryToDestinationGroup(23));
    if ((work->selection->responseFlags & 0x100) == 0)
        FUN_00255180(unitId, 24, mapCategoryToDestinationGroup(24));
    if ((work->selection->responseFlags & 8) == 0)
        FUN_00255180(unitId, 25, mapCategoryToDestinationGroup(25));
    if ((work->selection->responseFlags & ~responses & 0x1c0) != 0 || (work->entry->flags & 0x60000) != 0) {
        setPendingAction(block, 4);
        return 1;
    }
    FUN_003c0484(work->entry, responses, 1);
    if ((work->entry->flags & 0x30) != 0)
        setPendingAction(block, reinterpret_cast<CommandStartView *>(*block)->retreating == 0 ? 2 : 3);
    else
        setPendingAction(block, 1);
    return 1;
}
}
