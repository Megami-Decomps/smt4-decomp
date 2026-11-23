/* NON_MATCHING: every state's calls, tests and stores are retail's (923 rows against 922). What differs: retail's
 * frame is 8 bytes larger (396; `result` at sp+376, the slot table at sp+388, the item phase's spills at
 * sp+8/+40/+44 and its picks at sp+28), which moves the registers of state 13; the shared `progress->state = N`
 * store sits after state 0's tests in retail and after state 3 here (retail keeps state 0's `= 5` in state 1 and
 * state 3's `= 11` apart from state 10's); state 11's loop tests `count > 0` on entry and `i < count`, then
 * `i < 32`, at its end, where this build lays the loop out with its exit code first; and retail stores
 * `pending |= 4` before the item list is cleared, this build in the middle of it. */
#include "common.h"
#include <stdio.h>
#include "camp/CampCec/CampCecRecv.h"
#include "camp/CampCec/CampCecSetting.h"
#include "AsdSDK/AsdMemCopy.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "camp/CampMenuEntry.h"
#include "code/Code0028.h"
#include "code/Code0035.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameDataAccess_Smt4a.h"
#include "shard/GameDataBlocks.h"
#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/W6_W6Match3_OnlineValueCompletion.h"
#include "shop/ShopItemDescription.h"
#include "ui/UiControl.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/SaveSlotTable.h"
#include "script/scrScriptProcess.h"
#include "shard/W6_W6Match1_Table25Record.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"

struct PlayerSummary;

/* Rows of data table 0x4A, the StreetPass reward tables. */
struct CecRewardTier {     /* type 1: the base amounts for a number of new records */
    /* 0x00 */ s16 records;
    /* 0x02 */ s16 amountB;
    /* 0x04 */ s16 amountA;
    /* 0x06 */ s16 unk06;
};
struct CecRewardBonus {    /* type 2: a random bonus each time the total is a multiple of `every` */
    /* 0x00 */ s16 every;
    /* 0x02 */ s16 kind;
    /* 0x04 */ s16 minimum;
    /* 0x06 */ s16 maximum;
};
struct CecStatTier {       /* type 3: the stat points for a number of new records */
    /* 0x00 */ s16 records;
    /* 0x02 */ s16 points;
};

extern "C" {

extern CampCecRecv *g_campCecRecv;
extern const u32 DAT_0052c758[10];   /* the item gift kind of every fifth record, in a cycle of ten */

char *libc_strcpy(char *destination, const char *source); // declcheck: local (the shared header keeps the decompiler's word-pointer view)
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
void scriptProcessSetMode(ScriptProcess *process, s32 mode);
u32 maskToCode(u32 mask);
u32 dataStoreGetProgress(void);
u32 dataStoreGetValue50(void);
u32 dataStoreIsIdle(void);
u8 dataStoreIsReady(void);
u32 dataStoreIsFinished(void);
void dataStoreShutdown(void);
CampCecReceivedRecord *dataStoreGetEntry(s32 index);
CampCecReceivedRecord *cecProcessGetEntry(u32 index);
void cecProcessCall1(void);
void cecProcessCall3(void);
void FUN_0031d5e8(u32 value);
void runWinClose(void);
void sysPlaySe(u32 id);
u32 messageMainStartMenuAnimationIfEnabled(void);
void campCecSetValue(u8 value);
void gameDataBlocksReleaseHold(u32 bits);
void gameDataFlagsClearBits(u32 mask);
u8 gameDataTestFlags(u8 mask);
u32 gameDataBlocksGetWord27E90(void);
void gameDataAddMoneySaturating(u32 amount);
s32 gameDataGetRecordValue(void);
u8 FUN_00280250(void);
void FUN_0036d41c(void);
u32 FUN_0033004c(void);
void cecRankingRebuild(void);
void FUN_00330b7c(void);
u8 FUN_0031cee0(void);
SlotRecordA *stockFindSelectedUnit(void);
Table25Record *dataTable25Section0FindById(s32 id);
void slotNameDisplaySetEntry(CampCecReceivedRecord *record, s32 entryId);
u32 playerSummaryIsIncomplete(CampCecReceivedRecord *record);
void savedRecordInsertAtFront(const CampCecReceivedRecord *record);
void FUN_002a17d4(const CampCecReceivedRecord *record);
void playerSummaryFill(PlayerSummary *summary);
u32 dataTable4ACount(void);
u32 dataTable4AType1Count(void);
u32 dataTable4AType2Count(void);
CecStatTier *dataTable4AGetEntry(s32 index);
CecRewardTier *dataTable4AType1GetEntry8(s32 index);
CecRewardBonus *dataTable4AGetEntry8(s32 index);
s32 randBetween(s32 minimum, s32 maximum);
s32 itemGetStackLimit(u32 id);
void __aeabi_memset4(void *destination, u32 size, s32 value);

/* Received record `index`: the DataStore copy when the screen downloads, else the cec inbox batch. */
static __inline CampCecReceivedRecord *receivedRecord(CampCecRecv *recv, s32 index)
{
    CampCecReceivedRecord *record;
    if (recv->received.source == 0) {
        record = cecProcessGetEntry(index);
    } else {
        record = &recv->received.entries[index];
    }
    return record;
}

/* Demon gift `index` of the screen's table, or NULL. */
static __inline CampCecDemonGift *demonGift(u32 index)
{
    CampCecDemonGift *gift = NULL;
    if (index < CAMPCEC_DEMON_GIFT_COUNT) {
        gift = &g_campCecRecv->receive.gifts[index];
    }
    return gift;
}

/* The receive screen's download state: waits for the DataStore or the cec inbox, takes the received
 * records, works out what they earn (reward amounts, a demon, stat points, items) and loads the demon's
 * talk script before handing over to the state `pending` selects. Returns 3 when the state is over. */
s32 campCecRecvDownloadState(CampCecRecv *recv)
{
    CampCecRecvProgress *progress = &recv->receive.progress;
    s32 result = 3;
    s32 i;
    u32 phase;

    switch (progress->state) {
    case 0:
        scrRunOpcodesStub(recv->receive.script);
        phase = dataStoreGetProgress();
        if (phase >= 1 && phase < 4) {
            FUN_0031d5e8(125);
            progress->state = 1;
        } else if (phase == 5) {
            progress->state = 5;
        }
        break;
    case 1:
        scrRunOpcodesStub(recv->receive.script);
        phase = dataStoreGetProgress();
        if (phase >= 2 && phase < 4) {
            FUN_0031d5e8(127);
            progress->state = 2;
        } else if (phase == 5) {
            progress->state = 5;
        }
        break;
    case 2:
        scrRunOpcodesStub(recv->receive.script);
        dataStoreGetProgress();
        if (dataStoreIsIdle() && dataStoreIsReady()) {
            runWinClose();
            gameDataBlocksReleaseHold(2);
            gameDataFlagsClearBits(2);
            scrScriptProcessStartEntry(recv->receive.script, 43);
            sysPlaySe(146);
            progress->state = 3;
        } else if (!dataStoreIsIdle()) {
            progress->state = 5;
        }
        break;
    case 3:
        if (scrRunOpcodesStub(recv->receive.script) != 2) {
            break;
        }
        progress->count = dataStoreGetValue50();
        for (i = 0; i < 10 && i < progress->count; i++) {
            recv->received.entries[i] = *dataStoreGetEntry(i);
        }
        if (!dataStoreIsFinished()) {
            return 3;
        }
        dataStoreShutdown();
        progress->state = 11;
        break;
    case 5:
        if (dataStoreIsFinished()) {
            dataStoreShutdown();
            gameDataBlocksReleaseHold(2);
            gameDataFlagsClearBits(2);
            runWinClose();
            scrScriptProcessStartEntry(recv->receive.script, 44);
            messageSetMode(1);
            sysPlaySe(146);
            progress->state = 6;
        }
        break;
    case 6:
        if (scrRunOpcodesStub(recv->receive.script) == 2) {
            if (messageGetChoiceResult() == 0) {
                campCecSetValue(1);
            }
            recv->receive.nextState = maskToCode(recv->receive.pending);
            messageSetMode(0);
        }
        break;
    case 8:
        if (recv->received.source == 1) {
            if (dataStoreIsIdle() && dataStoreIsReady()) {
                gameDataBlocksReleaseHold(2);
                gameDataFlagsClearBits(2);
                progress->count = dataStoreGetValue50();
                if (progress->count > 0) {
                    progress->state = 11;
                } else {
                    recv->receive.nextState = maskToCode(recv->receive.pending);
                }
            } else if (dataStoreIsIdle()) {
                gameDataAddHomeButtonHold(2);
                gameDataBlocksAddFlags(2);
            } else {
                gameDataBlocksReleaseHold(2);
                gameDataFlagsClearBits(2);
                recv->receive.pending |= 0x20;
                recv->receive.nextState = maskToCode(recv->receive.pending);
            }
        } else if (recv->receive.useInbox && gameDataTestFlags(0x20)) {
            cecProcessCall3();
            progress->state = 9;
        } else {
            recv->receive.nextState = 9;
            runWinClose();
        }
        break;
    case 9:
        gameDataAddHomeButtonHold(2);
        gameDataBlocksAddFlags(2);
        FUN_00280250();
        progress->count = asdCecInboxGetMessageCount();
        if (progress->count > 0) {
            progress->state = 10;
        } else {
            FUN_0036d41c();
            gameDataBlocksReleaseHold(2);
            gameDataFlagsClearBits(2);
            runWinClose();
            scrScriptProcessStartEntry(recv->receive.script, 36);
            progress->state = 12;
        }
        break;
    case 10:
        if (FUN_0033004c()) {
            FUN_0036d41c();
            cecProcessCall1();
            gameDataBlocksReleaseHold(2);
            gameDataFlagsClearBits(2);
            progress->state = 11;
        }
        break;
    case 11: {
        /* Take every complete record: it joins the saved records and counts as one more StreetPass. */
        recv->receive.previousTotal = gameDataBlocksGetWord27E90();
        s32 accepted = 0;
        for (i = 0; i < 32 && i < progress->count; i++) {
            if (recv->received.source != 0) {
                if (i >= 10) {
                    break;
                }
                if (recv->received.source != 1) {
                    break;
                }
            }
            CampCecReceivedRecord *record = receivedRecord(recv, i);
            if (record->demonId == 0) {
                slotNameDisplaySetEntry(record, 0);
            }
            if (!playerSummaryIsIncomplete(record)) {
                accepted++;
                record->selectedId = record->demonId;
                savedRecordInsertAtFront(record);
                FUN_002a17d4(record);
                gameDataAddMoneySaturating(1);
                s32 total = gameDataBlocksGetWord27E90();
                if (total % 100 == 0 && total > 0) {
                    cecRankingRebuild();
                    FUN_00330b7c();
                    if (gameFlagIsSet(0x45B)) {
                        recv->receive.pending |= 0x10;
                    }
                }
            }
        }
        progress->count = accepted;
        if (accepted != 0) {
            entryTableResetAndInit(0, accepted, 0xFFFFFFFF, 0);
            scrScriptProcessStartEntry(recv->receive.script, 35);
            progress->state = 13;
            runWinClose();
        } else {
            scrScriptProcessStartEntry(recv->receive.script, 36);
            progress->state = 12;
            runWinClose();
        }
        break;
    }
    case 12:
        if (scrRunOpcodesStub(recv->receive.script) == 2) {
            recv->receive.nextState = 9;
        }
        break;
    case 13:
        if (scrRunOpcodesStub(recv->receive.script) != 2) {
            return 3;
        }
        playerSummaryFill((PlayerSummary *)campCecGetOwnRecord());
        if (!gameFlagIsSet(0x551)) {
            /* Announce the first sender whose record asks for it. */
            s32 limit = 32;
            if (recv->received.source == 1) {
                limit = 10;
            }
            for (i = 0; i < limit; i++) {
                CampCecReceivedRecord *record = receivedRecord(recv, i);
                if (record != NULL && (record->flags & 4)) {
                    char name[0x14];
                    libc_strcpy(name, record->name);
                    scrSetStringSlot(0, name);
                    scrScriptProcessStartEntry(recv->receive.script, 18);
                    recv->receive.pending |= 8;
                    break;
                }
            }
        }
        if (gameDataGetRecordValue() != 0) {
            if (FUN_0031cee0() == 0) {
                /* The two reward amounts: the tier for the new records, plus a bonus per milestone. */
                s32 gained = gameDataBlocksGetWord27E90() - recv->receive.previousTotal;
                recv->receive.rewardA = 0;
                recv->receive.rewardB = 0;
                if (gained > 0) {
                    for (i = dataTable4AType1Count() - 1; i >= 0; i--) {
                        CecRewardTier *tier = dataTable4AType1GetEntry8(i);
                        if (tier != NULL && tier->records <= gained) {
                            recv->receive.rewardB = tier->amountB;
                            recv->receive.rewardA = tier->amountA;
                            break;
                        }
                    }
                    s32 bonusCount = dataTable4AType2Count();
                    for (u32 total = recv->receive.previousTotal + 1; total <= gameDataBlocksGetWord27E90(); total++) {
                        for (i = 0; i < bonusCount; i++) {
                            CecRewardBonus *bonus = dataTable4AGetEntry8(i);
                            if (bonus != NULL && (s32)total % bonus->every == 0) {
                                s32 amount = randBetween(bonus->minimum, bonus->maximum);
                                if (bonus->kind == 1) {
                                    recv->receive.rewardB += amount;
                                } else if (bonus->kind == 0) {
                                    recv->receive.rewardA += amount;
                                }
                            }
                        }
                    }
                    if (recv->receive.rewardA > 0 || recv->receive.rewardB > 0) {
                        recv->receive.pending |= 2;
                    }
                }
            }
            if (FUN_0031cee0() == 1) {
                /* A demon: one the player can hold and does not have, picked at random. */
                memcpySrcFirst(stockFindSelectedUnit(), &recv->receive.unit, sizeof(SlotRecordA));
                SaveSlotTableA *table = gameGetSlotTable();
                if (stockFindSelectedUnit() != NULL) {
                    s32 candidates[CAMPCEC_DEMON_GIFT_COUNT];
                    s32 candidateCount = 0;
                    recv->receive.gift = NULL;
                    __aeabi_memset4(candidates, sizeof(candidates), -1);
                    for (i = 0; i < CAMPCEC_DEMON_GIFT_COUNT; i++) {
                        CampCecDemonGift *gift = demonGift(i);
                        if ((u32)gift->requiredTotal <= gameDataBlocksGetWord27E90() &&
                            gift->demonId != recv->receive.unit.id && !gameStockContainsEntry((u16)gift->demonId)) {
                            if (nkmBaseGetRecord((u16)gift->demonId)->level <= table->hero.level + 1) {
                                candidates[candidateCount++] = i;
                            }
                        }
                    }
                    s32 pick = 0;
                    if (candidateCount != 0) {
                        CampCecDemonGift *gift;
                        do {
                            s32 index;
                            do {
                                if (candidateCount > 1) {
                                    pick = randBetween(0, candidateCount - 1);
                                }
                                index = candidates[pick];
                            } while (index == -1);
                            gift = demonGift(index);
                        } while (gameStockContainsEntry((u16)gift->demonId));
                        recv->receive.gift = gift;
                    }
                    recv->receive.pending |= 1;
                }
            }
            if (FUN_0031cee0() == 0) {
                /* Stat points: the tier for the new records, each on a random stat. */
                s32 gained = gameDataBlocksGetWord27E90() - recv->receive.previousTotal;
                for (i = dataTable4ACount() - 1; i >= 0; i--) {
                    CecStatTier *tier = dataTable4AGetEntry(i);
                    if (tier != NULL && tier->records <= gained) {
                        s32 points = tier->points;
                        for (i = 0; i < points; i++) {
                            switch (randBetween(0, 4)) {
                            case 0:
                                recv->receive.statGains[0]++;
                                break;
                            case 1:
                                recv->receive.statGains[1]++;
                                break;
                            case 2:
                                recv->receive.statGains[2]++;
                                break;
                            case 3:
                                recv->receive.statGains[3]++;
                                break;
                            case 4:
                                recv->receive.statGains[4]++;
                                break;
                            }
                        }
                        break;
                    }
                }
            }
            recv->receive.pending |= 4;
            /* Items: one for every fifth StreetPass, of the kind the cycle names, while there is room. */
            for (i = 0; i < CAMPCEC_ITEM_GIFT_MAX; i++) {
                recv->receive.items[i] = 0;
            }
            recv->receive.itemCount = 0;
            s32 gained = gameDataBlocksGetWord27E90() - recv->receive.previousTotal;
            if (gained > 0) {
                s32 reserved = 0;
                if (recv->receive.rewardA > 0) {
                    reserved = 1;
                }
                if (recv->receive.rewardB > 0) {
                    reserved++;
                }
                s32 cycle = recv->receive.previousTotal / 5 % 10;
                for (s32 n = 0; n < gained; n++) {
                    if (reserved + recv->receive.itemCount >= 10) {
                        break;
                    }
                    if ((recv->receive.previousTotal + (n + 1)) % 5 == 0) {
                        if (cycle >= 10) {
                            cycle = 0;
                        }
                        u32 kind = DAT_0052c758[cycle];
                        if (kind == 9) {
                            /* Kind 9 grows with the unit's level. */
                            SlotRecordA *unit = stockFindSelectedUnit();
                            if (unit != NULL && unit->level > 20) {
                                if (unit->level <= 40) {
                                    kind = 10;
                                } else if (unit->level <= 60) {
                                    kind = 11;
                                } else if (unit->level <= 80) {
                                    kind = 12;
                                } else {
                                    kind = 13;
                                }
                            }
                        }
                        s16 (*rows)[CAMPCEC_ITEM_ROW_LENGTH] = g_campCecRecv->receive.itemRows;
                        if (rows != NULL && kind < CAMPCEC_ITEM_ROW_COUNT) {
                            s16 available[CAMPCEC_ITEM_ROW_LENGTH];
                            s32 availableCount = 0;
                            for (i = 0; i < CAMPCEC_ITEM_ROW_LENGTH; i++) {
                                u16 *id = (u16 *)&rows[kind][i];
                                if (itemGetStackLimit(*id) > flagValueRead(*id)) {
                                    available[availableCount++] = *id;
                                }
                            }
                            if (availableCount != 0) {
                                u16 id = available[randBetween(0, availableCount - 1)];
                                if (id != 0) {
                                    g_campCecRecv->receive.items[g_campCecRecv->receive.itemCount] = id;
                                    g_campCecRecv->receive.itemCount++;
                                }
                            }
                        }
                        cycle++;
                    }
                }
                if (recv->receive.itemCount > 0) {
                    recv->receive.pending |= 2;
                }
            }
            recv->received.unitOwed = 0;
        }
        if (recv->receive.pending != 0 && (recv->receive.pending & 7) != 0) {
            /* Something to hand over: load the talk script and the messages of the demon's tone. */
            char path[0x40];
            asdLoadFileAsyncSimple("camp/CecMainDevilTalk_scr.bf", &recv->receive.talkScript, 0);
            u16 demonId = gameDataGetRecordValue();
            if ((recv->receive.pending & 1) && recv->receive.gift != NULL) {
                demonId = recv->receive.gift->demonId;
            }
            sprintf(path, "camp/CecDevilMsg/%s.mbm",
                             (const char *)dataTable25Section0FindById((s8)nkmBaseGetRecord(demonId)->talkTone)->unk01);
            asdLoadFileAsyncSimple(path, &recv->receive.talkMessages, 0);
            recv->receive.talkLoading = 1;
            messageDismissNumericBanner(1);
            messageMainStartMenuAnimationIfEnabled();
            sysPlaySe(62);
            progress->state = 14;
        } else {
            recv->receive.nextState = maskToCode(recv->receive.pending);
            result = 3;
        }
        break;
    case 14:
        if (recv->receive.talkScript != 0 && recv->receive.talkMessages != 0) {
            recv->receive.talkProcess = scrScriptProcessCreate((void *)recv->receive.talkScript,
                                                              (void *)recv->receive.talkMessages);
            scriptProcessSetMode(recv->receive.talkProcess, 2);
            recv->receive.nextState = maskToCode(recv->receive.pending);
        }
        break;
    }
    return result;
}

} /* extern "C" */
