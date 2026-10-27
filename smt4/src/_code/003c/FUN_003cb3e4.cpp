/* NON_MATCHING: typed rewrite of the command turn-end step (509 vs 485 rows); armcc compiles the available-unit scans with a predicated flag and duplicates the slot-flag stores that retail shares, and places the party-wipe early return differently. */
#include "battle/BattleCommandController.h"
#include "battle/BtlMainAccess.h"
#include "battle/BattleHelpers_Smt4.h"
#include "battle/btlAction.h"
#include "battle/ActionStateChannels.h"

extern "C" {
extern BtlActionGlobals g_btlAction;
extern u32 g_btlActionReflect;

s32 nodeListCountActiveById(u32 id);
s32 FUN_00229914(BtlMainState **block, CommandState *work, s32 index);
s32 btlNodeListAnyReady(void);
void FUN_0023f4e4(BtlMainState *state);
void FUN_003de758(s32 a, CommandState *work, s32 b);
void FUN_0027e5e4(BtlActionRecord *action);
void FUN_00250720(BtlMainState *state);
void FUN_003cefe0(BtlMainState **block, CommandState *work, u32 command);
void FUN_00246d38(s32 a, CommandState *work, BtlActionRecord *record, u32 mask);
void FUN_00246e24(s32 a, CommandState *work, BtlActionRecord *record, u32 mask, s32 b);
void FUN_0022a5d8(s32 effect, BtlEntry *entry, s32 mode);
void FUN_003c05e8(s32 value);
void FUN_00229a3c(s32 a, CommandState *work, s32 b, s32 c, s32 d);
s32 randRange(s32 range);
s32 FUN_003cfe14(BtlMainState **block, CommandState *work, s32 value);
void FUN_00246454(s32 a, CommandState *work, BtlEntry *entry);
BtlEntry *btlMainFindActiveEntry(BtlMainState *state);
s32 battleGetEntryHalfword(s32 id, s32 kind);
s32 questGetCurrentRecordValue6(void);
s32 questGetCurrentRecordValue8(void);
s32 questCurrentGetValue(void);
u32 questRecordValueIfState2(void);
u16 FUN_00245cc0(s32 kind);
void FUN_00255180(s32 unit, s32 kind, s32 value);
void FUN_003d03f8(BtlMainState **block, CommandState *work, s32 value, s32 kind, BtlActionRecord *record, BtlEntry *entry);
s32 FUN_003c8880(void);
void btlReflectCreateKind10(s32 a, CommandState *work, s32 value, s32 b);
void FUN_00229754(BtlMainState **block, CommandState *work);

/* Sets the acting combatant's pending action. */
static __inline void setPendingAction(BtlMainState **block, u8 pending)
{
    static_cast<ActionStateChannels *>(g_btlAction.data)->entries[(*block)->actionState.index].pending = pending;
}

static __inline EntryDataBlock *entryData(BtlEntry *entry)
{
    return reinterpret_cast<EntryDataBlock *>(reinterpret_cast<u8 *>(entry) + 0xcc);
}

u32 FUN_003cb3e4(BtlMainState **block, CommandState *work)
{
    if (nodeListCountActiveById(g_btlActionReflect) > 0)
        return 0;
    if ((work->flags & 0x1080) == 0) {
        for (s32 index = 0; index < 109; ++index) {
            if (((*block)->actions[index].status & 1) != 0 && FUN_00229914(block, work, index) == 0) {
                BtlEntry *entry = btlMainFindEntryByListedId(reinterpret_cast<SlotManager *>(*block), index);
                EntryDataBlock *data = entryData(entry);
                if (data->firstCounter != 0 && data->groupMask == 0) {
                    if ((*block)->affinity.minimumPercentApplied != 0 && btlNodeListAnyReady() != 0)
                        return 0;
                    break;
                }
            }
        }
    }

    bool handled = false;
    u32 command = 0;
    FUN_0023f4e4(*block);
    FUN_003de758(0, work, 5);
    for (s32 index = 0; index < 109; ++index) {
        BtlActionRecord *action = &(*block)->actions[index];
        if (action != NULL && (action->status & 1) != 0 && (action->status & 2) != 0)
            FUN_0027e5e4(action);
    }
    (*block)->effectValue = 0;
    FUN_00250720(*block);
    if ((work->flags & 0x2000) != 0) {
        work->flags &= ~0x2000u;
        setPendingAction(block, 20);
        return 1;
    }

    bool canRetry = true;
    s32 first;
    s32 count;
    if (work->record->memberId < 4) {
        first = 4;
        count = 50;
    } else {
        first = 0;
        count = 4;
    }
    s32 index = first;
    for (; index < first + count; ++index) {
        if (((*block)->actions[index].status & 1) != 0 && FUN_00229914(block, work, index) == 0)
            break;
    }
    if (index >= first + count)
        canRetry = false;
    if ((*block)->actionState.mode != 0)
        canRetry = false;

    if ((work->flags & 4) == 0) {
        if (canRetry)
            FUN_003cefe0(block, work, command);
        bool anyUp = false;
        u8 slotFlags[4] = {0, 0, 0, 0};
        for (s32 i = 0; i < 109; ++i) {
            if (((*block)->actions[i].status & 1) == 0 || FUN_00229914(block, work, i) != 0)
                continue;
            BtlEntry *entry = btlMainFindEntryByListedId(reinterpret_cast<SlotManager *>(*block), i);
            EntryDataBlock *data = entryData(entry);
            if (data->secondCounter != 0) {
                FUN_00246d38(0, work, &(*block)->actions[i], 0x10);
                data->secondCounter = 0;
                data->firstCounter &= ~0x10;
            } else if (data->firstCounter == 0 || data->groupMask != 0) {
                if ((data->groupMask & 0x10) != 0) {
                    s32 slot = entry->selectionIndex;
                    if (static_cast<u32>(slot) < 4)
                        slotFlags[slot] = 1;
                }
            } else if (canRetry) {
                FUN_00246e24(0, work, &(*block)->actions[i], 0x10, 0);
                FUN_0022a5d8(25, entry, 1);
                data->firstCounter = 0;
                handled = true;
                if ((entry->flags & 10) != 0) {
                    anyUp = true;
                    s32 slot = entry->selectionIndex;
                    if (static_cast<u32>(slot) < 4)
                        slotFlags[slot] = 1;
                }
            }
        }
        if (anyUp && slotFlags[0] != 0 && slotFlags[1] != 0 && slotFlags[2] != 0 && slotFlags[3] != 0) {
            FUN_003c05e8(25);
            FUN_00229a3c(0, work, 0, 33, 0);
        }
        if (!handled) {
            s32 alive = 0;
            for (s32 i = 0; i < 4; ++i) {
                BtlEntry *entry = &(*block)->entries[i];
                if ((entry->flags & 1) != 0 && (entry->flags & 0x40) == 0 && (entry->groupMask & 0x10) != 0)
                    ++alive;
            }
            if (alive == 4)
                handled = true;
        }
    }

    if (FUN_00229914(block, work, work->record->memberId) == 0 && (work->selection->responseFlags & 0x20) != 0) {
        s32 start = work->record->memberId < 4 ? 4 : 0;
        s32 total = work->record->memberId < 4 ? 50 : 4;
        for (s32 i = start; i < start + total; ++i) {
            if (((*block)->actions[i].status & 1) != 0 && FUN_00229914(block, work, i) == 0) {
                if ((*block)->actionState.mode == 0 && (work->entry->flags & 0x40) == 0 &&
                    (work->entry->flags & 0x20000000) == 0 && (work->flags & 4) == 0) {
                    s32 value = work->selection->power / 8;
                    if (value > 100)
                        value = randRange(15) + 100;
                    if (FUN_003cfe14(block, work, value) != 0)
                        work->flags |= 0x10000;
                    handled = true;
                }
                break;
            }
        }
    }

    for (s32 i = 0; i < 109; ++i) {
        BtlEntry *entry = &(*block)->entries[i];
        if ((entry->flags & 1) != 0 && (entry->flags & 0x40) == 0 && (entry->groupMask & 0x400) != 0) {
            FUN_0022a5d8(22, entry, 1);
            FUN_00246454(0, work, entry);
            handled = true;
        }
    }

    BtlEntry *active = btlMainFindActiveEntry(*block);
    if (active != NULL) {
        BtlActionRecord *activeAction = &(*block)->actions[active->members.ids[0]];
        s32 held = battleGetEntryHalfword(0, 2);
        s32 quest = questGetCurrentRecordValue6();
        if (quest != 0 && held > 0) {
            s32 value = questGetCurrentRecordValue8();
            if (value == 0) {
                setPendingAction(block, 30);
                return 1;
            }
            btlReflectCreateKind10(5, work, value, 12);
        } else {
            s32 current = questCurrentGetValue();
            u32 required = questRecordValueIfState2();
            u32 have = battleGetEntryHalfword(work->record->memberId, 29);
            if (current == 0 || required > have) {
                if (!handled) {
                    FUN_00229754(block, work);
                    return 1;
                }
                setPendingAction(block, 30);
                return 1;
            }
            FUN_00255180(work->record->memberId, 29, FUN_00245cc0(29));
            FUN_003d03f8(block, work, current, 25, activeAction, active);
            s32 result = FUN_003c8880();
            if (result == 0) {
                setPendingAction(block, 30);
                return 1;
            }
            btlReflectCreateKind10(5, work, result, -1);
        }
    } else if (!handled) {
        FUN_00229754(block, work);
        return 1;
    }
    setPendingAction(block, 30);
    return 1;
}
}
