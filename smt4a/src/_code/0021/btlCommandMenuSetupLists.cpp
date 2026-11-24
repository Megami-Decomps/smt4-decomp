/* NON_MATCHING: 198 lines (128 by shape), 341 rows against 337. Same calls, loops and constants as retail; what
 * differs: (1) the party list's count is read through btlMainGetPartyListCount, the one-instruction getter armlink
 * inlined at 0x21ac68 (config/inlined.txt); that block is retail's, but writing the call moved the allocation
 * elsewhere (148 lines when the field was read in place). (2) The first
 * battle-mask test loads the state's mask with one `ldrd` and combines the halves through other registers.
 * (3) Retail keeps 0 in r9 and the second id range's end in fp, the build the other way round. (4) The two
 * filled-slot counts share their last `count++`: retail keeps the copy in the selected-unit arm and reaches the
 * player's last slot through a pooled offset from the work pointer, the build keeps it in the player arm and
 * indexes with a zero register; the count registers differ with it. (5) In one id loop the record null test is
 * `cmp; mov r1, r0` where retail has `movs r1, r0`, and both loops read the selection into r1 (retail r0).
 * (6) `extraCount != 0` is loaded into r0 and set with `movne; moveq` (retail r1, `moveq; movne`), and the last
 * list address is formed through r1. */
#include "battle/BtlCommandMenuData.h"
#include "common.h"
#include <stddef.h>
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "gamedata/FlagValueIsPositive.h"
#include "gamedata/PlayerDataBlock.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "gamedata/SaveSlotRecord.h"

/* The command slots of one selection. */
struct CommandSlots {
    u16 skills[8];
};

/* The battle command menu's work as its list setup reads it (only the fields used here). */
struct CommandMenuSetup {
    /* 0x0000 */ u8 unk0000[0x3890];
    /* 0x3890 */ s32 selected;
    /* 0x3894 */ u8 unk3894[0xC];
    /* 0x38A0 */ u32 owner;
    /* 0x38A4 */ u8 unk38A4[0x38BC - 0x38A4];
    /* 0x38BC */ ScrollSelection lists[8];
    /* 0x3BDC */ u8 unk3BDC[0x64];
    /* 0x3C40 */ ScrollSelection *current;
    /* 0x3C44 */ CommandSlots slots[4];
    /* 0x3C84 */ u8 unk3C84[0x3CA8 - 0x3C84];
    /* 0x3CA8 */ u16 ids[124];
    /* 0x3DA0 */ u8 unk3DA0[0x3DB4 - 0x3DA0];
    /* 0x3DB4 */ ScrollSelection extraList;
    /* 0x3E18 */ u32 extraCount;
    /* 0x3E1C */ u8 unk3E1C[0x4210 - 0x3E1C];
    /* 0x4210 */ s16 targets[8];
};

typedef char CommandMenuSetupOffsetCheck[
    offsetof(CommandMenuSetup, lists) == 0x38BC && offsetof(CommandMenuSetup, current) == 0x3C40 &&
    offsetof(CommandMenuSetup, slots) == 0x3C44 && offsetof(CommandMenuSetup, ids) == 0x3CA8 &&
    offsetof(CommandMenuSetup, extraList) == 0x3DB4 && offsetof(CommandMenuSetup, targets) == 0x4210 ? 1 : -1];

extern "C" {
/* The command filter's party list count (a getter armlink inlined: its one instruction is in config/inlined.txt). */
s16 btlMainGetPartyListCount(BtlMainStateA *state);
u32 FUN_004c67d0(void);
void FUN_0020d3d4(void *menu);
void FUN_0023f788(void *menu);
bool gameFlagIsSet(u32 index);
void gridNavigationConfigure(ScrollSelection *list, s32 count, s32 columns, s32 first, s32 second, s32 third);
void scrollListSetSelectionTracked(ScrollSelection *list, s32 index);
void *sysMemClear(void *destination, u32 size);
s32 FUN_0047fbb4(u32 id);
s32 FUN_0047fd9c(s32 id, void *unit);
u32 btlMainGetUnk14(void);
void qsort(void *elements, u32 count, u32 elementSize, int (*compare)(const void *, const void *));
int dataTableCompareIdsByOrder(const void *first, const void *second);
void scrollOwnerSelectIndex(ScrollSelection *owner, s32 index);
s32 questIsReported(void);

/* Whether the player data has both of its unlock words set. */
static __inline bool playerUnlocked()
{
    const u16 *player = reinterpret_cast<const u16 *>(gameGetPlayerData());
    return player[1] != 0 && player[2] != 0;
}

/* Adds the filled command slots of selection `selection` to a running count. */
static __inline s32 countFilledSlots(const CommandMenuSetup *work, s32 selection, s32 count)
{
    for (s32 i = 0; i < 8; i++) {
        if (work->slots[selection].skills[i] != 0)
            count++;
    }
    return count;
}

/* Whether the current selection may use the flag-listed command `id`. */
static __inline bool commandIsAvailable(CommandMenuSetup *work, u32 id)
{
    if (flagValueIsPositive(id) != 0 && FUN_0047fbb4(id) != 0) {
        s16 kind = work->targets[work->selected];
        if (kind == -1)
            return true;
        if (kind == -2) {
            void *unit = reinterpret_cast<void *>(btlMainGetUnk14());
            if (unit != NULL && FUN_0047fd9c(id, unit) != 0)
                return true;
        } else if (kind >= 0) {
            void *record = gameGetSlotRecord(kind);
            if (record != NULL && FUN_0047fd9c(id, record) != 0)
                return true;
        }
    }
    return false;
}

/* Sets up the battle command menu's lists for the current selection: the command page, the party list,
 * the available extra commands (sorted) and the cursor. */
void btlCommandMenuSetupLists(CommandMenuSetup *work)
{
    work->owner = FUN_004c67d0();
    FUN_0020d3d4(work);
    FUN_0023f788(work);
    BtlMainStateA *battle = btlGetMainState();
    s32 selected = work->selected;
    ScrollSelection *page = &work->lists[4];
    if ((battle->markerMasks.bits & g_btlCommandMenuData.listMarker) != 0) {
        if (work->targets[selected] == -1 && gameFlagIsSet(0x410) != 0 && playerUnlocked()) {
            gridNavigationConfigure(page, 0x191, 6, 1, 1, 1);
            scrollListSetSelectionTracked(page, g_btlCommandMenuData.firstSelection + 2);
        } else {
            gridNavigationConfigure(page, 400, 6, 1, 1, 1);
            scrollListSetSelectionTracked(page, g_btlCommandMenuData.firstSelection + 1);
        }
    } else {
        s32 count;
        if (work->targets[selected] != -1) {
            count = countFilledSlots(work, selected, 1);
        } else {
            count = 2;
            if (gameFlagIsSet(0x410) == 0 || !playerUnlocked())
                count = 1;
            count = countFilledSlots(work, 0, count);
        }
        gridNavigationConfigure(page, count, 6, 1, 0, 1);
    }
    BtlMainStateA *state = btlGetMainState();
    ScrollSelection *party = &work->lists[5];
    if ((state->markerMasks.bits & g_btlCommandMenuData.listMarker) != 0) {
        gridNavigationConfigure(party, btlMainGetPartyListCount(btlGetMainState()), 6, 1, 1, 1);
        scrollListSetSelectionTracked(party, g_btlCommandMenuData.secondSelection);
    } else {
        gridNavigationConfigure(party, 1, 6, 1, 0, 1);
    }
    sysMemClear(work->ids, sizeof(work->ids));
    s32 count = 0;
    for (u32 id = 1; id <= 0x3C; id++) {
        if (commandIsAvailable(work, id))
            work->ids[count++] = id;
    }
    for (u32 id = 0x79F; id <= 0x7DE; id++) {
        if (commandIsAvailable(work, id))
            work->ids[count++] = id;
    }
    gridNavigationConfigure(&work->extraList, work->extraCount != 0, 1, 1, 0, 1);
    gridNavigationConfigure(&work->lists[6], count, 6, 1, 0, 1);
    qsort(work->ids, count, 2, dataTableCompareIdsByOrder);
    scrollOwnerSelectIndex(&work->lists[work->selected], 0);
    if (questIsReported() != 0)
        scrollOwnerSelectIndex(&work->lists[0], 1);
    work->current = page;
}
}
