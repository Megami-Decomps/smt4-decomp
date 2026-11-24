/* NON_MATCHING: 30 lines; retail loads the battle state mask words with one ldm from 0x45A0 (the build: two ldr from a 0x4500 base), lays the kind-3 test out as bne/b where the build has beq/b, and tests the target slot and the member with two branches (the build predicates the second compare) */
#include "battle/BtlCommandMenuData.h"
#include "battle/BtlMainAccess.h"
#include "gamedata/NkmBaseRecordA.h"
#include "common.h"
#include "shard/Shard0031.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/SaveSlotTable.h"
#include "code/Code002a.h"
#include "battle/BtlDebugMenuEntry.h"

/* The battle command work (only the fields read here). */
struct CommandWork {
    /* 0x0000 */ u8 unk0000[0x387C];
    /* 0x387C */ s32 mode;
    /* 0x3880 */ u8 unk3880[0x10];
    /* 0x3890 */ s32 selected;
    /* 0x3894 */ u8 unk3894[0x28];
    /* 0x38BC */ u8 lists[0x7D0];  /* one 100-byte list per selection */
    /* 0x408C */ u8 unk408C[0x74];
    /* 0x4100 */ BtlDebugPage page;
    /* 0x4210 */ s16 targets[8];
};

struct BattleMaskWords {
    u32 low;
    u32 high;
};

struct BattleState {
    /* 0x0000 */ u8 unk0000[0x45A0];
    /* 0x45A0 */ BattleMaskWords masks;
};

extern "C" {

s32 gameFlagIsSet(u32 flag);
s32 gameDataFlagTestBit(u32 flag);
s32 idListHasFlaggedRecord(SlotRecordA *member);
s32 btlIsDefeatSuppressed(void);
s32 btlListIsKind9Available(void);

s32 btlDebugQueryEnabled(void);

/* btlObjectHasEntryFlag's body: whether the unit's demon record allows the command (extra flag bit 2). */
static __inline s32 unitHasCommandFlag(SlotRecordA *unit)
{
    if (unit == NULL)
        return 0;
    if (btlIsDefeatSuppressed() == 0)
        return 0;
    NkmBaseRecordA *record = nkmBaseGetRecord(unit->id);
    return record != NULL ? ((record->extraFlags & 4) >> 2) : 0;
}

/* Whether a target command (kind 3) is usable by the member: not flagged for a free target, and allowed
 * by the member's demon record. */
static __inline bool targetCommandAllowed(BtlDebugEntry *entry, SlotRecordA *member)
{
    return entry->kind == 3 && (entry->flags & 1) == 0 && btlIsDefeatSuppressed() != 0 &&
           unitHasCommandFlag(member) != 0;
}

/* Picks which command the menu returns for the current selection: walks the ten command slots,
 * keeps the usable entries and returns the code of the one under the cursor. */
u32 FUN_002cc9e0(CommandWork *work, s32 inBattle)
{
    if (inBattle != 0 && work->mode == 6)
        return 11;
    SaveSlotTableA *table = gameGetSlotTable();
    BtlDebugEntry *entry = NULL;
    s32 count = 0;
    BtlDebugPage *page = &work->page;
    for (s32 t = 0; t < DEBUG_MENU_ENTRY_COUNT; t++) {
        entry = btlDebugFindCommandByIndex((u8)t, work->selected == 0);
        SlotRecordA *member = NULL;
        if (work->selected != 0 && table->reserve[work->selected - 1] >= 0)
            member = gameGetSlotRecord(gameGetSlotTable()->reserve[work->selected - 1]);
        if (entry == NULL || entry->enabled != 1)
            continue;
        if (entry->flagId != 0 && gameFlagIsSet(entry->flagId) == 0)
            continue;
        if (entry->dataFlagId != 0 && gameDataFlagTestBit(entry->dataFlagId) == 0)
            continue;
        if (entry->needsBattleState) {
            BattleMaskWords masks = reinterpret_cast<BattleState *>(btlGetMainState())->masks;
            if (((masks.low & g_btlCommandMenuData.stateMask28Words[0]) | (masks.high & g_btlCommandMenuData.stateMask28Words[1])) != 0)
                continue;
        }
        if (entry->kind == 5) {
            if (page->pending != 0)
                continue;
        } else if (entry->kind == 2) {
            continue;
        } else if (entry->kind == 3) {
            if (work->targets[work->selected] != -1 && member != NULL) {
                if (idListHasFlaggedRecord(member) == 0 && !targetCommandAllowed(entry, member))
                    continue;
            }
        }
        if (entry->kind != 6 && entry->kind != 8) {
            if (work->selected == 0 && btlDebugQueryEnabled() != 0)
                continue;
            if (entry->kind == 9 && btlListIsKind9Available() == 0)
                continue;
        }
        if ((entry->flags & 1) && btlIsDefeatSuppressed() != 0)
            continue;
        if (listCursorGetRowOfChildIfUnblocked(reinterpret_cast<Object *>(work->lists + work->selected * 100)) == count)
            break;
        count++;
    }
    if (entry == NULL)
        return 5;
    switch (entry->kind) {
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 7;
    case 4:
        return 3;
    case 5:
        return 10;
    case 6:
        return 9;
    case 7:
        return 4;
    case 9:
        return 12;
    }
    return 5;
}

} /* extern "C" */
