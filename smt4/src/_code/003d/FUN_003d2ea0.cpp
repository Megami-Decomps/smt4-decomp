#include "common.h"
#include "battle/btlHelp.h"
#include "battle/BattleCommandController.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlAction.h"
#include "battle/ActionStateChannels.h"

/* The battle state's retreat flag word, beyond the shared prefix. */
struct CommandRetreatView {
    /* 0x0000 */ u8 unk0000[0x49c8];
    /* 0x49c8 */ s32 retreating;
};

extern "C" {
extern BtlActionGlobals g_btlAction;
extern void *g_btlUiBlock;

void FUN_002569ac(BtlMainState **turn, s32 bank);
void btlEntryValuesCopy(BtlMainState **turn, CommandState *work);
void FUN_00227b14(void *ui, u16 member, s32 mode);
void FUN_0022a5d8(s32 effect, BtlEntry *entry, s32 mode);
void FUN_0026beb4(s32 chance, CommandState *work, s32 a, BtlActionRecord *record, s32 b);
void frameRangeExtend(BtlMainState **turn, CommandState *work, s32 id, s32 a, s32 b, s32 c);
void btlAdjustPropertyClamped(s32 id, s32 stat, s32 delta, s32 preview);
s32 randRange(s32 range);
void FUN_003c0484(BtlEntry *entry, s32 conditions, s32 context);

/* Starts the action of a combatant whose turn came: picks the response its pending flags call for. */
u32 FUN_003d2ea0(BtlMainState **turn, CommandState *work)
{
    FUN_002569ac(turn, (*turn)->actionState.index);
    btlEntryValuesCopy(turn, work);
    u16 pending = work->selection->responseFlags;
    s32 chance = 0;
    if ((work->flags & 0x1080) == 0) {
        chance = 0x32;
    }
    s32 effect = 0;
    if (pending & 0x80) {
        if ((work->entry->flags & 0x30) == 0) {
            FUN_00227b14(g_btlUiBlock, work->windowId, 0);
        }
        effect = 0xb;
    } else if (pending & 0x100) {
        if ((work->entry->flags & 0x30) == 0) {
            FUN_00227b14(g_btlUiBlock, work->windowId, 0);
        }
        effect = 0xc;
    } else if (work->entry->flags & 0x60000) {
        if ((work->entry->flags & 0x30) == 0) {
            FUN_00227b14(g_btlUiBlock, work->windowId, 0);
        }
        s32 value = battleGetEntryHalfword(work->record->memberId, 0x15);
        if (work->entry->flags & 0x20000) {
            effect = 0xd;
        } else {
            effect = value == 2 ? 0xe : 0xf;
        }
    }
    if (effect != 0) {
        FUN_0022a5d8(effect, work->entry, 1);
        FUN_0026beb4(chance, work, 0, work->record, 1);
        frameRangeExtend(turn, work, work->record->memberId, 0, 0x1e, 0x1e);
        static_cast<ActionStateChannels *>(g_btlAction.data)->entries[(*turn)->actionState.index].pending = 0x1b;
    } else {
        if ((pending & 0x40) == 0) {
            return 1;
        }
        s32 roll = randRange(99);
        if (((*turn)->battleFlags & 0x40000) == 0 && roll < 0x32) {
            FUN_003c0484(work->entry, 0, 1);
            if (work->entry->flags & 0x30) {
                static_cast<ActionStateChannels *>(g_btlAction.data)->entries[(*turn)->actionState.index].pending = reinterpret_cast<CommandRetreatView *>(*turn)->retreating == 0 ? 2 : 3;
            } else {
                static_cast<ActionStateChannels *>(g_btlAction.data)->entries[(*turn)->actionState.index].pending = 1;
            }
        } else {
            static_cast<ActionStateChannels *>(g_btlAction.data)->entries[(*turn)->actionState.index].pending = 0x11;
        }
    }
    if (work->entry->flags & 0x60000) {
        btlAdjustPropertyClamped(work->record->memberId, 0x15, -1, 0);
        if (battleGetEntryHalfword(work->record->memberId, 0x15) == 0) {
            CommandEntryView *entry = reinterpret_cast<CommandEntryView *>(work->entry);
            u32 flags = entry->flags;
            entry->flags = flags & 0xfffdffff;
            reinterpret_cast<CommandEntryView *>(work->entry)->flagsHigh = entry->flagsHigh;
            work->entry->flags = flags & 0xfff9ffff;
        }
    }
    return 1;
}
}
