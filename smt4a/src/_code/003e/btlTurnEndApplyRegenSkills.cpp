/* NON_MATCHING: 14 lines, three allocation choices. For the player retail sets the HP percentage first and copies it
 * to the MP one (`vmov s17, s18; vmov s16, s17`, and the same with 100.0 in the full-recovery case), this build the
 * MP one first; in the party loop's full-recovery case retail sets both from the constant (`vmov s16, s23;
 * vmov s17, s23`) where this build copies the first; and for a unit's HP retail loads the current HP into r1 and
 * moves the share into r0, this build the other way round.
 * The skill loops are written in place: retail addresses the id array from one hoisted `mov r9, sp` in both loops,
 * which an inline helper taking the array does not give (it copies the pointer at each use, 115 lines). */
#include "common.h"
#include "mapnavi/naviMain.h"
#include "code/Code003e.h"
#include "battle/btlMain.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/GameDataAccess_Shard004B.h"
#include "util/BitsAndBytes_VariantF_Shard004B.h"

extern "C" {
void playerGetWords(u16 *out, s32 withUnit);
void playerClearFlagMask(u16 mask);
void halves34Copy(const SlotRecordA *src, u16 *out);
s32 FUN_003e0034(void);
void playerSetClampedStat(s32 value);
s32 FUN_003e0154(void);
s32 playerGetMaxMp(void);
void playerSetClampedValue(s32 value);
s32 recordSetClampedCurrent(SlotRecordA *record, s32 value);
s32 selectionStateSetClamped(SlotRecordA *record, s32 value);
void partyResetAndRefreshSlotStats(void);

/* What a passive skill restores at the end of a turn (bits 2-4 of its flags). */
enum {
    REGEN_HP_10 = 1,
    REGEN_MP_7 = 2,
    REGEN_FULL = 3,
    REGEN_HP_5 = 4,
    REGEN_MP_3_5 = 5
};

/* Clamps a recovery percentage to 0-100. */
static __inline void clamp(f32 *percent)
{
    if (*percent < 0.0f) {
        *percent = 0.0f;
    } else if (*percent > 100.0f) {
        *percent = 100.0f;
    }
}

/* `current` plus `percent` percent of `maximum`, as the 16-bit value the setters take. */
static __inline s32 regenValue(s32 maximum, f32 percent, s32 current)
{
    return (s16)((s32)((f32)maximum * percent * 0.01f) + current);
}

/* Applies the per-turn recovery skills to the player and every party unit when a turn ends. */
void btlTurnEndApplyRegenSkills(BtlMainStateA *battle)
{
    if (battle->commandFilter.mode == 1 || battle->commandFilter.mode == 10) {
        u16 skills[10];
        f32 hp = 0.0f;
        f32 mp = 0.0f;
        playerGetWords(skills, 1);
        for (s32 i = 0; i < 9; i++) {
            if (skills[i] != 0) {
                Table04ExtraRecord *skill = dataTable41FindById(skills[i]);
                if (skill != NULL) {
                    switch ((skill->flags & 0x1f) >> 2) {
                    case REGEN_HP_10:
                        hp += 10.0f;
                        break;
                    case REGEN_MP_7:
                        mp += 7.0f;
                        break;
                    case REGEN_FULL:
                        hp = 100.0f;
                        mp = 100.0f;
                        break;
                    case REGEN_HP_5:
                        hp += 5.0f;
                        break;
                    case REGEN_MP_3_5:
                        mp += 3.5f;
                        break;
                    }
                }
            }
        }
        clamp(&hp);
        clamp(&mp);
        if (playerHasFlagBit(1) == 0 && playerHasFlagBit(10) == 0) {
            s32 current = FUN_003e0024();
            s32 value = regenValue(FUN_003e0154(), hp, current);
            playerSetClampedStat(value);
            if (value == 0) {
                gameGetPlayerData()->hp = 0;
            }
            current = FUN_003e0034();
            value = regenValue(playerGetMaxMp(), mp, current);
            playerSetClampedValue(value);
            if (value == 0) {
                gameGetPlayerData()->mp = 0;
            }
        }
        u8 count = gameGetSlotTable()->count;
        SaveSlotTableA *table = gameGetSlotTable();
        for (s32 position = 0; position < count; position++) {
            f32 hp = 0.0f;
            f32 mp = 0.0f;
            SlotRecordA *unit;
            if (table->party[position] >= 0 && (unit = gameGetSlotRecord(table->party[position])) != NULL) {
                for (s32 i = 0; i < 10; i++) {
                    skills[i] = 0;
                }
                halves34Copy(unit, skills);
                for (s32 i = 0; i < 9; i++) {
                    if (skills[i] != 0) {
                        Table04ExtraRecord *skill = dataTable41FindById(skills[i]);
                        if (skill != NULL) {
                            switch ((skill->flags & 0x1f) >> 2) {
                            case REGEN_HP_10:
                                hp += 10.0f;
                                break;
                            case REGEN_MP_7:
                                mp += 7.0f;
                                break;
                            case REGEN_FULL:
                                hp = 100.0f;
                                mp = 100.0f;
                                break;
                            case REGEN_HP_5:
                                hp += 5.0f;
                                break;
                            case REGEN_MP_3_5:
                                mp += 3.5f;
                                break;
                            }
                        }
                    }
                }
                clamp(&hp);
                clamp(&mp);
                if (bitsAt60Test(unit, 1) == 0 && bitsAt60Test(unit, 10) == 0) {
                    s32 value = regenValue(recordGetScaledMaximum(unit), hp, unit->hp);
                    recordSetClampedCurrent(unit, value);
                    if (value == 0) {
                        unit->hp = 0;
                    }
                    value = regenValue(unit->maxMp, mp, unit->mp);
                    selectionStateSetClamped(unit, value);
                    if (value == 0) {
                        unit->mp = 0;
                    }
                }
            }
        }
    }
    if (playerHasFlagBit(1) != 0) {
        playerClearFlagMask(2);
        playerSetClampedStat(1);
    }
    partyResetAndRefreshSlotStats();
}

} /* extern "C" */
