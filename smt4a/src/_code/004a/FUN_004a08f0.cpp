/* NON_MATCHING: 80 lines: retail hoists the zero for the skill buffer into sl at entry and gives the two inlined MP
 * heals of the side-unit loops other scratch registers (r1/r3/ip against r2/r3). */
#include "common.h"
#include "gamedata/SaveSlotTable.h"
#include "shard/W6_W6Match8_StatGrowth.h"
#include "gamedata/GamePlayerData.h"

struct StepUnitRecord {
    /* 0x00 */ u8 unk00[0x0E];
    /* 0x0E */ s16 maxHp;
    /* 0x10 */ s16 maxMp;
    /* 0x12 */ u8 unk12[0x18];
    /* 0x2A */ s16 hp;
    /* 0x2C */ s16 mp;
    /* 0x2E */ u8 unk2E[6];
    /* 0x34 */ u16 skills[8];
    /* 0x44 */ u8 unk44[0x1C];
    /* 0x60 */ u16 flags;
};

extern "C" {
StepUnitRecord *gameGetSlotRecord(s32 slot);

/* Whether the unit's flag bit is set. */
static __inline u32 unitHasFlag(const StepUnitRecord *unit, u32 bit)
{
    return (static_cast<u32>(unit->flags) & (1 << (bit & 0xFF))) != 0;
}

/* A percentage of max, never negative. */
static __inline s32 percentOfMax(s32 max, s32 percent)
{
    s32 amount = max * percent / 100;
    return amount < 0 ? 0 : amount;
}

/* Heals the unit by a percentage of its maximum MP, keeping the result in 1..max. */
static __inline void unitHealMpPercent(StepUnitRecord *unit, s32 percent)
{
    s32 max = unit->maxMp;
    s32 mp = unit->mp + percentOfMax(max, percent);
    if (mp > max)
        mp = max;
    s16 value = mp;
    if (unit != NULL) {
        s32 limit = unit->maxMp;
        if (value > limit)
            value = limit;
        else if (value < 1)
            value = 1;
        unit->mp = value;
    }
}

/* Heals every usable side unit by the percentage. */
static __inline void healSideUnitsMp(s32 percent, s32 count)
{
    const s8 *side = gameGetSlotTable()->reserve;
    for (s32 i = 0; i < count; ++i) {
        if (side[i] >= 0) {
            StepUnitRecord *unit = gameGetSlotRecord(side[i]);
            if (!unitHasFlag(unit, 1) && !unitHasFlag(unit, 10))
                unitHealMpPercent(unit, percent);
        }
    }
}

/* Heals the usable side units that know the regeneration skill. */
static __inline void healRegenSkillUnitsMp(s32 percent, s32 count)
{
    const s8 *side = gameGetSlotTable()->reserve;
    for (s32 i = 0; i < count; ++i) {
        if (side[i] >= 0) {
            StepUnitRecord *unit = gameGetSlotRecord(side[i]);
            if (!unitHasFlag(unit, 1) && !unitHasFlag(unit, 10)) {
                u16 skills[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
                if (unit != NULL) {
                    skills[0] = unit->skills[0];
                    skills[1] = unit->skills[1];
                    skills[2] = unit->skills[2];
                    skills[3] = unit->skills[3];
                    skills[4] = unit->skills[4];
                    skills[5] = unit->skills[5];
                    skills[6] = unit->skills[6];
                    skills[7] = unit->skills[7];
                }
                for (s32 k = 0; k < 9; ++k) {
                    if (skills[k] != 0 && skills[k] == 0x1C7) {
                        unitHealMpPercent(unit, percent);
                        break;
                    }
                }
            }
        }
    }
}

/* Applies the walking MP recovery to the player and the party's side units. */
void FUN_004a08f0(void)
{
    s32 percent = 0;
    if (!(gameGetPlayerData()->ailments & 2)) {
        if ((s32)gameDataFlagTestBit(0x67) || (s32)gameDataFlagTestBit(0x65))
            percent = 5;
        else if ((s32)gameDataFlagTestBit(0x64))
            percent = 2;
        s32 sidePercent = percent;
        if (gameGetPlayerData()->equipped.accessory == 0x2AB)
            percent += 2;
        if (percent > 0) {
            s32 max = gameGetPlayerData()->maxMp;
            s32 mp = gameGetPlayerData()->mp + percentOfMax(max, percent);
            if (mp > max)
                mp = max;
            s16 value = mp;
            PlayerDataA *player = gameGetPlayerData();
            s32 limit = player->maxMp;
            if (value > limit)
                value = limit;
            else if (value < 1)
                value = 1;
            player->mp = value;
        }
        if (sidePercent > 0 && (s32)gameDataFlagTestBit(0x67))
            healSideUnitsMp(sidePercent, 3);
        healRegenSkillUnitsMp(2, 3);
    }
}

} /* extern "C" */
