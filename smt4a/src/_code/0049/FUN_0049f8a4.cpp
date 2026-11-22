/* NON_MATCHING: 84 lines (197 vs 197 rows): all branches, offsets, hero/member/options flows, and switch (gameOptionsClassifyMode()) match retail; r7/r8 (target/member) are swapped and a few minor instruction schedules differ. */
#include "common.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/GamePlayerData.h"

/* Slot table view for active and reserve party order arrays. */
struct SlotTableView {
    /* 0x0000 */ u8 unk0000[0x1C88];
    /* 0x1C88 */ s8 active[0x18];
    /* 0x1CA0 */ s8 reserve[3];
};

/* A party member record (also the options character's). */
struct MemberRecord {
    /* 0x00 */ u8 unk00[0xE];
    /* 0x0E */ s16 maxHp;
    /* 0x10 */ u8 unk10[0x1A];
    /* 0x2A */ s16 hp;
    /* 0x2C */ u8 unk2C[0x34];
    /* 0x60 */ u16 flags;       /* 2: down, 0x400: cannot lose HP */
    /* 0x62 */ u16 equipment;
};

extern "C" {
MemberRecord *gameGetSlotRecord(s32 id);
s32 gameSlotTableFindFree(void);
MemberRecord *gameGetOptions(void);
s32 gameOptionsClassifyMode(void);
s32 unitHasRankingBonus(u16 equipment);
void gameCounterAddSaturating(s32 sound);
void rosterGetLeaderId(void);
s32 table1bOr1cGetRecordValue(void); /* declcheck: local (the shared declaration in code/Code001b.h does not compile here: too few arguments in function call) */

/* The percentage of `max`, at least 1. */
static __inline s32 percentOf(s32 max, s32 percent)
{
    s32 amount = max * percent / 100;
    return amount <= 0 ? 1 : amount;
}

/* A member's max HP as the loss sees it: raised by a quarter with the equipment that boosts it. */
static __inline s32 effectiveMaxHp(MemberRecord *member)
{
    if (member == NULL) {
        return 0;
    }
    s32 max = member->maxHp;
    if (unitHasRankingBonus(member->equipment)) {
        max = (s16)(s32)((f32)max * 1.25f);
    }
    return max;
}

static __inline bool canLoseHp(u16 flags)
{
    if (flags & 2) {
        return false;
    }
    if (flags & 0x400) {
        return false;
    }
    return true;
}

/* Clamps an HP value to [1, max]. */
static __inline s32 clampHp(s32 value, s32 max)
{
    if (value > max) {
        value = max;
    } else if (value < 1) {
        value = 1;
    }
    return value;
}

/* Takes `percent` of max HP from the hero (target 0, 2, 3), from the party (0/1: the active slots,
 * 2/3: the three reserve slots) and from the options character (3, 4); HP never drops below 1
 * except for the options character, who can go down. */
void FUN_0049f8a4(u32 target, s32 percent)
{
    if (percent <= 0) {
        return;
    }
    if ((target == 0 || target == 2 || target == 3) &&
        (gameGetPlayerData()->ailments & 2) == 0 && (gameGetPlayerData()->ailments & 0x400) == 0) {
        s32 max = gameGetPlayerData()->maxHp;
        s32 hp = gameGetPlayerData()->hp;
        s32 newHp = hp - percentOf(max, percent);
        if (newHp <= 0) {
            newHp = 1;
        }
        s16 clamped = (s16)newHp;
        PlayerDataA *hero = gameGetPlayerData();
        hero->hp = (s16)clampHp(clamped, hero->maxHp);
        if (hp - newHp > 0) {
            gameCounterAddSaturating(0x17);
        }
    }
    s32 count = 0;
    s8 *slots = NULL;
    if (target == 0 || target == 1) {
        count = gameSlotTableFindFree();
        slots = ((SlotTableView *)gameGetSlotTable())->active;
    } else if (target == 2 || target == 3) {
        count = 3;
        slots = ((SlotTableView *)gameGetSlotTable())->reserve;
    }
    for (s32 i = 0; i < count; i++) {
        if (slots[i] < 0) {
            continue;
        }
        MemberRecord *member = gameGetSlotRecord(slots[i]);
        if (canLoseHp(member->flags)) {
            s32 loss = percentOf(effectiveMaxHp(member), percent);
            s32 hp = member->hp;
            s32 newHp = hp - loss;
            if (newHp <= 0) {
                newHp = 1;
            }
            s16 clamped = (s16)newHp;
            if (member != NULL) {
                s32 max = effectiveMaxHp(member);
                member->hp = (s16)clampHp(clamped, max);
            }
            if (hp - newHp > 0) {
                gameCounterAddSaturating(0x17);
            }
        }
    }
    if (target != 3 && target != 4) {
        return;
    }
    if (gameOptionsClassifyMode() != 2) {
        return;
    }
    switch (gameOptionsClassifyMode()) {
    case 0:
        break;
    case 1:
        break;
    case 2: {
        MemberRecord *options = gameGetOptions();
        if ((options->flags & 2) != 0 || options->hp == 0) {
            return;
        }
        break;
    }
    }
    MemberRecord *options = gameGetOptions();
    s32 max = options->maxHp;
    s32 newHp = options->hp - percentOf(max, percent);
    s32 fourth = 0;
    rosterGetLeaderId();
    if (table1bOr1cGetRecordValue() == 4) {
        fourth = 1;
    }
    if (newHp <= 0 && !fourth) {
        newHp = 1;
    }
    if (newHp > max) {
        newHp = max;
    }
    s16 finalHp = (s16)newHp;
    options->hp = finalHp;
    if (finalHp == 0) {
        options->flags |= 2;
    }
}

} /* extern "C" */
