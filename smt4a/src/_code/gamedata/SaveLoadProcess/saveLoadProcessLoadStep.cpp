/* NON_MATCHING: one instruction. The duplicate scan of the party repair compares `cmp entry, other`
 * (retail `cmp r9, sl`); armcc puts the loaded party[j] first here whichever side the source names first. Copying
 * party[j] into a second s32 local used only in that compare is IDENTICAL, but that is a single-use operand
 * (steering; the sibling party scans' locals are each used more than once). */
#include "gamedata/SaveLoadProcessState.h"
#include "gamedata/SaveLoadProcess.h"
#include "gamedata/GameSaveBlocks.h"
#include "gamedata/GameFlags.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"
#include "shard/JobWork.h"
#include "addon/AocSystemA.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "mobiclip_ctrl/MobiclipCtrl.h"           /* configGetSettings */
#include "shard/W5_W5Match7_FlagBanks.h"          /* asdMemoryAlloc */
#include "shard/W6_W6Match3_BtlCombatantEntryA.h" /* partyFindSlotById */
#include "ui/AnimatedMessage.h"                  /* __aeabi_memcpy4 */
#include "util/BitsAndBytes_Shard004B.h"
#include "util/BitsAndBytes_VariantF_Shard004B.h"

extern "C" {

extern SaveByteSettings g_saveLoadProcess;

void saveLoadThreadRequestInit(u8 mode, u32 arg0, u32 arg1, void *buffer, u32 size);
s32 lazyScriptTaskStep(void);
CountdownBlockA *gameDataGetExtraBlock(void);
void gameApplyFlagTriggers(void);
u32 FUN_004d0d70(u32 slot);
void partySlotsCompact(void);
void cecApplyRankingBonuses(void);
void gameFlagsSetFlagsFromTaggedGroupEntries(AocSystemA *system);
void clockRecordStartSeconds(void);

/* Advances the activity icon while the save thread works: a new phase (0-2) every eight frames. */
static __inline void saveLoadAdvanceWaitAnimation(void)
{
    g_saveLoadProcess.flags++;
    if ((s32)g_saveLoadProcess.flags >= 8) {
        g_saveLoadProcess.value++;
        if (g_saveLoadProcess.value >= 3) {
            g_saveLoadProcess.value = 0;
        }
        g_saveLoadProcess.flags = 0;
    }
}

/* Steps the load process: reads the save image of the chosen slot and installs it (table, settings, save
 * body), repairs the party of an old save once, then reads the countdown block from its own file. */
s32 saveLoadProcessLoadStep(u32 job)
{
    SaveLoadProcessWorkA *work = (SaveLoadProcessWorkA *)jobGetWork(job);
    void *buffer;

    switch (work->state) {
    case LOAD_STATE_READ_IMAGE: {
        work->bufferSize = sizeof(GameSaveDataA);
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\SaveLoadProcess.cpp", 391);
        work->buffer = asdMemoryAlloc(0x10000, 0x100, 0, work->bufferSize, 1);
        u8 request = work->rawLoad ? SAVE_REQUEST_READ_RAW : SAVE_REQUEST_READ;
        saveLoadThreadRequestInit(request, work->mode, work->slot, work->buffer, work->bufferSize);
        work->state = LOAD_STATE_WAIT_IMAGE;
        break;
    }
    case LOAD_STATE_WAIT_IMAGE:
        if (lazyScriptTaskStep() == 1) {
            if (byte1IsZero() != 0) {
                work->state = LOAD_STATE_FAILED;
                break;
            }
            const GameSaveDataA *image = (const GameSaveDataA *)work->buffer;
            const u8 *header = image->header;
            const SaveSettingsImageA *settings = (const SaveSettingsImageA *)image->settings;
            const GameSaveBodyA *body = &image->body;
            __aeabi_memcpy4((void *)gameDataBlocksGetTable(), header, sizeof(image->header));
            *(SaveSettingsImageA *)configGetSettings() = *settings;
            __aeabi_memcpy4(gameDataBlocksGetSaveData(), body, sizeof(GameSaveBodyA));
            gameApplyFlagTriggers();
            if (!work->rawLoad) {
                /* Once per save (flag 0x595): drop the empty and the doubled party positions and the
                 * kept mark of units without a devil; with no kept unit left, clear the saved record's value. */
                if (!gameFlagIsSet(0x595)) {
                    s32 i;

                    gameFlagSetValue(0x595, 1, 1);
                    for (i = 0; i < 24; i++) {
                        s32 slot = partyFindSlotById(0);
                        if (slot >= 0) {
                            FUN_004d0d70(slot);
                        }
                    }
                    for (i = 0; i < 24; i++) {
                        SaveSlotTableA *table = gameGetSlotTable();
                        s32 entry = table->party[i];
                        for (s32 j = i + 1; j < 24; j++) {
                            if (entry == table->party[j]) {
                                table->party[j] = -1;
                            }
                        }
                    }
                    partySlotsCompact();
                    for (i = 0; i < 24; i++) {
                        SlotRecordA *unit = gameGetSlotRecord(i);
                        if (unit != NULL && unit->id == 0 && bitsAt60Test(unit, 2)) {
                            bitsAt60Clear(unit, 4);
                        }
                    }
                    bool kept = false;
                    for (i = 0; i < 24; i++) {
                        SlotRecordA *unit = gameGetSlotRecord(i);
                        if (unit != NULL && bitsAt60Test(unit, 2)) {
                            kept = true;
                            break;
                        }
                    }
                    if (!kept) {
                        ((GameSaveBodyA *)gameDataBlocksGetSaveData())->record.tail.value = 0;
                    }
                }
                if (!work->rawLoad) {
                    cecApplyRankingBonuses();
                    gameFlagsSetFlagsFromTaggedGroupEntries(g_aocSystem);
                }
            }
            s32 option = work->slot - 1;
            if (work->mode == 1) {
                option = work->slot;
            }
            if (!work->rawLoad) {
                ((GameSaveBodyA *)gameDataBlocksGetSaveData())->option = option;
                clockRecordStartSeconds();
                if (!work->rawLoad) {
                    asdMemFree(work->buffer);
                    work->state = LOAD_STATE_READ_COUNTDOWNS;
                    work->buffer = NULL;
                    break;
                }
            }
            work->state = LOAD_STATE_DONE;
            break;
        }
        saveLoadAdvanceWaitAnimation();
        break;
    case LOAD_STATE_READ_COUNTDOWNS:
        work->bufferSize = sizeof(CountdownBlockA);
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\SaveLoadProcess.cpp", 567);
        buffer = asdMemoryAlloc(0x10000, 0x100, 0, work->bufferSize, 1);
        work->buffer = buffer;
        if (!work->rawLoad) {
            saveLoadThreadRequestInit(SAVE_REQUEST_READ, 0, SAVE_FILE_COUNTDOWNS, buffer, work->bufferSize);
        }
        work->state = LOAD_STATE_WAIT_COUNTDOWNS;
        break;
    case LOAD_STATE_WAIT_COUNTDOWNS:
        if (lazyScriptTaskStep() == 1) {
            if (byte1IsZero() != 0) {
                work->state = LOAD_STATE_DONE;
                break;
            }
            /* read before the getter is called, as retail does */
            const CountdownBlockA *loaded = (const CountdownBlockA *)work->buffer;
            *gameDataGetExtraBlock() = *loaded;
            work->state = LOAD_STATE_DONE;
            break;
        }
        saveLoadAdvanceWaitAnimation();
        break;
    case LOAD_STATE_DONE:
        g_saveLoadProcess.third = 1;
        g_saveLoadProcess.selected = 1;
        return -1;
    case LOAD_STATE_FAILED:
        g_saveLoadProcess.third = 0;
        g_saveLoadProcess.selected = 1;
        return -1;
    }
    return 0;
}

} /* extern "C" */
