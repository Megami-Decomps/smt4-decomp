/* NON_MATCHING: the item merge loops and the passive-bonus loop are unrolled/scheduled differently from retail (207 vs 232 rows); the spoils application is the same. */
#include "common.h"
#include "shard/PassiveSkill.h"
#include "result/Result.h"
#include "result/ResultSpoils.h"
#include "code/Code0029.h"
#include "gamedata/UnitRecordAccess.h"
#include "code/Code001b.h"

extern "C" {

/* The party slot table (only the fields read here). */
typedef struct PartySlots {
    u8 unk0000[0x90F0];
    s8 unitIndex[24];
    s8 leaders[3];                   /* 0x9108: the active front-line members */
} PartySlots;



PartySlots *gameGetSlotTable(void);
void *gameGetPlayerData(void);
void resultSetMenuState(ResultWork *result, s32 arg);
void uiQuestCreate(void);
void FUN_00203640(u16 battleId);
s32 mapMainIsBusy(void);
s32 lmapMainIsRunning(void);
void bgmReleaseStopped(void);
void soundChannelStopAll(s32 channel);
void resourceTableReleaseHandles(void);
s32 bgmHasPendingResume(void);
void bgmRequestSelectedChannelFade(u32 frames);
void soundChannelRequestIfEnabled(u32 id, s32 arg);
void gameCounterAddSaturating(s32 counter, s32 amount);
s32 playerPadTestBit(u32 bit);
s32 flagWordTestBit(StatBlock *unit, u32 bit);

/* Applies a finished battle's spoils to the result screen: stops the battle music, adds gold and
 * the items (merging stacks), counts the battle, adds the experience and shares it out to the
 * party, scaled by each member's passive experience bonuses (members outside the front line
 * get 30%). */
void resultApplySpoils(ResultSpoils *spoils)
{
    ResultWork *result = g_result;
    PartySlots *slots = gameGetSlotTable();

    gameGetPlayerData();
    resultSetMenuState(result, 0);
    uiQuestCreate();
    FUN_00203640(spoils->sourceId);
    if (mapMainIsBusy() != 0 || lmapMainIsRunning() != 0) {
        bgmReleaseStopped();
        soundChannelStopAll(15);
        resourceTableReleaseHandles();
    } else if (bgmHasPendingResume() == 0) {
        bgmRequestSelectedChannelFade(30);
    }
    soundChannelRequestIfEnabled(0x100003C, 0);
    s32 gold = spoils->gold;
    s32 itemTotal = 0;

    result->gold += gold;
    for (s32 i = 0; i < 6; i++) {
        s32 id = spoils->itemId[i];

        if (id == 0 || spoils->itemCount[i] == 0) {
            continue;
        }
        for (s32 j = 0; j < 6; j++) {
            if (result->itemIds[j] == id) {
                result->itemCounts[j] += spoils->itemCount[i];
                break;
            }
            if (result->itemIds[j] == 0) {
                result->itemIds[j] = id;
                result->itemCounts[j] = spoils->itemCount[i];
                break;
            }
        }
        itemTotal += spoils->itemCount[i];
    }
    if (dataTable1bOr1cRecordHasFlag1(spoils->sourceId) == 0) {
        gameCounterAddSaturating(0x22, 1);
        gameCounterAddSaturating(0x23, gold);
        gameCounterAddSaturating(0x24, itemTotal);
    }
    s32 experience = spoils->experience;

    if (playerPadTestBit(1) == 0 && playerPadTestBit(10) == 0) {
        result->totalExperience += experience;
    }
    for (s32 i = 0; i < 24; i++) {
        if (slots->unitIndex[i] < 0) {
            continue;
        }
        StatBlock *unit = gameGetUnitRecord(slots->unitIndex[i]);

        if (flagWordTestBit(unit, 1) != 0 || flagWordTestBit(unit, 10) != 0 || flagWordTestBit(unit, 2) != 0) {
            continue;
        }
        s32 inFront = 0;
        s8 index = slots->unitIndex[i];

        if (slots->leaders[0] == index || slots->leaders[1] == index || slots->leaders[2] == index) {
            inFront = 1;
        }
        s32 share = experience;

        if (!inFront) {
            share = (s32)((f32)experience * 0.3f);
            if (experience != 0 && share < 1) {
                share = 1;
            }
        }
        f32 multiplier = 1.0f;

        for (s32 k = 0; k < 8; k++) {
            u32 skill = unit->skills.ids[k];

            if (skill != 0) {
                const PassiveSkillRecord *record = passiveSkillLookupRecord(skill);

                if (record != NULL && record->experience.expBonus != 0) {
                    multiplier = (f32)record->experience.expBonus * 0.01f * multiplier;
                }
            }
        }
        result->unitExperience[unit->growth.slot] += (share * (s32)(multiplier * 100.0f)) / 100;
    }
}

}
