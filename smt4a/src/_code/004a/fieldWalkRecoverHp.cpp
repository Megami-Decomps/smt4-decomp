/* NON_MATCHING: 361 lines: per-step recovery of the party's HP while walking (a percentage from the
 * active flags, +2 more with accessory 0x2A6, applied to the player and, for the strongest flag, to the reserve units;
 * then 2% for reserve units that know skill 0x1C6), rewritten on the slot table types with the unit HP helpers retail
 * inlines twice per unit (each repeats the unit's NULL test; the player's clamp is written in place: as a single-use
 * helper it scored 14 lines better, which is no evidence). What remains: retail keeps a zero in fp from entry and the loop bound 3 and the skill
 * percent in registers or stack slots of their own, spills each maximum HP to the stack (reloaded with vldr), tests
 * the skill slot against 0 before comparing it with 0x1C6, and stores the clamped HP from the limit's register. */
#include "common.h"
#include "shard/W6_W6Match8_StatGrowth.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"

#define WALK_HEAL_SKIP_FLAG 2
#define WALK_FLAG_STRONG_A 0x6B
#define WALK_FLAG_STRONG_B 0x69
#define WALK_FLAG_WEAK 0x68
#define WALK_PERCENT_STRONG 5
#define WALK_PERCENT_WEAK 2
#define WALK_PLAYER_BONUS_ID 0x2A6
#define WALK_PLAYER_BONUS_PERCENT 2
#define WALK_SKILL_HEAL 0x1C6
#define WALK_SKILL_HEAL_PERCENT 2
#define WALK_PARTY_SLOTS 3
#define WALK_SKILL_COUNT 8
#define WALK_AILMENT_DOWN 0x2
#define WALK_AILMENT_NO_HP_LOSS 0x400
#define WALK_HP_BOOST_SCALE 1.25f

extern "C" {
s32 unitHasRankingBonus(u16 id);
}

/* The unit's maximum HP, 25% more while its ranking bonus is active (0 without a unit). */
static __inline s16 walkUnitMaxHp(const SlotRecordA *unit)
{
    if (unit == NULL) {
        return 0;
    }
    s16 maxHp = unit->maxHp;
    if (unitHasRankingBonus(unit->id) != 0) {
        maxHp = (s16)(s32)((f32)maxHp * WALK_HP_BOOST_SCALE);
    }
    return maxHp;
}

/* Sets the unit's HP, kept between 1 and its maximum. */
static __inline void walkUnitSetHp(SlotRecordA *unit, s16 hp)
{
    if (unit == NULL) {
        return;
    }
    s16 maxHp = walkUnitMaxHp(unit);
    unit->hp = hp > maxHp ? maxHp : hp < 1 ? 1 : hp;
}

/* Heals the unit by `percent` of its maximum HP. */
static __inline void walkUnitHeal(SlotRecordA *unit, s32 percent)
{
    s32 maxHp = walkUnitMaxHp(unit);
    s32 amount = maxHp * percent / 100;
    if (amount < 0) {
        amount = 0;
    }
    s32 hp = amount + unit->hp;
    if (hp > maxHp) {
        hp = maxHp;
    }
    walkUnitSetHp(unit, (s16)hp);
}

/* Copies the unit's eight skill ids (none without a unit). */
static __inline void walkUnitCopySkills(const SlotRecordA *unit, u16 *skills)
{
    if (unit == NULL) {
        return;
    }
    for (s32 i = 0; i < WALK_SKILL_COUNT; i++) {
        skills[i] = unit->skills[i];
    }
}

extern "C" void fieldWalkRecoverHp(void)
{
    s32 percent = 0;
    if ((gameGetPlayerData()->ailments & WALK_HEAL_SKIP_FLAG) != 0) {
        return;
    }
    if (gameDataFlagTestBit(WALK_FLAG_STRONG_A) != 0 || gameDataFlagTestBit(WALK_FLAG_STRONG_B) != 0) {
        percent = WALK_PERCENT_STRONG;
    } else if (gameDataFlagTestBit(WALK_FLAG_WEAK) != 0) {
        percent = WALK_PERCENT_WEAK;
    }
    s32 partyPercent = percent;
    if (gameGetPlayerData()->equipment[6] == WALK_PLAYER_BONUS_ID) {
        percent += WALK_PLAYER_BONUS_PERCENT;
    }
    if (percent > 0) {
        s32 maxHp = gameGetPlayerData()->maxHp;
        s32 hp = gameGetPlayerData()->hp;
        s32 amount = maxHp * percent / 100;
        if (amount < 0) {
            amount = 0;
        }
        hp = amount + hp;
        if (hp > maxHp) {
            hp = maxHp;
        }
        s16 newHp = (s16)hp;
        PlayerDataA *player = gameGetPlayerData();
        player->hp = newHp > player->maxHp ? player->maxHp : newHp < 1 ? 1 : newHp;
    }
    if (partyPercent > 0 && gameDataFlagTestBit(WALK_FLAG_STRONG_A) != 0) {
        const s8 *reserve = gameGetSlotTable()->reserve;
        for (s32 i = 0; i < WALK_PARTY_SLOTS; i++) {
            if (reserve[i] < 0) {
                continue;
            }
            SlotRecordA *unit = gameGetSlotRecord(reserve[i]);
            if ((unit->ailments & WALK_AILMENT_DOWN) != 0) {
                continue;
            }
            if ((unit->ailments & WALK_AILMENT_NO_HP_LOSS) != 0) {
                continue;
            }
            walkUnitHeal(unit, partyPercent);
        }
    }
    const s8 *reserve = gameGetSlotTable()->reserve;
    for (s32 i = 0; i < WALK_PARTY_SLOTS; i++) {
        if (reserve[i] < 0) {
            continue;
        }
        SlotRecordA *unit = gameGetSlotRecord(reserve[i]);
        if ((unit->ailments & WALK_AILMENT_DOWN) != 0) {
            continue;
        }
        if ((unit->ailments & WALK_AILMENT_NO_HP_LOSS) != 0) {
            continue;
        }
        u16 skills[10] = {0};
        walkUnitCopySkills(unit, skills);
        for (s32 k = 0; k < 9; k++) {
            if (skills[k] != 0 && skills[k] == WALK_SKILL_HEAL) {
                walkUnitHeal(unit, WALK_SKILL_HEAL_PERCENT);
                break;
            }
        }
    }
}
