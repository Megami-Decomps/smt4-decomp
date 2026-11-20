/* NON_MATCHING: same frame (0x104) and stack arrays; about 135 lines differ once r8/r9 are exchanged. Retail keeps the menu in r9 and loads the idle state 6 into r8 before the switch, storing it with `streq r8` / `str r8` in steps 0 and 1; this build keeps the menu in r8 and materialises 6 at each store. Retail rotates the card-banking loop (an entry test on the count alone) and reads the card's demon id into r0 with the card saved in r1; it loads g_campCec's address before the `== 1` test, keeps the reward-loop counter in fp, and places the no-reward exit (state 6) after the shared runWinClose tail. */
#include <stdio.h>
#include "camp/CecMenu.h"
#include "event/2dEvent/Npc2d.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/W6_W6Match3_OnlineValueCompletion.h"
#include "shard/W6_W6Match1_Table25Record.h"
#include "shard/GameDataBlocks.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/FlagBitTests.h"
#include "gamedata/GameDataAccess_Smt4.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/NkmBaseRecord.h"
#include "camp/CampMenuEntry.h"
#include "camp/CampCec/CampCecView.h"
#include "code/Code0024_Smt4.h"
#include "code/Code0028.h"
#include "script/scrScriptProcess.h"
#include "quest_center/qcMain.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Sys/Save/AsdSaveHeader.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {

extern const u32 DAT_00402854[10]; /* the reward item kind of each tally, modulo 10 */

s32 gameDataBlockTestFlag(u32 mask);
void FUN_002e1b20(void);
void objectFlagsClear(StatBlock *unit, u16 mask);
void FUN_0026b9bc(void);
void runWinClose(void);
u8 FUN_001db56c(void);
void FUN_002ecfe4(void);
void gameDataRemoveHomeButtonHold(u32 mask);
u32 FUN_002cd680(void);
u32 FUN_0025981c(void);
int cecSlotGet(u32 index);
void FUN_002cef34(const void *source);
void FUN_002f5004(u32 amount);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
u8 gameDataBlocksGetFlagByteA(void);
StatBlock *stockFindSelectedUnit(void);
void __aeabi_memset4(void *destination, u32 size, u32 value);
s32 randBetween(s32 minimum, s32 maximum);
u32 scrEffectRunIfActive(void);

/* Row `index` of the reward demon table, NULL past its 60 rows. */
static __inline CampCecDemonRecord *campCecDemonRecord(u32 index)
{
    CampCecDemonRecord *record = NULL;
    if (index < 60) {
        record = &g_campCec->demonRecords[index];
    }
    return record;
}

/* The state that presents the first reward still pending, 6 when none is (the body of smt4a's maskToCode). */
static __inline s32 campCecPendingState(const CampCecMenu *work)
{
    u32 pending = work->rewards.pending;
    s32 state = 6;
    if (pending & 8) {
        state = 2;
    } else if (pending & 1) {
        state = 3;
    } else if (pending & 4) {
        state = 4;
    } else if (pending & 2) {
        state = 5;
    }
    return state;
}

/* The inbox state of the camp's StreetPass menu: waits for the inbox, banks the received cards, works out
 * what the passes since the last visit earned (a greeting, an offered demon, stat points for the selected
 * demon, items), loads the talk script that presents them and moves on to the first pending reward. */
s32 campCecInboxState(CampCecMenu *work)
{
    CampCecInbox *inbox = work->inbox();
    s32 result = 2;
    u32 *talkScript = &work->talk.script;
    u32 *pending = &work->rewards.pending;

    switch (inbox->step) {
    case 0:
        if (work->optionalProcessAvailable && gameDataBlockTestFlag(0x20)) {
            FUN_002e1b20();
            inbox->step++;
        } else {
            bool cleared = false;
            SaveSlotTableIV *table = gameGetSlotTable();
            for (s32 i = 0; i < 24; i++) {
                if (table->stock[i] >= 0 && flagWordTestBit(gameGetUnitRecord(table->stock[i]), 2)) {
                    objectFlagsClear(gameGetUnitRecord(table->stock[i]), 4);
                    cleared = true;
                }
            }
            if (!cleared) {
                work->state = 6;
            } else {
                FUN_00254600(0);
                FUN_0026b9bc();
                work->state = 12;
            }
            runWinClose();
            result = 2;
        }
        break;
    case 1:
        gameDataBlocksAddFlags(2);
        gameDataFlagsSetBits(2);
        FUN_001db56c();
        inbox->count = asdCecInboxGetMessageCount();
        if (inbox->count > 0) {
            inbox->step++;
        } else {
            FUN_002ecfe4();
            gameDataRemoveHomeButtonHold(2);
            gameDataFlagsClearAndRefresh(2);
            runWinClose();
            work->state = 6;
        }
        break;
    case 2:
        if (FUN_002cd680()) {
            FUN_002ecfe4();
            FUN_00220ffc();
            gameDataRemoveHomeButtonHold(2);
            gameDataFlagsClearAndRefresh(2);
            inbox->step++;
        }
        break;
    case 3:
        work->rewards.lastTally = FUN_0025981c();
        for (s32 i = 0; i < inbox->count && i < 12; i++) {
            CecProcessSlot *card = (CecProcessSlot *)cecSlotGet(i);
            if (card->demon.id != 0) {
                FUN_002cef34(card);
                FUN_002f5004(1);
            }
        }
        if (!gameFlagIsSet(0x551)) {
            for (s32 i = 0; i < 12; i++) {
                CecProcessSlot *card = (CecProcessSlot *)cecSlotGet(i);
                if (card->flags & 0xc) {
                    char name[64];
                    libc_strcpy((unsigned int *)name, (unsigned int *)card->playerName);
                    textEncodeFontSlot(0, (const u8 *)name);
                    scrScriptProcessStartEntry(work->talk.process, (card->flags & 4) ? 0x13 : 0x14);
                    *pending = work->rewards.pending | 8;
                    break;
                }
            }
        }
        if (FUN_00262f78() != 0) {
            if (gameDataBlocksGetFlagByteA() == 0) {
                s32 passes = FUN_0025981c() - work->rewards.lastTally;
                work->rewards.passRemainder = 0;
                work->rewards.passGroups = 0;
                if (passes > 0) {
                    work->rewards.passGroups = passes / 6;
                    if (passes % 6 > 0) {
                        work->rewards.passRemainder = passes % 6;
                    }
                }
            }
            if (gameDataBlocksGetFlagByteA() == 1) {
                memCopy(stockFindSelectedUnit(), &work->rewardUnit.unit, sizeof(StatBlock));
                SaveSlotTableIV *table = gameGetSlotTable();
                if (stockFindSelectedUnit() != NULL) {
                    u32 candidates[60];
                    s32 count = 0;
                    work->rewardUnit.offeredDemon = NULL;
                    __aeabi_memset4(candidates, sizeof(candidates), 0xffffffff);
                    for (s32 i = 0; i < 60; i++) {
                        CampCecDemonRecord *record = campCecDemonRecord(i);
                        if ((u32)record->passes <= FUN_0025981c() && (s16)record->id != work->rewardUnit.unit.id &&
                            !partyHasStoredDemon(record->id) &&
                            nkmBaseGetRecord(record->id)->level <= table->player.level + 5) {
                            candidates[count] = i;
                            count++;
                        }
                    }
                    s32 pick = 0;
                    if (count != 0) {
                        CampCecDemonRecord *record;
                        do {
                            do {
                                if (count > 1) {
                                    pick = randBetween(0, count - 1);
                                }
                            } while (candidates[pick] == 0xffffffff);
                            record = campCecDemonRecord(candidates[pick]);
                        } while (partyHasStoredDemon(record->id));
                        work->rewardUnit.offeredDemon = record;
                    }
                    *pending = work->rewards.pending | 1;
                }
            }
            s32 tally = FUN_0025981c();
            s32 pass = work->rewards.lastTally;
            if (pass < tally) {
                for (; pass < tally; pass++) {
                    switch (randBetween(0, 4)) {
                    case 0:
                        work->rewardUnit.statGains[0]++;
                        break;
                    case 1:
                        work->rewardUnit.statGains[1]++;
                        break;
                    case 2:
                        work->rewardUnit.statGains[2]++;
                        break;
                    case 3:
                        work->rewardUnit.statGains[3]++;
                        break;
                    case 4:
                        work->rewardUnit.statGains[4]++;
                        break;
                    }
                }
                *pending = work->rewards.pending | 4;
            }
            for (s32 i = 0; i < 12; i++) {
                work->talk.items[i] = 0;
            }
            work->rewards.itemCount = 0;
            s32 passes = FUN_0025981c() - work->rewards.lastTally;
            if (passes > 0) {
                u32 slot = work->rewards.lastTally % 10;
                for (s32 n = 0; n < passes; n++, slot++) {
                    if ((s32)slot >= 10) {
                        slot = 0;
                    }
                    u32 kind = DAT_00402854[slot];
                    if (kind == 8) {
                        StatBlock *unit = stockFindSelectedUnit();
                        if (unit != NULL && unit->level > 20) {
                            if (unit->level <= 40) {
                                kind = 9;
                            } else if (unit->level <= 60) {
                                kind = 10;
                            } else if (unit->level <= 80) {
                                kind = 11;
                            } else {
                                kind = 12;
                            }
                        }
                    }
                    u16 (*items)[5] = g_campCec->itemRows;
                    if (items != NULL && kind < 13) {
                        u16 found[5];
                        s32 foundCount = 0;
                        for (s32 j = 0; j < 5; j++) {
                            u16 *item = &items[kind][j];
                            if ((s32)recordPackedValue(*item) > flagValueRead(*item)) {
                                found[foundCount] = *item;
                                foundCount++;
                            }
                        }
                        if (foundCount != 0) {
                            u16 item = found[randBetween(0, foundCount - 1)];
                            if (item != 0) {
                                CampCecMenu *menu = g_campCec;
                                menu->talk.items[menu->rewards.itemCount] = item;
                                menu->rewards.itemCount++;
                            }
                        }
                    }
                }
                if (work->rewards.itemCount > 0) {
                    *pending = work->rewards.pending | 2;
                }
            }
            work->loading = 0;
        }
        if (work->rewards.pending != 0) {
            if (work->rewards.pending & 7) {
                char path[64];
                asdLoadFileAsyncSimple("camp/CecMainDevilTalk_scr.bf", talkScript, 0);
                u32 id = (u16)FUN_00262f78();
                if ((work->rewards.pending & 1) && work->rewardUnit.offeredDemon != NULL) {
                    id = work->rewardUnit.offeredDemon->id;
                }
                sprintf(path, "camp/CecDevilMsg/%s.mbm", dataTable25Section0FindById((s8)nkmBaseGetRecord(id)->talkTone)->unk01);
                asdLoadFileAsyncSimple(path, &work->talk.messages, 0);
                work->savedBannerPending = 1;
                messageDismissNumericBanner(1);
                scrEffectRunIfActive();
                buttonHelpSetPreset(0x3c);
                inbox->step++;
            } else {
                work->state = campCecPendingState(work);
                result = 2;
            }
        } else {
            work->state = 6;
            result = 2;
        }
        runWinClose();
        break;
    case 4:
        if (work->talk.script != 0 && work->talk.messages != 0) {
            work->talk.talkProcess = scrScriptProcessCreate((void *)work->talk.script, (void *)work->talk.messages);
            work->talk.talkProcess->mode = 2;
            work->state = campCecPendingState(work);
        }
        break;
    }
    return result;
}

} /* extern "C" */
