/* NON_MATCHING: 20 lines, VFP allocation only: retail zeroes the MP rate first (s16, then s17 = s16), sets
 * both rates to 100 through the register of the rate it sets first, and loads 3.5 before 100 (s22/s23). */
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
                mpRate = 100.0f;
                hpRate = mpRate;
                break;
            case 4:
                hpRate += 5.0f;
                break;
            case 5:
                mpRate += 3.5f;
                break;
            }
        }
        hpRate = hpRate < 0.0f ? 0.0f : (hpRate > 100.0f ? 100.0f : hpRate);
        mpRate = mpRate < 0.0f ? 0.0f : (mpRate > 100.0f ? 100.0f : mpRate);
        if (!playerPadTestBit(1) && !playerPadTestBit(10) && !playerPadTestBit(2)) {
            s16 hp = (s16)(FUN_0028d310() + (s32)((f32)FUN_00334038() * hpRate * 0.01f));
            playerSetClampedStat(hp);
            if (hp == 0) {
                gameGetPlayerData()->hp = 0;
            }
            s16 mp = (s16)(FUN_00333fb0() + (s32)((f32)FUN_00334048() * mpRate * 0.01f));
            playerSetClampedValue(mp);
            if (mp == 0) {
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
                    mpRate = 100.0f;
                    hpRate = mpRate;
                    break;
                case 4:
                    hpRate += 5.0f;
                    break;
                case 5:
                    mpRate += 3.5f;
                    break;
                }
            }
            hpRate = hpRate < 0.0f ? 0.0f : (hpRate > 100.0f ? 100.0f : hpRate);
            mpRate = mpRate < 0.0f ? 0.0f : (mpRate > 100.0f ? 100.0f : mpRate);
            if (!flagWordTestBit(record, 1) && !flagWordTestBit(record, 10) && !flagWordTestBit(record, 2)) {
                s16 hp = (s16)(record->hp + (s32)((f32)record->maxHp * hpRate * 0.01f));
                recordClampCurrentCount(record, hp);
                if (hp == 0) {
                    record->hp = 0;
                }
                s16 mp = (s16)(record->mp + (s32)((f32)record->maxMp * mpRate * 0.01f));
                selectionStateSetClamped(record, mp);
                if (mp == 0) {
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
