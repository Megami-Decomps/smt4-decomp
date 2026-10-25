/* NON_MATCHING: the item merge loops and the passive-bonus loop are unrolled/scheduled differently from retail (207 vs 232 rows); the spoils application is the same. */
#include "common.h"
#include "util/CalleeContracts.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {

/* The battle spoils (only the fields read here). */
typedef struct BattleSpoils {
    /* 0x00 */ s32 itemId[6];
    /* 0x18 */ s32 itemCount[6];
    /* 0x30 */ s32 gold;
    /* 0x34 */ s32 experience;
    /* 0x38 */ u16 battleId;
} BattleSpoils;

/* The result screen block (only the fields written here, by their offsets). */
typedef struct ResultBlock {
    /* 0x0000 */ u8 unk0000[0x35B4];
    /* 0x35B4 */ s32 totalExperience;
    /* 0x35B8 */ s32 shareBySlot[24];
    /* 0x3618 */ s32 gainedItemId[6];
    /* 0x3630 */ s32 gainedItemCount[6];
    /* 0x3648 */ u8 unk3648[8];
    /* 0x3650 */ s32 totalGold;
} ResultBlock;

/* The party slot table (only the fields read here). */
typedef struct PartySlots {
    u8 unk0000[0x90F0];
    s8 unitIndex[24];
    s8 leaders[3];                   /* 0x9108: the active front-line members */
} PartySlots;

typedef struct SpoilsUnit {
    u8 unk00[0x34];
    u16 skills[8];
    u8 unk44[6];
    u8 level;                        /* 0x4A: selects the share slot */
} SpoilsUnit;

typedef struct PassiveRecord {
    u8 unk00[0x2F];
    u8 percent;                      /* the experience bonus percent */
} PassiveRecord;

extern ResultBlock *g_result;

PartySlots *gameGetSlotTable(void);
void *gameGetPlayerData(void);
void resultSetMenuState(ResultBlock *result, s32 arg);
void FUN_00269dc8(void);
void FUN_00203640(u16 battleId);
s32 mapMainIsBusy(void);
s32 lmapMainIsRunning(void);
void bgmReleaseStopped(void);
void soundChannelStopAll(s32 channel);
void FUN_0027581c(void);
s32 FUN_0033361c(void);
void bgmRequestSelectedChannelFade(u32 frames);
void soundChannelRequestIfEnabled(u32 id, s32 arg);
void gameCounterAddSaturating(s32 counter, s32 amount);
s32 playerPadTestBit(u32 bit);
s32 flagWordTestBit(SpoilsUnit *unit, u32 bit);
PassiveRecord *passiveSkillLookupRecord(u32 skill);

/* Applies a finished battle's spoils to the result screen: stops the battle music, adds gold and
 * the items (merging stacks), counts the battle, adds the experience and shares it out to the
 * party, scaled by each member's passive experience bonuses (members outside the front line
 * get 30%). */
void FUN_002cdf2c(BattleSpoils *spoils)
{
    ResultBlock *result = g_result;
    PartySlots *slots = gameGetSlotTable();

    gameGetPlayerData();
    resultSetMenuState(result, 0);
    FUN_00269dc8();
    FUN_00203640(spoils->battleId);
    if (mapMainIsBusy() != 0 || lmapMainIsRunning() != 0) {
        bgmReleaseStopped();
        soundChannelStopAll(15);
        FUN_0027581c();
    } else if (FUN_0033361c() == 0) {
        bgmRequestSelectedChannelFade(30);
    }
    soundChannelRequestIfEnabled(0x100003C, 0);
    s32 gold = spoils->gold;
    s32 itemTotal = 0;

    result->totalGold += gold;
    for (s32 i = 0; i < 6; i++) {
        s32 id = spoils->itemId[i];

        if (id == 0 || spoils->itemCount[i] == 0) {
            continue;
        }
        for (s32 j = 0; j < 6; j++) {
            if (result->gainedItemId[j] == id) {
                result->gainedItemCount[j] += spoils->itemCount[i];
                break;
            }
            if (result->gainedItemId[j] == 0) {
                result->gainedItemId[j] = id;
                result->gainedItemCount[j] = spoils->itemCount[i];
                break;
            }
        }
        itemTotal += spoils->itemCount[i];
    }
    if (FUN_00298f88(spoils->battleId) == 0) {
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
        SpoilsUnit *unit = static_cast<SpoilsUnit *>(gameGetUnitRecord(slots->unitIndex[i]));

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
            u32 skill = unit->skills[k];

            if (skill != 0) {
                PassiveRecord *record = passiveSkillLookupRecord(skill);

                if (record != NULL && record->percent != 0) {
                    multiplier = (f32)record->percent * 0.01f * multiplier;
                }
            }
        }
        result->shareBySlot[unit->level] += (share * (s32)(multiplier * 100.0f)) / 100;
    }
}

}
