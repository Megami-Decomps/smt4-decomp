#include "common.h"
#include "nn/fnd/TimeSpan.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers_Smt4a.h"
#include "event/2dEvent/EventEffect.h"
#include "camp/CampCec/CampCecSetting.h"
#include "camp/CampCec/CecProfile.h"
#include "shard/W6_W6Match3_ForwardEffect.h"
#include "cec/CecProcessGlobal.h"

/* The loader thread's steps; the screen waits for the step after the last one. */
enum {
    CEC_STEP_START = 0,
    CEC_STEP_WAIT_FILES = 1
};

/* unit-local: the receive screen's loader view of its work area (CampCecRecv's first 0x7D8 bytes and the
 * thread's own flags after them); the screen's header does not reach the thread's fields yet */
struct CecThreadWork {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u32 dataStore;         /* the DataStore process, when the records come from the server */
    /* 0x00C */ u8 unk00C[0x33C];
    /* 0x348 */ u32 itemTable;
    /* 0x34C */ u32 unionTable;
    /* 0x350 */ u32 script;
    /* 0x354 */ u32 messages;
    /* 0x358 */ u8 unk358[0x8C];
    /* 0x3E4 */ u8 cecAvailable;
    /* 0x3E5 */ u8 unk3E5[0x3F0];
    /* 0x7D5 */ u8 source;             /* 0: the cec inbox, 1: the DataStore */
    /* 0x7D6 */ u8 unk7D6[0x1A];
    /* 0x7F0 */ s8 finished;           /* set by the screen to end the thread */
    /* 0x7F1 */ u8 unk7F1[3];
    /* 0x7F4 */ s32 step;
};

extern "C" {
void svcSleepThread(nn::fnd::TimeSpan span);
void btlTalkBustUpCreate(void);
void cecMessageSetRankA(CampCecReceivedRecord *record, u8 rank);
void cecMessageSetRankB(CampCecReceivedRecord *record, u8 rank);
void cecMessageSetRankC(CampCecReceivedRecord *record, u8 rank);
void cecMessageSetGameFlag(CampCecReceivedRecord *record, u8 flag);
void cecMessageSetWord27E8C(CampCecReceivedRecord *record, u32 value);
void saveBuildSummary(CampCecReceivedRecord *record);
u8 FUN_0031cee0(void);
u8 gameSaveWorkGetState(void);
u8 saveFlagGet27e1f(void);
void ownerSetName(CampCecReceivedRecord *record, const u16 *name);
void saveGetEquipment(CecProfile *equipment);
u8 FUN_002a46b8(void);
void cecRecordSetEquipment(CampCecReceivedRecord *record, ...);
s32 gameDataGetRecordValue(void);
void slotNameDisplaySetEntry(CampCecReceivedRecord *record, s32 demonId);
u32 gameDataBlocksGetWord27E8C(void);
void rt_aeabi_memclr(void *block, u32 size);
s32 gameDataTestFlags(u32 mask);
s32 rt_memcmp(const void *a, const void *b, u32 size);
void cecProcessCall2(void);
u32 cecOutboxReadCard(CampCecReceivedRecord *card); // declcheck: local (Apocalypse's card is the 100-byte record; camp/CampCec/CampCecView.h names IV's 0x4C-byte CecProcessSlot)
u32 dataStoreProcessCreate(void);

/* The receive screen's loader thread: requests the screen's tables and script, rebuilds the player's own
 * StreetPass record from the save, starts the DataStore process or refreshes the outbox card when it no
 * longer matches the record, then waits until the four files have arrived. */
void campCecLoaderThread(CecThreadWork *work)
{
    for (;;) {
        if (work->finished) {
            break;
        }
        switch (work->step) {
        case CEC_STEP_START:
            loadSlotEnsureLoaded(0x25);
            btlTalkBustUpCreate();
            asdLoadFileAsyncSimple("camp/CecItemTable.tbl", &work->itemTable, 0);
            asdLoadFileAsyncSimple("camp/CecUnionTable.tbl", &work->unionTable, 0);
            asdLoadFileAsyncSimple("camp/CecMain_scr.bf", &work->script, 0);
            asdLoadFileAsyncSimple("camp/CecMain_msg.mbm", &work->messages, 0);
            saveBuildSummary(campCecGetOwnRecord());
            cecMessageSetRankA(campCecGetOwnRecord(), FUN_0031cee0());
            cecMessageSetRankB(campCecGetOwnRecord(), gameSaveWorkGetState());
            cecMessageSetRankC(campCecGetOwnRecord(), saveFlagGet27e1f());
            ownerSetName(campCecGetOwnRecord(), (const u16 *)FUN_002840ac());
            {
                /* its own scope: retail keeps the equipment at sp+4, inside the 100 bytes the outbox card
                 * below occupies, and passes its last halfword through the stack word at sp */
                CecProfile equipment;
                saveGetEquipment(&equipment);
                cecRecordSetEquipment(campCecGetOwnRecord(), equipment);
            }
            cecMessageSetGameFlag(campCecGetOwnRecord(), FUN_002a46b8());
            slotNameDisplaySetEntry(campCecGetOwnRecord(), gameDataGetRecordValue());
            cecMessageSetWord27E8C(campCecGetOwnRecord(), gameDataBlocksGetWord27E8C());
            if (gameDataGetRecordValue() == 0) {
                rt_aeabi_memclr(campCecGetOwnRecord()->demon, 0x14);
            }

            if (work->source == 1) {
                work->dataStore = dataStoreProcessCreate();
            } else {
                u32 available = cecQueryOptionalProcess();
                work->cecAvailable = available;
                if (available != 0 && gameDataTestFlags(0x20) != 0) {
                    CampCecReceivedRecord card;
                    cecOutboxReadCard(&card);
                    if (rt_memcmp(card.demon, campCecGetOwnRecord()->demon, 0x14) != 0) {
                        if (campCecGetOwnRecord()->demonId == 0) {
                            slotNameDisplaySetEntry(campCecGetOwnRecord(), 0);
                            cecProcessCall2();
                            cecProcessForward(campCecGetOwnRecord());
                            rt_aeabi_memclr(campCecGetOwnRecord()->demon, 0x14);
                        } else {
                            cecProcessCall2();
                            cecProcessForward(campCecGetOwnRecord());
                        }
                    }
                }
            }
            work->step++;
            break;
        case CEC_STEP_WAIT_FILES:
            if (work->itemTable != 0 && work->unionTable != 0 && work->script != 0 && work->messages != 0) {
                work->step++;
            }
            break;
        }
        svcSleepThread(nn::fnd::TimeSpan::FromMilliSeconds(10));
    }
}

} /* extern "C" */
