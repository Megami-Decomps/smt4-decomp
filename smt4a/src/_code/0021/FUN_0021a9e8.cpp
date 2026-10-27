/* NON_MATCHING: the readable rewrite of the command menu list setup is structurally identical; the battle-mask loads and the three hoisted constants take other registers (retail keeps 1 in r8 and 0 in r9, the data table pointer in r6) and the filled-slot count reads its last slot through a literal-offset base. */
#include "common.h"
#include <stddef.h>
#include "battle/BtlMainAccess.h"
#include "gamedata/FlagValueIsPositive.h"
#include "gamedata/PlayerDataBlock.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

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

/* The battle state's held mask. */
struct BattleHeldMask {
    u8 unk00[0x45A8];
    u64 held;
};

/* The battle data table (observed fields). */
struct BattleCommandData {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 firstSelection;
    /* 0x08 */ s32 secondSelection;
    /* 0x0C */ u8 unk0C[0x34];
    /* 0x40 */ u64 blocked;
};

extern "C" {
extern BattleCommandData DAT_00573b88;
u32 FUN_004c67d0(void);
void FUN_0020d3d4(void *menu);
void FUN_0023f788(void *menu);
bool gameFlagIsSet(u32 index);
void FUN_00203b40(ScrollSelection *list, s32 count, s32 columns, s32 first, s32 second, s32 third);
void FUN_002a4964(ScrollSelection *list, s32 index);
void *sysMemClear(void *destination, u32 size);
s32 FUN_0047fbb4(u32 id);
s32 FUN_0047fd9c(s32 id, void *unit);
void *gameGetSlotRecord(s32 index);
u32 btlMainGetUnk14(void);
void qsort(void *elements, u32 count, u32 elementSize, int (*compare)(const void *, const void *));
int dataTableCompareIdsByOrder(const void *first, const void *second);
void scrollOwnerSelectIndex(ScrollSelection *owner, s32 index);
s32 FUN_00284dbc(void);

/* Whether the player data has both of its unlock words set. */
static __inline bool playerUnlocked()
{
    const u16 *player = reinterpret_cast<const u16 *>(gameGetPlayerData());
    return player[1] != 0 && player[2] != 0;
}

/* Adds the filled command slots of a selection to a running count. */
static __inline s32 countFilledSlots(const CommandSlots *slots, s32 count)
{
    for (s32 i = 0; i < 8; i++) {
        if (slots->skills[i] != 0)
            count++;
    }
    return count;
}

/* Adds a flag-listed command to the selection's id list when this selection may use it. */
static __inline void addAvailableCommand(CommandMenuSetup *work, s32 *count, u32 id)
{
    if (flagValueIsPositive(id) == 0 || FUN_0047fbb4(id) == 0)
        return;
    s16 kind = work->targets[work->selected];
    if (kind != -1) {
        if (kind != -2) {
            if (kind < 0)
                return;
            void *record = gameGetSlotRecord(kind);
            if (record == NULL || FUN_0047fd9c(id, record) == 0)
                return;
        } else {
            void *unit = reinterpret_cast<void *>(btlMainGetUnk14());
            if (unit == NULL || FUN_0047fd9c(id, unit) == 0)
                return;
        }
    }
    work->ids[(*count)++] = id;
}

/* Sets up the battle command menu's lists for the current selection: the command page, the party list,
 * the available extra commands (sorted) and the cursor. */
void FUN_0021a9e8(CommandMenuSetup *work)
{
    work->owner = FUN_004c67d0();
    FUN_0020d3d4(work);
    FUN_0023f788(work);
    BattleHeldMask *battle = reinterpret_cast<BattleHeldMask *>(btlGetMainState());
    s32 *selected = &work->selected;
    ScrollSelection *page = &work->lists[4];
    if ((battle->held & DAT_00573b88.blocked) != 0) {
        if (work->targets[*selected] == -1 && gameFlagIsSet(0x410) != 0 && playerUnlocked()) {
            FUN_00203b40(page, 0x191, 6, 1, 1, 1);
            FUN_002a4964(page, DAT_00573b88.firstSelection + 2);
        } else {
            FUN_00203b40(page, 400, 6, 1, 1, 1);
            FUN_002a4964(page, DAT_00573b88.firstSelection + 1);
        }
    } else {
        s32 count;
        if (work->targets[*selected] != -1) {
            count = countFilledSlots(&work->slots[*selected], 1);
        } else {
            count = 2;
            if (gameFlagIsSet(0x410) == 0 || !playerUnlocked())
                count = 1;
            count = countFilledSlots(&work->slots[0], count);
        }
        FUN_00203b40(page, count, 6, 1, 0, 1);
    }
    BattleHeldMask *state = reinterpret_cast<BattleHeldMask *>(btlGetMainState());
    ScrollSelection *party = &work->lists[5];
    if (!((DAT_00573b88.blocked & state->held) == 0)) {
        FUN_00203b40(party, *reinterpret_cast<s16 *>(reinterpret_cast<u8 *>(btlGetMainState()) + 0xE0), 6, 1, 1, 1);
        FUN_002a4964(party, DAT_00573b88.secondSelection);
    } else {
        FUN_00203b40(party, 1, 6, 1, 0, 1);
    }
    sysMemClear(work->ids, 0xF8);
    s32 count = 0;
    for (u32 id = 1; id < 0x3D; id++)
        addAvailableCommand(work, &count, id);
    for (u32 id = 0x79F; id < 0x7DF; id++)
        addAvailableCommand(work, &count, id);
    FUN_00203b40(&work->extraList, work->extraCount != 0, 1, 1, 0, 1);
    FUN_00203b40(&work->lists[6], count, 6, 1, 0, 1);
    qsort(work->ids, count, 2, dataTableCompareIdsByOrder);
    scrollOwnerSelectIndex(&work->lists[*selected], 0);
    if (FUN_00284dbc() != 0)
        scrollOwnerSelectIndex(&work->lists[0], 1);
    work->current = page;
}
}
