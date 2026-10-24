/* NON_MATCHING: camp StreetPass (CEC) loader thread body: loads the CEC tables and script, fills the outgoing message record from the save data and forwards it, then waits until the files have arrived; written from the decompilation, the stack buffers of the CEC id helpers and the return-value plumbing are approximated */
#include "common.h"

#define CEC_STEP_START 0
#define CEC_STEP_WAIT_FILES 1
#define CEC_STEP_READY 2
#define CEC_SLEEP_NS 10000000
#define CEC_MESSAGE_RECORD_ID_SIZE 0x14

struct CecMessageRecord {
    /* 0x00 */ u8 unk00[0x21];
    /* 0x21 */ u8 rankA;
    /* 0x22 */ u8 rankB;
    /* 0x23 */ u8 rankC;
    /* 0x24 */ u32 word27E8C;
    /* 0x28 */ u8 unk28[0x1A];
    /* 0x42 */ u8 gameFlag;
    /* 0x43 */ u8 unk43[0xD];
    /* 0x50 */ u8 ownerId[0x10];       /* the 0x14-byte owner block: id bytes, then the tail below */
    /* 0x60 */ s16 unk60;
    /* 0x62 */ u8 unk62[2];
};

struct CecThreadWork {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u32 dataStore;
    /* 0x00C */ u8 unk00C[0x33C];
    /* 0x348 */ s32 itemTable;
    /* 0x34C */ s32 unionTable;
    /* 0x350 */ s32 script;
    /* 0x354 */ s32 messages;
    /* 0x358 */ u8 unk358[0x8C];
    /* 0x3E4 */ s8 cecAvailable;
    /* 0x3E5 */ u8 unk3E5[0x3F0];
    /* 0x7D5 */ u8 offline;
    /* 0x7D6 */ u8 unk7D6[0x1A];
    /* 0x7F0 */ u8 finished;
    /* 0x7F1 */ u8 unk7F1[3];
    /* 0x7F4 */ s32 step;
};

extern "C" {
void svcSleepThread(s64 nanoseconds);
void asdLoadFileAsyncSimple(const char *path, s32 *destination, s32 flags);
void loadSlotEnsureLoaded(s32 slot);
void btlTalkBustUpCreate(void);
CecMessageRecord *FUN_002bf520(void);
void saveBuildSummary(void);
u8 FUN_0031cee0(void);
u8 FUN_002391e0(void);
u8 saveFlagGet27e1f(void);
u32 FUN_002840ac(void);
void ownerSetName(CecMessageRecord *record, u32 name);
void FUN_002a4664(s32 *value);
u8 FUN_002a46b8(void);
void engineForwardVariadicCommand(CecMessageRecord *record, s32 value, u32 a, u32 b);
u32 gameDataGetRecordValue(void);
void FUN_0032e25c(CecMessageRecord *record, u32 value);
u32 gameDataBlocksGetWord27E8C(void);
void rt_aeabi_memclr(void *block, u32 size);
s32 cecQueryOptionalProcess(void);
s32 gameDataTestFlags(u32 mask);
void FUN_002c0b10(u16 *id);
s32 rt_memcmp(const void *a, const void *b, u32 size);
void cecProcessCall2(void);
void cecProcessForward(void);
void dataStoreProcessCreate(void);

void FUN_002a28c0(CecThreadWork *work)
{
    while (work->finished == 0) {
        if (work->step == CEC_STEP_START) {
            loadSlotEnsureLoaded(0x25);
            btlTalkBustUpCreate();
            asdLoadFileAsyncSimple("camp/CecItemTable.tbl", &work->itemTable, 0);
            asdLoadFileAsyncSimple("camp/CecUnionTable.tbl", &work->unionTable, 0);
            asdLoadFileAsyncSimple("camp/CecMain_scr.bf", &work->script, 0);
            asdLoadFileAsyncSimple("camp/CecMain_msg.mbm", &work->messages, 0);
            FUN_002bf520();
            saveBuildSummary();
            FUN_002bf520()->rankA = FUN_0031cee0();
            FUN_002bf520()->rankB = FUN_002391e0();
            FUN_002bf520()->rankC = saveFlagGet27e1f();
            ownerSetName(FUN_002bf520(), FUN_002840ac());
            s32 progress;
            FUN_002a4664(&progress);
            engineForwardVariadicCommand(FUN_002bf520(), progress, 0, 0);
            FUN_002bf520()->gameFlag = FUN_002a46b8();
            FUN_0032e25c(FUN_002bf520(), gameDataGetRecordValue());
            FUN_002bf520()->word27E8C = gameDataBlocksGetWord27E8C();
            if (gameDataGetRecordValue() == 0)
                rt_aeabi_memclr(FUN_002bf520()->ownerId, CEC_MESSAGE_RECORD_ID_SIZE);

            if (work->offline != 1) {
                work->cecAvailable = (s8)cecQueryOptionalProcess();
                if (work->cecAvailable != 0 && gameDataTestFlags(0x20) != 0) {
                    u16 id[2];
                    u8 ownId[CEC_MESSAGE_RECORD_ID_SIZE];
                    FUN_002c0b10(id);
                    if (rt_memcmp(ownId, FUN_002bf520()->ownerId, CEC_MESSAGE_RECORD_ID_SIZE) != 0) {
                        if (FUN_002bf520()->unk60 != 0) {
                            cecProcessCall2();
                            FUN_002bf520();
                            cecProcessForward();
                        } else {
                            FUN_0032e25c(FUN_002bf520(), 0);
                            cecProcessCall2();
                            FUN_002bf520();
                            cecProcessForward();
                            rt_aeabi_memclr(FUN_002bf520()->ownerId, CEC_MESSAGE_RECORD_ID_SIZE);
                        }
                    }
                }
            } else {
                dataStoreProcessCreate();
                work->dataStore = work->offline;
            }
            work->step++;
        } else if (work->step == CEC_STEP_WAIT_FILES && work->itemTable != 0) {
            if (work->unionTable != 0 && work->script != 0 && work->messages != 0)
                work->step = CEC_STEP_READY;
        }
        svcSleepThread(CEC_SLEEP_NS);
    }
}

} /* extern "C" */
