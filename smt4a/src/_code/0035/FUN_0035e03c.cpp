/* NON_MATCHING: block layout and stack frame differ (retail places the effect-12 halving block after the effect-11 scan and keeps the scan's unprotected flag in a stack slot) */
#include "common.h"
#include "mapnavi/naviMain.h"

#include "util/FUN_002e5c2c.h"
/* The player's record (only the fields used here). */
struct EffectPlayer {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ s16 value;
    /* 0x2e */ u8 unk2e[2];
    /* 0x30 */ u32 experience;
    /* 0x34 */ u8 unk34[0x2e];
    /* 0x62 */ u16 level;
};

/* A party unit's record (only the fields used here). */
struct EffectUnit {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ s16 value;
    /* 0x2e */ u8 unk2e[2];
    /* 0x30 */ u32 experience;
    /* 0x34 */ u8 unk34[0x10];
    /* 0x44 */ u32 pendingA;
    /* 0x48 */ u32 pendingB;
    /* 0x4c */ s8 boosts[18];
    /* 0x5e */ u8 unk5e[4];
    /* 0x62 */ u16 level;
    /* 0x64 */ u16 race;
};

/* The item effect being applied (only the fields used here). */
struct ItemEffect {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u16 id;
    /* 0x32 */ u8 unk32[0x16];
    /* 0x48 */ u16 experiencePercent;
    /* 0x4a */ u16 points;
    /* 0x4c */ u8 unk4c[8];
    /* 0x54 */ u16 requirement;
    /* 0x56 */ s8 boosts[18];
    /* 0x68 */ u32 flags;
};

/* A skill record's flag word. */
struct EffectSkill {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u32 flags;
};

extern "C" {
extern s32 g_gameState;
EffectPlayer *gameGetPlayerData(void);
EffectUnit *gameGetSlotRecord(s32 slot);
u32 randRange(u32 range);
EffectSkill *dataTable41FindById(u16 id);
void playerGetWords(u16 *words, s32 index);
void playerMaskSetBit(u32 bit);
void halves34Copy(EffectUnit *unit, u16 *words);
s32 bitsAt60Test(EffectUnit *unit, u32 bit);
void bitsAt60Set(EffectUnit *unit, u32 bit);
u32 FUN_004ccbf0(u16 level);
u32 FUN_004cc8d8(u16 level, u16 race);
void gameDataAddCappedPoints(u16 points);
s32 FUN_003df4a4(void);
void FUN_004bd17c(EffectUnit *unit);

/* Applies a consumable's secondary effects to the player (target < 0) or a party unit: the chance
   effects of effects 11 and 12, the experience gain, the point reward and the stat boosts. With
   `preview` set nothing is written. Returns 0 when the effect did something. */
u32 FUN_0035e03c(s32 target, ItemEffect *effect, s32 check, s32 preview)
{
    EffectPlayer *player = NULL;
    EffectUnit *unit = NULL;
    if (target < 0) {
        player = gameGetPlayerData();
    } else {
        unit = gameGetSlotRecord(target);
        if (unit == NULL) {
            return 1;
        }
    }
    u32 result = 1;
    if (preview == 0) {
        if (effect->id == 11) {
            if (check == 0 && randRange(99) < 25) {
                u16 words[10];
                s32 hasBit;
                if (player != NULL) {
                    playerGetWords(words, 0);
                    hasBit = playerHasFlagBit(5);
                } else {
                    halves34Copy(unit, words);
                    hasBit = bitsAt60Test(unit, 5);
                }
                if (hasBit == 0) {
                    bool unprotected = true;
                    for (s32 i = 0; i < 8; i++) {
                        EffectSkill *skill = dataTable41FindById(words[i]);
                        if (skill != NULL && (skill->flags & 0x400000) != 0) {
                            unprotected = false;
                            break;
                        }
                    }
                    if (unprotected) {
                        if (player != NULL) {
                            playerMaskSetBit(5);
                        } else {
                            bitsAt60Set(unit, 5);
                        }
                        result = 0;
                    }
                }
            }
        } else if (effect->id == 12 && check == 0) {
            if (randRange(99) < 25) {
                if (player != NULL) {
                    player->value = player->value / 2;
                } else {
                    unit->value = unit->value / 2;
                }
                result = 0;
            }
        }
    }

    if (effect->experiencePercent != 0 &&
        ((player != NULL && FUN_004ccbf0(player->level) != player->experience) ||
         (unit != NULL && FUN_004cc8d8(unit->level, unit->race) != unit->experience))) {
        if (preview == 0) {
            if (player != NULL) {
                player->experience += (s32)(effect->experiencePercent * FUN_004ccbf0(player->level)) / 100;
                if (FUN_004ccbf0(player->level) < player->experience) {
                    player->experience = FUN_004ccbf0(player->level);
                }
            } else if (unit != NULL) {
                unit->experience += (s32)(effect->experiencePercent * FUN_004cc8d8(unit->level, unit->race)) / 100;
                if (FUN_004cc8d8(unit->level, unit->race) < unit->experience) {
                    unit->experience = FUN_004cc8d8(unit->level, unit->race);
                }
            }
        }
        result = 0;
    }
    if (effect->points != 0 && player != NULL && FUN_002e5c2c() != 9999) {
        if (preview == 0) {
            gameDataAddCappedPoints(effect->points);
        }
        result = 0;
    }

    if (effect->id == 0x79f) {
        result = g_gameState == 24 ? 0 : 1;
    }
    if (effect->id == 0x7af) {
        result = 0;
    }
    if (effect->id == 0x7b6) {
        result = 0;
        if (player == NULL || effect->requirement == 0 || FUN_003df4a4() != 0) {
            result = 1;
        }
    }

    if (unit != NULL) {
        for (s32 i = 0; i < 18; i++) {
            s32 cap = i >= 14 ? 5 : 9;
            if (effect->boosts[i] != 0 && unit->boosts[i] > 0 && cap > unit->boosts[i]) {
                result = 0;
                if (preview != 0) {
                    break;
                }
                s8 boosted = unit->boosts[i] + effect->boosts[i];
                if (boosted <= cap) {
                    cap = boosted;
                }
                unit->boosts[i] = boosted;
                unit->boosts[i] = cap;
                unit->pendingA = 0;
                unit->pendingB = 0;
                FUN_004bd17c(unit);
            }
        }
    }
    if (player != NULL && (effect->flags & 1) != 0) {
        result = 0;
    }
    return check == 0 ? 0 : result;
}

} /* extern "C" */
