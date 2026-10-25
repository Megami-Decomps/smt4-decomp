/* NON_MATCHING: percentage/constant VFP allocation and shared player/party skill-loop grouping differ; compiler-version changes are not a remedy. */
#include "common.h"

/* A skill record's flag word: the low bits hold the skill's recovery kind. */
struct RegenSkill {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u32 flags;
};

/* The turn state (only the phase). */
struct RegenTurn {
    /* 0x00 */ u8 unk00[0xa8];
    /* 0xa8 */ s32 phase;
};

/* The player's record (only the current values). */
struct RegenPlayer {
    /* 0x00 */ u8 unk00[0x2a];
    /* 0x2a */ u16 currentHp;
    /* 0x2c */ u16 currentMp;
};

/* A party unit's record (only the fields used here). */
struct RegenUnit {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s16 maximumMp;
    /* 0x12 */ u8 unk12[0x18];
    /* 0x2a */ s16 currentHp;
    /* 0x2c */ s16 currentMp;
};

/* The party slot table: the stock order and the party size. */
struct RegenSlotTable {
    /* 0x0000 */ u8 unk0000[0x1c88];
    /* 0x1c88 */ s8 order[24];
    /* 0x1ca0 */ u8 unk1ca0[3];
    /* 0x1ca3 */ u8 count;
};

extern "C" {
RegenPlayer *gameGetPlayerData(void);
RegenUnit *gameGetSlotRecord(s32 slot);
RegenSlotTable *gameGetSlotTable(void);
RegenSkill *dataTable41FindById(u16 id);
void playerGetWords(u16 words[10], s32 index);
s32 playerHasFlagBit(u32 bit);
void playerClearFlagMask(u32 mask);
void halves34Copy(RegenUnit *unit, u16 *words);
s32 bitsAt60Test(RegenUnit *unit, u32 bit);
s16 FUN_003e0024(void);
s16 FUN_003e0034(void);
s32 FUN_003e0064(s32 value);
u32 FUN_003e0154(void);
u32 FUN_003e0164(void);
void playerSetClampedValue(s32 value);
u32 recordGetScaledMaximum(RegenUnit *unit);
void recordSetClampedCurrent(RegenUnit *unit, s32 value);
void selectionStateSetClamped(RegenUnit *unit, s32 value);
void partyResetAndRefreshSlotStats(void);

/* Clamps a recovery percentage to 0-100. */
static __inline void clamp(f32 *percent)
{
    if (*percent < 0.0f) {
        *percent = 0.0f;
    } else if (*percent > 100.0f) {
        *percent = 100.0f;
    }
}

/* Adds up the recovery the skills in `words` grant: HP and MP percentages per turn. */
static __inline void regenAddSkills(const u16 *words, f32 *hp, f32 *mp)
{
    for (s32 i = 0; i < 9; i++) {
        if (words[i] != 0) {
            RegenSkill *skill = dataTable41FindById(words[i]);
            if (skill != NULL) {
                switch ((skill->flags & 0x1f) >> 2) {
                case 1:
                    *hp += 10.0f;
                    break;
                case 2:
                    *mp += 7.0f;
                    break;
                case 3:
                    *mp = 100.0f;
                    *hp = 100.0f;
                    break;
                case 4:
                    *hp += 5.0f;
                    break;
                case 5:
                    *mp += 3.5f;
                    break;
                }
            }
        }
    }
}

/* Applies the per-turn recovery skills to the player and every party unit when a turn ends. */
void FUN_003ee734(RegenTurn *turn)
{
    if (turn->phase == 1 || turn->phase == 10) {
        u16 words[10];
        f32 hp = 0.0f;
        f32 mp = 0.0f;
        playerGetWords(words, 1);
        regenAddSkills(words, &hp, &mp);
        clamp(&hp);
        clamp(&mp);
        if (playerHasFlagBit(1) == 0 && playerHasFlagBit(10) == 0) {
            s16 current = FUN_003e0024();
            s32 value = (s16)((s32)((f32)(s32)FUN_003e0154() * hp * 0.01f) + current);
            FUN_003e0064(value);
            if (value == 0) {
                gameGetPlayerData()->currentHp = 0;
            }
            current = FUN_003e0034();
            value = (s16)((s32)((f32)(s32)FUN_003e0164() * mp * 0.01f) + current);
            playerSetClampedValue(value);
            if (value == 0) {
                gameGetPlayerData()->currentMp = 0;
            }
        }
        u8 count = gameGetSlotTable()->count;
        RegenSlotTable *table = gameGetSlotTable();
        for (s32 slot = 0; slot < count; slot++) {
            RegenUnit *unit;
            if (table->order[slot] >= 0 && (unit = gameGetSlotRecord(table->order[slot])) != NULL) {
                hp = 0.0f;
                mp = 0.0f;
                for (s32 i = 0; i < 10; i++) {
                    words[i] = 0;
                }
                halves34Copy(unit, words);
                regenAddSkills(words, &hp, &mp);
                clamp(&hp);
                clamp(&mp);
                if (bitsAt60Test(unit, 1) == 0 && bitsAt60Test(unit, 10) == 0) {
                    s32 value = (s16)((s32)((f32)(s32)recordGetScaledMaximum(unit) * hp * 0.01f) +
                                      unit->currentHp);
                    recordSetClampedCurrent(unit, value);
                    if (value == 0) {
                        unit->currentHp = 0;
                    }
                    value = (s16)((s32)((f32)(s32)unit->maximumMp * mp * 0.01f) + unit->currentMp);
                    selectionStateSetClamped(unit, value);
                    if (value == 0) {
                        unit->currentMp = 0;
                    }
                }
            }
        }
    }
    if (playerHasFlagBit(1) != 0) {
        playerClearFlagMask(2);
        FUN_003e0064(1);
    }
    partyResetAndRefreshSlotStats();
}

} /* extern "C" */
