/* NON_MATCHING: only register allocation differs (retail keeps the base percentage and a zero constant in extra callee-saved registers, and the first side-unit clamp stores the limit register). */
#include "common.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {

/* A percentage of max, never negative. */
static u32 unitHasFlag(const StatBlock *unit, u32 bit)
{
    return (static_cast<u32>(unit->ailments) & (1 << (bit & 0xFF))) != 0;
}

static s32 percentOfMax(s32 max, s32 percent)
{
    s32 amount = max * percent / 100;
    return amount < 0 ? 0 : amount;
}

/* Heals the unit by a percentage of its maximum HP, keeping the result in 1..max. */
static void unitHealHpPercent(StatBlock *unit, s32 percent)
{
    s32 max = unit->maxHp;
    s32 hp = unit->hp + percentOfMax(max, percent);
    if (hp > max)
        hp = max;
    s16 value = hp;
    if (unit != NULL) {
        s32 limit = unit->maxHp;
        if (value > limit)
            value = limit;
        else if (value < 1)
            value = 1;
        unit->hp = value;
    }
}

/* Heals every usable side unit by the percentage. */
static void healSideUnits(s32 percent, s32 count)
{
    const s8 *side = gameGetSlotTable()->active;
    for (s32 i = 0; i < count; ++i) {
        if (side[i] >= 0) {
            StatBlock *unit = gameGetUnitRecord(side[i]);
            if (!unitHasFlag(unit, 1) && !unitHasFlag(unit, 10) && !unitHasFlag(unit, 2))
                unitHealHpPercent(unit, percent);
        }
    }
}

/* Heals the usable side units that know the regeneration skill. */
static void healRegenSkillUnits(s32 percent, s32 count)
{
    const s8 *side = gameGetSlotTable()->active;
    for (s32 i = 0; i < count; ++i) {
        if (side[i] >= 0) {
            StatBlock *unit = gameGetUnitRecord(side[i]);
            if (!unitHasFlag(unit, 1) && !unitHasFlag(unit, 10) && !unitHasFlag(unit, 2)) {
                u16 skills[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
                if (unit != NULL) {
                    for (s32 k = 0; k < 8; ++k)
                        skills[k] = unit->resist[k];
                }
                for (s32 k = 0; k < 9; ++k) {
                    if (skills[k] != 0 && skills[k] == 0x1C6) {
                        unitHealHpPercent(unit, percent);
                        break;
                    }
                }
            }
        }
    }
}

/* Applies the walking HP recovery to the player and the party's side units. */
void FUN_003a66c4(void)
{
    s32 percent = 0;
    if (!(gameGetPlayerData()->ailments & 2)) {
        if (flagBitIsSet(0x6B) || flagBitIsSet(0x69))
            percent = 5;
        else if (flagBitIsSet(0x68))
            percent = 2;
        s32 total = percent;
        if (gameGetPlayerData()->equipped.accessory == 0x2A6)
            total += 2;
        if (total > 0) {
            s32 max = gameGetPlayerData()->maxHp;
            s32 hp = gameGetPlayerData()->hp + percentOfMax(max, total);
            if (hp > max)
                hp = max;
            s16 value = hp;
            PlayerDataIV *player = gameGetPlayerData();
            s32 limit = player->maxHp;
            if (value > limit)
                value = limit;
            else if (value < 1)
                value = 1;
            player->hp = value;
        }
        if (percent > 0 && flagBitIsSet(0x6B))
            healSideUnits(percent, 3);
        healRegenSkillUnits(2, 3);
    }
}

} /* extern "C" */
