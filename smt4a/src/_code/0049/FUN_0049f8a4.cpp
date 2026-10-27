/* NON_MATCHING: readable rebuild from asm of the percent HP loss; retail tests the member's down/immune bits with `tst #2; tsteq #1024` (armcc here merges them into one bic/bics pair), spills new HP and max HP to the stack around the FUN_0018416c call and keeps 1.25f in s16. */
#include "common.h"
#include "gamedata/SaveSlotTable.h"

/* The hero record (only the fields read here). */
struct HeroRecord {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s16 maxHp;
    /* 0x1E */ u8 unk1E[0xC];
    /* 0x2A */ s16 hp;
    /* 0x2C */ u8 unk2C[0x32];
    /* 0x5E */ u16 flags;       /* 2: down, 0x400: cannot lose HP */
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
HeroRecord *gameGetPlayerData(void);
MemberRecord *gameGetSlotRecord(s32 id);
s32 gameSlotTableFindFree(void);
MemberRecord *gameGetOptions(void);
s32 gameOptionsClassifyMode(void);
s32 FUN_0018416c(u16 equipment);
void FUN_00408184(s32 sound);
void FUN_004186e0(void);
s32 FUN_001bd118(void);

/* The percentage of `max`, at least 1. */
static s32 percentOf(s32 max, s32 percent)
{
    s32 amount = max * percent / 100;
    return amount <= 0 ? 1 : amount;
}

/* A member's max HP as the loss sees it: raised by a quarter with the equipment that boosts it. */
static s32 effectiveMaxHp(MemberRecord *member)
{
    s32 max = member != NULL ? member->maxHp : 0;
    if (member != NULL && FUN_0018416c(member->equipment))
        max = (s16)(s32)((f32)max * 1.25f);
    return max;
}

/* Takes `percent` of max HP from the hero (target 0, 2, 3), from the party (0/1: the active slots,
 * 2/3: the three reserve slots) and from the options character (3, 4); HP never drops below 1
 * except for the options character, who can go down. */
static __inline bool canLoseHp(u16 flags)
{
    if (flags & 2)
        return false;
    if (flags & 0x400)
        return false;
    return true;
}

void FUN_0049f8a4(u32 target, s32 percent)
{
    if (percent <= 0)
        return;
    if ((target == 0 || target == 2 || target == 3) && canLoseHp(gameGetPlayerData()->flags)) {
        s32 max = gameGetPlayerData()->maxHp;
        s32 hp = gameGetPlayerData()->hp;
        s32 newHp = hp - percentOf(max, percent);
        if (newHp <= 0)
            newHp = 1;
        HeroRecord *hero = gameGetPlayerData();
        s16 clamped = (s16)newHp;
        hero->hp = clamped > hero->maxHp ? hero->maxHp : (clamped < 1 ? 1 : clamped);
        if (hp - newHp > 0)
            FUN_00408184(0x17);
    }
    s32 count = 0;
    s8 *slots = NULL;
    if (target == 0 || target == 1) {
        count = gameSlotTableFindFree();
        slots = (s8 *)(gameGetSlotTable() + 0x1C88);
    } else if (target == 2 || target == 3) {
        count = 3;
        slots = (s8 *)(gameGetSlotTable() + 0x1CA0);
    } else if (target != 4) {
        return;
    }
    for (s32 i = 0; i < count; i++) {
        if (slots[i] < 0)
            continue;
        MemberRecord *member = gameGetSlotRecord(slots[i]);
        if (canLoseHp(member->flags)) {
            s32 hp = member->hp;
            s32 newHp = hp - percentOf(effectiveMaxHp(member), percent);
            if (newHp <= 0)
                newHp = 1;
            s16 clamped = (s16)newHp;
            if (member != NULL) {
                s32 max = effectiveMaxHp(member);
                member->hp = clamped > max ? max : (clamped < 1 ? 1 : clamped);
            }
            if (hp - newHp > 0)
                FUN_00408184(0x17);
        }
    }
    if (target != 3 && target != 4)
        return;
    if (gameOptionsClassifyMode() != 2)
        return;
    if (gameOptionsClassifyMode() == 2) {
        MemberRecord *options = gameGetOptions();
        if ((options->flags & 2) || options->hp == 0)
            return;
    }
    MemberRecord *options = gameGetOptions();
    s32 max = options->maxHp;
    s32 newHp = options->hp - percentOf(max, percent);
    FUN_004186e0();
    bool fourth = FUN_001bd118() == 4;
    if (newHp <= 0 && !fourth)
        newHp = 1;
    if (newHp > max)
        newHp = max;
    options->hp = (s16)newHp;
    if ((s16)newHp == 0)
        options->flags |= 2;
}

} /* extern "C" */
