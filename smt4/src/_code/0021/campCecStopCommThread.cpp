#include "nn/os/WaitObject.h"
#include "battle/BtlStageStackRegion.h"
#include "nn/Result.h"
#include "nn/os/Thread.h"
#include "script/scrScriptProcess.h"
#include "sys/ResultReport.h"
#include <stddef.h>

/* The camp StreetPass screen while its communication thread shuts down (observed fields only). */
struct CampCecThreadWork {
    /* 0x000 */ u8 unk000[0xA0];
    /* 0x0A0 */ u8 modelScene[0xC54];
    /* 0xCF4 */ void *scriptFile;
    /* 0xCF8 */ void *scriptBuffer;
    /* 0xCFC */ u8 unkCFC[8];
    /* 0xD04 */ ScriptProcess *script;
    /* 0xD08 */ u8 unkD08[0x24];
    /* 0xD2C */ s32 nextState;
    /* 0xD30 */ u8 unkD30[0x35];
    /* 0xD65 */ u8 threadStopRequested;
    /* 0xD66 */ u8 unkD66[2];
    /* 0xD68 */ s32 threadState;
    /* 0xD6C */ AddressSpaceRegion *stackRegion;
    /* 0xD70 */ NnOsThread thread;
    /* 0xD78 */ void *threadStack;
};
typedef char CampCecThreadWorkOffsets[
    offsetof(CampCecThreadWork, scriptFile) == 0xCF4 && offsetof(CampCecThreadWork, script) == 0xD04 &&
    offsetof(CampCecThreadWork, nextState) == 0xD2C && offsetof(CampCecThreadWork, threadState) == 0xD68 &&
    offsetof(CampCecThreadWork, thread) == 0xD70 && offsetof(CampCecThreadWork, threadStack) == 0xD78 ? 1 : -1];

extern "C" {
extern CampCecThreadWork *g_campCec;
u8 FUN_0026f784(void *scene);
void campCecResetViewState(void *scene);
void linkHolderApplyFlag(void *scene, u32 flag);
void gameDataRemoveHomeButtonHold(u32 reason);
void gameDataFlagsClearAndRefresh(u32 reason);
void asdMemFree(void *block);
}

/* Waits for the communication thread to end, then finalizes it and closes its handle. */
static __inline void campCecStopThread(CampCecThreadWork *work)
{
    nn::os::ThreadJoin(&work->thread);
    work->thread.finalize();
    work->thread.NnOsHandle::~NnOsHandle();
}

extern "C" {

/* State handler: once the communication thread has finished and the scene is idle, tears the
 * thread down, restores the HOME button and flags, and starts the menu script (next state 1). */
s32 campCecStopCommThread(CampCecThreadWork *work)
{
    s32 result = 0;
    if (work->threadState == 2 && FUN_0026f784(g_campCec->modelScene)) {
        work->threadStopRequested = 1;
        campCecStopThread(work);
        addressSpaceRegionFree(work->stackRegion);
        delete static_cast<StackRegion *>(work->stackRegion);
        work->stackRegion = NULL;
        asdMemFree(work->threadStack);
        work->threadStack = NULL;
        gameDataRemoveHomeButtonHold(2);
        gameDataFlagsClearAndRefresh(2);
        campCecResetViewState(g_campCec->modelScene);
        linkHolderApplyFlag(g_campCec->modelScene, 0);
        work->script = scrScriptProcessCreate(work->scriptFile, work->scriptBuffer);
        scriptProcessSetMode(work->script, 2);
        result = 2;
        work->nextState = 1;
    }
    return result;
}

} /* extern "C" */
