/* NON_MATCHING: identical to retail instruction for instruction (svc 0x24 through svcWaitSynchronization1, svc 0x23 through the thread destructor) except register allocation: retail keeps the constants 1 in r9 and 0 in r7 apart for the whole function, armcc reuses one register for both. */
#include "common.h"
#include "nn/os/AddressSpaceManager.h"
#include "nn/Result.h"
#include "nn/os/Thread.h"
#include <stddef.h>
#include "camp/Config/Config.h"
#include "gamedata/DataTableSections.h"

/* The memory mapped for the loader thread's stack: its destructor unmaps it, and the block goes
 * back through the engine's operator delete. */
struct StackRegion : AddressSpaceRegion {
    ~StackRegion();
    static void operator delete(void *block);
};

/* A preview object of the screen (deleted through its virtual destructor); the first field after
 * the vtable is the handle it registered. */
class UnitePreview {
public:
    virtual ~UnitePreview();
    u32 registeredHandle;
};

/* The camera object of the screen. */
class UniteCamera {
public:
    virtual ~UniteCamera();
};

/* The object that owns a heap block table, deleted when the screen is closed. */
struct UniteTable {
    u32 unk00;
};

/* The fusion screen's state, as far as its shutdown reaches. */
struct UniteShutdownState {
    /* 0x0000 */ UniteTable *table;
    /* 0x0004 */ u8 unk0004[0x3f4];
    /* 0x03f8 */ u32 job;
    /* 0x03fc */ u8 unk03fc[0x20];
    /* 0x041c */ s32 startTime;
    /* 0x0420 */ u8 unk0420[4];
    /* 0x0424 */ void *scriptMemory;
    /* 0x0428 */ void *workMemory;
    /* 0x042c */ s32 scriptProcess;
    /* 0x0430 */ u8 unk0430[0x5c58];
    /* 0x6088 */ u8 unk6088[0x600];
    /* 0x6688 */ u16 loadedPortraits[4];
    /* 0x6690 */ u8 unk6690[0x2b78];
    /* 0x9208 */ UnitePreview *firstModel;
    /* 0x920c */ UnitePreview *secondModel;
    /* 0x9210 */ UniteCamera *camera;
    /* 0x9214 */ u8 unk9214[0x44];
    /* 0x9258 */ s8 registered;
    /* 0x9259 */ u8 unk9259[7];
    /* 0x9260 */ s32 frames;
    /* 0x9264 */ u8 stopRequested;
    /* 0x9265 */ u8 unk9265[3];
    /* 0x9268 */ StackRegion *stackRegion;
    /* 0x926c */ NnOsThread thread;
    /* 0x9274 */ void *threadStack;
};
typedef char UniteShutdownStateOffsets[offsetof(UniteShutdownState, loadedPortraits) == 0x6688 &&
    offsetof(UniteShutdownState, camera) == 0x9210 &&
    offsetof(UniteShutdownState, thread) == 0x926c &&
    offsetof(UniteShutdownState, threadStack) == 0x9274 ? 1 : -1];

extern "C" {
extern UniteShutdownState *g_unite;
extern u32 g_handleRegistry;

s32 svcWaitSynchronization1(u32 handle, s64 timeout);
void FUN_002e3140(s32 result, bool failed);
void FUN_001469a8(AddressSpaceRegion *region);
void asdOperatorDelete(void *block);
void asdMemFree(void *block);
void FUN_00408184(s32 id, s32 value);
void resourceOwnerReleaseAndReset(u32 registry);
void uniteCameraDestroy(void);
void ptrListRemoveClearOwner(u32 registry, u32 owner);
void FUN_0038b3f8(s32 id, s32 flag);
void scrScriptProcessDestroy(s32 process);
void *ptrTable44FreeAll(void *table);
void jobStop(u32 job, s32 arg);
void mapSettings5BSetValueIfActive(s32 value);
}

inline StackRegion::~StackRegion()
{
    FUN_001469a8(this);
}

inline void StackRegion::operator delete(void *block)
{
    asdOperatorDelete(block);
}

/* Waits for the thread behind `handle` to end. */
static void threadWait(const u32 *handle)
{
    s32 result = svcWaitSynchronization1(*handle, -1);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002e3140(result, failed);
    }
}

/* Closes the fusion screen: stops its loader thread, releases the preview objects and the
 * loaded portraits, destroys the script process and frees the screen's state. */
extern "C" void FUN_0031fb04(void)
{
    UniteShutdownState *unite = g_unite;

    if (unite == NULL) {
        return;
    }
    unite->stopRequested = 1;
    threadWait(&unite->thread.handle);
    unite->thread.joined = 1;
    unite->thread.~NnOsThread();
    FUN_001469a8(unite->stackRegion);
    StackRegion *region = unite->stackRegion;
    delete region;
    unite->stackRegion = NULL;
    asdMemFree(unite->threadStack);
    unite->threadStack = NULL;
    FUN_00408184(0x25, FUN_002e50d4() - unite->startTime);
    if (unite->registered != 0) {
        resourceOwnerReleaseAndReset(g_handleRegistry);
    }
    if (unite->camera != NULL) {
        delete unite->camera;
        unite->camera = NULL;
    }
    uniteCameraDestroy();
    ptrListRemoveClearOwner(g_handleRegistry, unite->firstModel->registeredHandle);
    ptrListRemoveClearOwner(g_handleRegistry, unite->secondModel->registeredHandle);
    if (unite->firstModel != NULL) {
        delete unite->firstModel;
        unite->firstModel = NULL;
    }
    if (unite->secondModel != NULL) {
        delete unite->secondModel;
        unite->secondModel = NULL;
    }
    for (s32 i = 0; i < 4; ++i) {
        if (unite->loadedPortraits[i] != 0) {
            FUN_0038b3f8((s16)unite->loadedPortraits[i], 1);
        }
    }
    scrScriptProcessDestroy(unite->scriptProcess);
    asdMemFree(unite->workMemory);
    asdMemFree(unite->scriptMemory);
    if (unite->table != NULL) {
        asdOperatorDelete(ptrTable44FreeAll(unite->table));
    }
    unite->table = NULL;
    jobStop(unite->job, 0);
    asdMemFree(unite);
    g_unite = NULL;
    dataTableFree(0x24);
    dataTableFree(0x22);
    mapSettings5BSetValueIfActive(1);
}
