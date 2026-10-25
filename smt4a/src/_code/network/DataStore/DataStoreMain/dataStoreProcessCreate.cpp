/* NON_MATCHING: retail chains member-constructor return pointers and includes a removed weak call at work+0x2c; explicit initialization needs an extra saved register. */
#include "network/DataStore/DataStoreMain.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

typedef void (*DataStoreCallback)(void *);
extern "C" {
extern DataStoreCtrl *g_dataStore;
extern const char DAT_00533030[];
void *FUN_00178b04(u32 size, const char *file, s32 line);
void *FUN_002e9ff4(void *member);
void FUN_00227ee8(void *);
void FUN_002e50d0(void *);
void FUN_002a38f4(void *);
void FUN_002a38c0(void *);
void taskCreateDraw(const char *, s32, s32, s32, DataStoreCallback, void *, void *, u32);

// Lazily create the datastore controller, client work, and send/receive tasks.
u32 dataStoreProcessCreate(void)
{
    if (g_dataStore == NULL) {
        asdDebugTrace(DAT_00533030, 0x47e);
        g_dataStore = static_cast<DataStoreCtrl *>(asdMemoryAllocTracked(0x100, 0x100, 0, 0x10, 1));
        DataStoreWork *work = static_cast<DataStoreWork *>(FUN_00178b04(sizeof(DataStoreWork), DAT_00533030, 0x47f));
        if (work != NULL) {
            work->state = 0;
            work->initialState[0] = 0;
            work->initialState[1] = 0;
            work->busy = 0;
            work->unk0d = 0;
            work->unk0e = 0;
            work->unk10 = 0;
            work->ready = 0;
            work->unk18 = 0xe7e3ffff;
            FUN_002e9ff4(work->unk1C);
            work->unk28 = 0;
            for (s32 i = 1; i < 7; ++i)
                work->transferState[i] = 0;
            work->entries = 0;
            work->unk4C = 0;
            work->unk50 = 0;
        }
        g_dataStore->work = work;
        g_dataStore->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>("DataStoreCalc"), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_00227ee8), reinterpret_cast<AsdProcFunc>(FUN_002e50d0), reinterpret_cast<u32>(g_dataStore));
        taskCreateDraw("DataStoreSendCalc", 3, 0, 0, FUN_002a38f4, NULL, g_dataStore, g_dataStore->task);
        taskCreateDraw("DataStoreRecvCalc", 5, 0, 0, FUN_002a38c0, NULL, g_dataStore, g_dataStore->task);
    }
    return g_dataStore->task;
}
}
