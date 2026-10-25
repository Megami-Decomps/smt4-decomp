/* NON_MATCHING: register allocation only (retail keeps the constant 1 in r7 and the copy sizes in r9, reloads the saved-buffer pointer after the table call, and forms the flags3 address before the null test). */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "common.h"
#include "shard/FUN_00282be4.h"

namespace {
/* The battle start request: a short form (one word) or the 18-byte form carrying the camera/party setup. */
struct BtlStartRequest {
    /* 0x00 */ s8 second;      /* nonzero: the value goes to the second slot and the flag byte is cleared */
    /* 0x01 */ u8 unk01;
    /* 0x02 */ s16 value;
    /* 0x04 */ s16 field04;
    /* 0x06 */ s16 field06;
    /* 0x08 */ s16 field08;
    /* 0x0a */ s16 field0a;
    /* 0x0c */ u8 flag;
    /* 0x0d */ u8 unk0d;
    /* 0x0e */ s16 field0e;
    /* 0x10 */ s16 field10;
};

/* The battle's work area (size 0x4a58); only the fields set up here. */
struct BtlMainWork {
    /* 0x0000 */ u32 mainJob;
    /* 0x0004 */ u8 unk0004[0x5c];
    /* 0x0060 */ u8 freeOnEnd;
    /* 0x0061 */ u8 unk0061[7];
    /* 0x0068 */ s32 nextState;
    /* 0x006c */ u8 unk006c[0x54];
    /* 0x00c0 */ s32 value;
    /* 0x00c4 */ s32 secondValue;
    /* 0x00c8 */ u8 unk00c8[0x74];
    /* 0x013c */ s32 field13c;
    /* 0x0140 */ s32 field140;
    /* 0x0144 */ s32 field144;
    /* 0x0148 */ s32 field148;
    /* 0x014c */ u8 flag;
    /* 0x014d */ u8 unk014d[3];
    /* 0x0150 */ s32 field150;
    /* 0x0154 */ s32 field154;
    /* 0x0158 */ u8 unk0158[0x4350];
    /* 0x44a8 */ u32 flags3;
    /* 0x44ac */ u8 unk44ac[0x5ac];
};

struct BtlMainGlobals {
    BtlMainWork *work;
    void *savedSlots;
    void *savedData;
};
}

extern "C" {
extern BtlMainGlobals g_btlMainState;
void *asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
u32 taskCreateDraw(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, u32 owner);
void *gameGetSlotTable(void);
void *__aeabi_memcpy4(void *destination, const void *source, u32 size);
void *rt_memcpy(void *destination, const void *source, u32 size);
void FUN_001b6b98(BtlMainWork *work);
s32 battleMainProcessUpdate(u32 job);
void FUN_0020f04c(u32 job);
s32 btlEditorQueryFalse(u32 job);
s32 sceneQueryFalse(u32 job);
s32 FUN_001e4ac0(u32 job);
s32 FUN_0020f3a8(u32 job);

/* Allocates the battle's work area and its saved copies, applies the start request and starts the battle jobs. */
void FUN_001b0db4(const BtlStartRequest *request, s32 size)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlMain.cpp", 240);
    BtlMainWork *work = static_cast<BtlMainWork *>(asdMemAlloc(
        ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(BtlMainWork), 1));
    g_btlMainState.work = work;
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlMain.cpp", 244);
    g_btlMainState.savedSlots = asdMemAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, 0x97e8, 1);
    __aeabi_memcpy4(g_btlMainState.savedSlots, gameGetSlotTable(), 0x97e8);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlMain.cpp", 247);
    g_btlMainState.savedData = asdMemAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, 0x104a, 1);
    rt_memcpy(g_btlMainState.savedData, FUN_00282be4(), 0x104a);
    FUN_001b6b98(work);
    if (request != NULL && size > 0) {
        if (size == 4) {
            work->value = *reinterpret_cast<const s32 *>(request);
        } else if (size == 18) {
            BtlStartRequest copy = *request;
            if (copy.second != 0) {
                work->secondValue = copy.value;
            } else {
                work->value = copy.value;
            }
            work->field13c = copy.field04;
            work->field140 = copy.field06;
            work->field144 = copy.field08;
            work->field148 = copy.field0a;
            work->flag = copy.flag;
            if (copy.second != 0) {
                work->flag = 0;
            }
            work->field150 = copy.field0e;
            work->field154 = copy.field10;
        }
    } else {
        if (g_btlMainState.work != NULL) {
            g_btlMainState.work->nextState = 1;
        }
        work->flags3 |= 0x202;
    }
    work->freeOnEnd = 0;
    work->mainJob = asdProcessCreateSimple(reinterpret_cast<const s8 *>("BTLMAIN C"), 2, 0, 0, battleMainProcessUpdate, FUN_0020f04c, reinterpret_cast<u32>(g_btlMainState.work));
    taskCreateDraw(reinterpret_cast<const s8 *>("BTLMAIN U"), 0x73, 0, 0, btlEditorQueryFalse, NULL, 0, work->mainJob);
    taskCreateDraw(reinterpret_cast<const s8 *>("BTLMAIN D"), 0xe6, 0, 0, sceneQueryFalse, NULL, 0, work->mainJob);
    taskCreateDraw(reinterpret_cast<const s8 *>("BTLFADE LU"), 0x80, 0, 0, FUN_001e4ac0, NULL, 0, work->mainJob);
    taskCreateDraw(reinterpret_cast<const s8 *>("BTLFADE RU"), 0xde, 0, 0, FUN_001e4ac0, NULL, 0, work->mainJob);
    taskCreateDraw(reinterpret_cast<const s8 *>("BTLFADE D"), 0xe9, 0, 0, FUN_0020f3a8, NULL, 0, work->mainJob);
}

} /* extern "C" */
