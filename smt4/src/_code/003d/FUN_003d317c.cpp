/* NON_MATCHING: typed rewrite of the command start step (497 vs 489 rows); the block/work/entry register numbering is shifted (retail keeps r5/r6, scratch r4) and retail addresses the UI scene word through a literal offset register. */
#include "battle/BattleCommandController.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlAction.h"
#include "battle/ActionStateChannels.h"
#include "AsdSDK/AsdMemUtil.h"

/* Battle state fields this step clears, beyond the shared prefix. */
struct CommandStartView {
    /* 0x0000 */ u8 unk0000[0x2258];
    /* 0x2258 */ u16 unk2258;
    /* 0x225a */ s16 checkId;
    /* 0x225c */ u32 unk225c;
    /* 0x2260 */ u32 unk2260;
    /* 0x2264 */ u32 unk2264;
    /* 0x2268 */ u8 unk2268[0xC9C];
    /* 0x2f04 */ u8 unk2f04;
    /* 0x2f05 */ u8 unk2f05[0x159B];
    /* 0x44a0 */ u64 flags64;
    /* 0x44a8 */ u8 unk44a8[0x520];
    /* 0x49c8 */ s32 retreating;
};

/* The battle UI block: the scene transition state word at 0x7e38. */
struct CommandStartUi {
    /* 0x0000 */ u8 unk0000[0x7e38];
    /* 0x7e38 */ u32 sceneState;
};

/* The talk/camera object: the unit being talked to at 0x760. */
struct CommandStartTalk {
    /* 0x000 */ u8 unk000[0x760];
    /* 0x760 */ s32 unitIndex;
};

typedef char CommandStartViewOffsets[
    offsetof(CommandStartView, checkId) == 0x225a &&
    offsetof(CommandStartView, unk2f04) == 0x2f04 &&
    offsetof(CommandStartView, flags64) == 0x44a0 &&
    offsetof(CommandStartView, retreating) == 0x49c8 &&
    offsetof(CommandStartUi, sceneState) == 0x7e38 &&
    offsetof(CommandStartTalk, unitIndex) == 0x760 ? 1 : -1];

extern "C" {
extern BtlActionGlobals g_btlAction;
extern void *g_btlMain;
extern u32 g_btlUiBlock;
extern void *DAT_00435d18;

void FUN_00250720(BtlMainState *state);
u16 FUN_00245cc0(s32 kind);
void memClearTwo200(void *object);
s32 FUN_00293230(BtlMainState *state);
s32 btlUiIsSceneTransitionReady(u32 ui);
s32 btlSceneIsReady(u32 ui);
void FUN_0026beb4(s32 chance, CommandState *work, s32 a, BtlActionRecord *record, s32 b);
void FUN_00229a24(void);
s32 FUN_00256940(void *main, BtlMainState *state, u32 flag);
void btlReflectQueueKind34(s32 a, CommandState *work);
void btlReflectCreateKind18(s32 a, CommandState *work, s32 kind, s32 b, s32 c);
s32 FUN_00245c78(void);
s32 FUN_00245d0c(s32 unit, s32 kind);
void FUN_00246d38(s32 a, s32 b, BtlActionRecord *record, u32 mask);
void FUN_00255180(s32 unit, s32 kind, s32 value);
void FUN_003c0484(BtlEntry *entry, u32 mask, s32 context);
void FUN_002569ac(BtlMainState **block, s32 bank);
void btlEntryValuesCopy(BtlMainState **block, CommandState *work);
void btlAdjustPropertyClamped(s32 id, s32 stat, s32 delta, s32 preview);
s32 btlClearActionMarksAndSelectTarget(BtlMainState **block, CommandState *work, s32 target);
void FUN_00229b10(BtlMainState **block, CommandState *work);

/* Sets the acting combatant's pending action. */
static __inline void setPendingAction(BtlMainState **block, u8 pending)
{
    static_cast<ActionStateChannels *>(g_btlAction.data)->entries[(*block)->actionState.index].pending = pending;
}

u32 FUN_003d317c(BtlMainState **block, CommandState *work)
{
    reinterpret_cast<CommandStartView *>(*block)->unk225c = 0;
    reinterpret_cast<CommandStartView *>(*block)->unk2260 = 0;
    reinterpret_cast<CommandStartView *>(*block)->unk2264 = 0;
    reinterpret_cast<CommandStartView *>(*block)->unk2258 = 0;
    reinterpret_cast<CommandStartView *>(*block)->checkId = 0;
    (*block)->effectValue = 0;
    (*block)->affinity.minimumPercentApplied = 0;
    work->targetIndex = -1;
    reinterpret_cast<CommandStartView *>(*block)->unk2f04 = 0;
    (*block)->pendingAction = 0;
    (*block)->secondaryPendingAction = 0;
    (*block)->spriteFlags &= ~2u;
    (*block)->core.firstBonus = -1;
    (*block)->core.secondBonus = -1;
    FUN_00250720(*block);
    for (s32 index = 0; index < 109; ++index) {
        BtlEntry *entry = &(*block)->entries[index];
        CommandEntryView *words = reinterpret_cast<CommandEntryView *>(entry);
        entry->stat[2] = FUN_00245cc0(2);
        u32 flags = words->flags;
        flags &= ~0x60000000u;
        words->flags = flags;
        flags &= ~0x80000000u;
        words->flags = flags;
        words->flagsHigh = 0;
        words->unk0c8 = 0;
    }
    memClearTwo200(DAT_00435d18);
    work->selection->kind = 0;
    work->selection->value = 0;
    reinterpret_cast<CommandEntryView *>(work->entry)->command = 0;
    work->trailer = 0;
    for (s32 index = 0; index < 109; ++index) {
        EntryDataBlock *data = reinterpret_cast<EntryDataBlock *>(
            reinterpret_cast<u8 *>(&(*block)->entries[index]) + 0xcc);
        data->firstCounter = 0;
        data->secondCounter = 0;
    }
    if (((*block)->battleFlags & 0x40) != 0) {
        work->flags |= 0x80;
    } else if (((*block)->battleFlags & 0x100) != 0) {
        work->flags |= 0x1000;
    }
    if (FUN_00293230(*block) != 0 && btlUiIsSceneTransitionReady(g_btlUiBlock) == 0)
        return 0;

    if (((*block)->battleFlags & 0x20000) != 0) {
        if (btlSceneIsReady(g_btlUiBlock) == 0)
            return 0;
        FUN_0026beb4(0, work, 15, work->record, 1);
        reinterpret_cast<CommandStartView *>(*block)->flags64 |= 0x2000;
        reinterpret_cast<CommandStartView *>(*block)->flags64 &= ~0x20000ull;
        reinterpret_cast<CommandStartUi *>(g_btlUiBlock)->sceneState = 0;
        FUN_00229a24();
        setPendingAction(block, 29);
        return 1;
    }

    if (work->mode == 1) {
        work->selection->kind = 7;
        work->selection->value = 8;
        work->itemSlot = 0;
        memClear(work->targetMarks, sizeof(work->targetMarks));
        btlClearActionMarksAndSelectTarget(block, work, work->target);
        reinterpret_cast<CommandStartView *>(*block)->checkId = (*block)->entries[work->target].members.ids[0];
        setPendingAction(block, 11);
        return 1;
    }
    if (work->mode == 4) {
        if ((work->entry->flags & 1) == 0) {
            (*block)->battleFlags |= 0x1000000;
            setPendingAction(block, 35);
            return 1;
        }
        work->selection->kind = 1;
        reinterpret_cast<CommandEntryView *>(work->entry)->command = work->commandValue;
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
        reinterpret_cast<CommandStartTalk *>(g_btlMain)->unitIndex = unit;
    }
    if (reinterpret_cast<CommandStartTalk *>(g_btlMain)->unitIndex != (*block)->resolution.kind &&
        reinterpret_cast<CommandStartTalk *>(g_btlMain)->unitIndex >= 0 &&
        FUN_00256940(g_btlMain, *block, 1) != 0) {
        btlReflectQueueKind34(0, work);
    }
    btlReflectCreateKind18(1, work, (*block)->resolution.kind, 1, 1);
    if ((work->entry->flags & 0x20) == 0 || FUN_00245c78() != 0) {
        u32 responses = 0;
        s32 unitId = work->record->memberId;
        if ((work->selection->responseFlags & 0x80) != 0 && FUN_00245d0c(unitId, 7) != 0)
            responses = 0x80;
        if ((work->selection->responseFlags & 0x40) != 0 && FUN_00245d0c(unitId, 6) != 0)
            responses |= 0x40;
        if ((work->selection->responseFlags & 0x100) != 0 && FUN_00245d0c(unitId, 8) != 0)
            responses |= 0x100;
        if ((work->selection->responseFlags & 8) != 0 && FUN_00245d0c(unitId, 3) != 0)
            responses |= 8;
        if (responses != 0)
            FUN_00246d38(0, 0, work->record, responses);
        if ((work->selection->responseFlags & 0x80) == 0)
            FUN_00255180(unitId, 22, FUN_00245cc0(22));
        if ((work->selection->responseFlags & 0x40) == 0)
            FUN_00255180(unitId, 23, FUN_00245cc0(23));
        if ((work->selection->responseFlags & 0x100) == 0)
            FUN_00255180(unitId, 24, FUN_00245cc0(24));
        if ((work->selection->responseFlags & 8) == 0)
            FUN_00255180(unitId, 25, FUN_00245cc0(25));
        if ((work->selection->responseFlags & ~responses & 0x1c0) == 0 && (work->entry->flags & 0x60000) == 0) {
            FUN_003c0484(work->entry, responses, 1);
            if ((work->entry->flags & 0x30) != 0)
                setPendingAction(block, reinterpret_cast<CommandStartView *>(*block)->retreating == 0 ? 2 : 3);
            else
                setPendingAction(block, 1);
            return 1;
        }
        setPendingAction(block, 4);
        return 1;
    }
    FUN_002569ac(block, (*block)->actionState.index);
    btlEntryValuesCopy(block, work);
    btlAdjustPropertyClamped(work->record->memberId, 29, 1, 0);
    setPendingAction(block, 29);
    return 1;
}
}
