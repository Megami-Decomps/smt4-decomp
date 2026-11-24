#include "common.h"
#include "battle/btlMain.h"
#include "gamedata/GameSaveData.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/FlagBitTests.h"
#include "shard/PassiveSkill.h"
#include "code/Code0029_Smt4.h"
#include <string.h>

extern "C" {
s32 FUN_0028d310(void); /* the player's HP */
s32 FUN_00333fb0(void); /* the player's MP */
s32 FUN_00334038(void); /* the player's maximum HP */
s32 FUN_00334048(void); /* the player's maximum MP */
void playerSetClampedStat(s32 value);
void playerSetClampedValue(s32 value);
void padClearBits(u16 mask);
void playerCollectPassiveSkillBits(u16 *skills, int withSource); // declcheck: local (the shared declaration takes an opaque Dest)
void halves34Copy(StatBlock *record, u16 *skills); // declcheck: local (the shared declaration takes an opaque Source)
s32 recordClampCurrentCount(StatBlock *record, s32 value);
s32 selectionStateSetClamped(StatBlock *record, s32 value);

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

/* At the end of a battle with result 1 or 10, restores the HP and MP of the player and the stocked demons
 * by the percentages of their regeneration passive skills; then a downed player gets back up with 1 HP. */
void btlTurnEndApplyRegenSkills(BtlMainState *battle)
{
    if (battle->core.result == 1 || battle->core.result == 10) {
        u16 skills[10];
        f32 hpRate = 0.0f;
        f32 mpRate = 0.0f;
        playerCollectPassiveSkillBits(skills, 1);
        for (s32 j = 0; j < 9; j++) {
            if (skills[j] == 0) {
                continue;
            }
            const PassiveSkillRecord *skill = passiveSkillLookupRecord(skills[j]);
            if (skill == NULL) {
                continue;
            }
            switch ((skill->affinity & 0x1F) >> 2) {
            case 1:
                hpRate += 10.0f;
                break;
            case 2:
                mpRate += 7.0f;
                break;
            case 3:
                hpRate = mpRate = 100.0f;
                break;
            case 4:
                hpRate += 5.0f;
                break;
            case 5:
                mpRate += 3.5f;
                break;
            }
        }
        clamp(&hpRate);
        clamp(&mpRate);
        if (!playerPadTestBit(1) && !playerPadTestBit(10) && !playerPadTestBit(2)) {
            s32 current = FUN_0028d310();
            s32 value = regenValue(FUN_00334038(), hpRate, current);
            playerSetClampedStat(value);
            if (value == 0) {
                gameGetPlayerData()->hp = 0;
            }
            current = FUN_00333fb0();
            value = regenValue(FUN_00334048(), mpRate, current);
            playerSetClampedValue(value);
            if (value == 0) {
                gameGetPlayerData()->mp = 0;
            }
        }
        u8 count = gameGetSlotTable()->stockCount;
        SaveSlotTableIV *table = gameGetSlotTable();
        for (s32 i = 0; i < count; i++) {
            hpRate = 0.0f;
            mpRate = 0.0f;
            if (table->stock[i] < 0) {
                continue;
            }
            StatBlock *record = gameGetUnitRecord(table->stock[i]);
            if (record == NULL) {
                continue;
            }
            memset(skills, 0, sizeof(skills));
            halves34Copy(record, skills);
            for (s32 j = 0; j < 9; j++) {
                if (skills[j] == 0) {
                    continue;
                }
                const PassiveSkillRecord *skill = passiveSkillLookupRecord(skills[j]);
                if (skill == NULL) {
                    continue;
                }
                switch ((skill->affinity & 0x1F) >> 2) {
                case 1:
                    hpRate += 10.0f;
                    break;
                case 2:
                    mpRate += 7.0f;
                    break;
                case 3:
                    hpRate = mpRate = 100.0f;
                    break;
                case 4:
                    hpRate += 5.0f;
                    break;
                case 5:
                    mpRate += 3.5f;
                    break;
                }
            }
            clamp(&hpRate);
            clamp(&mpRate);
            if (!flagWordTestBit(record, 1) && !flagWordTestBit(record, 10) && !flagWordTestBit(record, 2)) {
                s32 value = regenValue(record->maxHp, hpRate, record->hp);
                recordClampCurrentCount(record, value);
                if (value == 0) {
                    record->hp = 0;
                }
                value = regenValue(record->maxMp, mpRate, record->mp);
                selectionStateSetClamped(record, value);
                if (value == 0) {
                    record->mp = 0;
                }
            }
        }
    }
    if (playerPadTestBit(1)) {
        padClearBits(2);
        playerSetClampedStat(1);
    }
}
}
