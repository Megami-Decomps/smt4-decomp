/* NON_MATCHING: only register allocation differs (retail keeps the base percentage and a zero constant in extra callee-saved registers, and the first side-unit clamp stores the limit register). */
#include "common.h"
#include "util/CalleeContracts.h"
#include "gamedata/PlayerDataBlock.h"

struct StepPlayerData {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u16 id;
    /* 0x0E */ u8 unk0E[0x0E];
    /* 0x1C */ s16 maxHp;
    /* 0x1E */ s16 maxMp;
    /* 0x20 */ u8 unk20[0x0A];
    /* 0x2A */ s16 hp;
    /* 0x2C */ s16 mp;
    /* 0x2E */ u8 unk2E[0x44];
    /* 0x72 */ u16 flags;
};

struct StepUnitRecord {
    /* 0x00 */ u8 unk00[0x0E];
    /* 0x0E */ s16 maxHp;
    /* 0x10 */ s16 maxMp;
    /* 0x12 */ u8 unk12[0x18];
    /* 0x2A */ s16 hp;
    /* 0x2C */ s16 mp;
    /* 0x2E */ u8 unk2E[6];
    /* 0x34 */ u16 skills[8];
    /* 0x44 */ u16 flags;
};

/* The save's slot table: the three side slots at 0x9108 (-1 = empty). */
struct StepSlotTable {
    /* 0x0000 */ u8 unk0000[0x9108];
    /* 0x9108 */ s8 side[3];
};

extern "C" {
StepSlotTable *gameGetSlotTable(void);
StepUnitRecord *gameGetUnitRecord(s32 slot);

/* A percentage of max, never negative. */
static __inline u32 unitHasFlag(const StepUnitRecord *unit, u32 bit)
{
    return (static_cast<u32>(unit->flags) & (1 << (bit & 0xFF))) != 0;
}

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
    const s8 *side = gameGetSlotTable()->side;
    for (s32 i = 0; i < count; ++i) {
        if (side[i] >= 0) {
            StepUnitRecord *unit = gameGetUnitRecord(side[i]);
            if (!unitHasFlag(unit, 1) && !unitHasFlag(unit, 10) && !unitHasFlag(unit, 2))
                unitHealMpPercent(unit, percent);
        }
    }
}

/* Heals the usable side units that know the regeneration skill. */
static __inline void healRegenSkillUnitsMp(s32 percent, s32 count)
{
    const s8 *side = gameGetSlotTable()->side;
    for (s32 i = 0; i < count; ++i) {
        if (side[i] >= 0) {
            StepUnitRecord *unit = gameGetUnitRecord(side[i]);
            if (!unitHasFlag(unit, 1) && !unitHasFlag(unit, 10) && !unitHasFlag(unit, 2)) {
                u16 skills[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
                if (unit != NULL) {
                    for (s32 k = 0; k < 8; ++k)
                        skills[k] = unit->skills[k];
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
void FUN_003a6988(void)
{
    s32 percent = 0;
    if (!(reinterpret_cast<StepPlayerData *>(gameGetPlayerData())->flags & 2)) {
        if (flagBitIsSet(0x67) || flagBitIsSet(0x65))
            percent = 5;
        else if (flagBitIsSet(0x64))
            percent = 2;
        s32 total = percent;
        if (reinterpret_cast<StepPlayerData *>(gameGetPlayerData())->id == 0x2AB)
            total += 2;
        if (total > 0) {
            s32 max = reinterpret_cast<StepPlayerData *>(gameGetPlayerData())->maxMp;
            s32 mp = reinterpret_cast<StepPlayerData *>(gameGetPlayerData())->mp + percentOfMax(max, total);
            if (mp > max)
                mp = max;
            s16 value = mp;
            StepPlayerData *player = reinterpret_cast<StepPlayerData *>(gameGetPlayerData());
            s32 limit = player->maxMp;
            if (value > limit)
                value = limit;
            else if (value < 1)
                value = 1;
            player->mp = value;
        }
        if (percent > 0 && flagBitIsSet(0x67))
            healSideUnitsMp(percent, 3);
        healRegenSkillUnitsMp(2, 3);
    }
}

} /* extern "C" */
