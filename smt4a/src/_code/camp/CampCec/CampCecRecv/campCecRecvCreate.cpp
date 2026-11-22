/* NON_MATCHING: 136 lines (50 by shape). Retail keeps restriction 3 in r9 next to 4 in r8 (hoisted after the parental-control
 * test, so it pushes r9 and its frame is 36 bytes against 40) and stores 2 and 6 through one shared `str r0`; here 3 and 6
 * share the store. The thread launch has the same arguments with -2 in r3 and 17 in ip (the order IV's campCecCreate
 * also misses). Writing the unit-mark tests in both arms of the StreetPass-process test hoists 3 as retail does but keeps
 * two copies of the tests, so it is not written. */
#include "camp/CampCec/CampCecRecv.h"
#include "camp/CampCec/CampCecDraw.h"
#include "nn/Result.h"
#include "nn/os/ThreadLaunch.h"
#include "sys/ResultReport.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "code/Code0015_Smt4a.h"
#include "gamedata/GameDataAccess_Smt4a.h"
#include "shard/GameDataBlocks.h"
#include "util/BitsAndBytes_VariantF_Shard004B.h"

#define CAMP_CEC_RECV_SOURCE "c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\CampCec\\CampCecRecv.cpp"

extern "C" {

extern CampCecRecv *g_campCecRecv;

u32 stateMachineRun(void);
u32 FUN_0025d578(void);
s32 FUN_0035a840(CampCecRecv *recv);
s32 campCecRecvDownloadState(CampCecRecv *recv);
s32 jobScene360WaitStep(CampCecRecv *recv);
s32 FUN_0032e4a4(CampCecRecv *recv);
s32 campCecRecvStatGainState(CampCecRecv *recv);
s32 FUN_0035a3f0(CampCecRecv *recv);
s32 FUN_0035a7c4(CampCecRecv *recv);
s32 dataSceneWaitStep(CampCecRecv *recv);
s32 menuPollModeScript(CampCecRecv *recv);
s32 questQueryFalse(CampCecRecv *recv);
void campCecLoaderThread(CampCecRecv *recv); // declcheck: local (camp/CecMenu.h declares IV's menu as the argument)
void FUN_00514a64(const u32 *value, u32 *output);
void FUN_00514b84(void);
u32 FUN_00514b14(u32 (*callback)(u32), const u32 *value);
s32 FUN_002fb0d4(void *thread, const ThreadArgumentDescriptor *descriptor, void (*entry)(CampCecRecv *),
                 CampCecRecv **argument, u32 stackTop, s32 priority, s32 processor, u32 flags);
SlotRecordA *stockFindSelectedUnit(void);
s32 nn_cfg_CTR_IsRestrictP2pCec(void);
u8 FUN_004310c0(void);
void sysPlaySe(u32 id);
void runWinOpen(void);
u32 runWinOpenState(void);
void resultReportIfFailed(ThreadStackStorage *stack, void *buffer, u32 size);
CampCecDrawList *campCecDrawListCreate(void);
u32 cecQueryOptionalProcess(void); // declcheck: local (cec/CecProcessGlobal.h pulls in Obj557ec0.h, whose asdOperatorDelete clashes with this unit's)

}

/* nn::os::Thread::Start: runs `entry(argument)` on a new thread whose stack is `stack`; a failure is fatal. */
static __inline void campCecRecvStartThread(void *thread, void (*entry)(CampCecRecv *), CampCecRecv *argument,
                                            ThreadStackStorage &stack, s32 priority, s32 processor)
{
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.callbacks[0] = (void (*)(void))FUN_00514a64;
    descriptor.callbacks[1] = FUN_00514b84;
    descriptor.callbacks[2] = (void (*)(void))FUN_00514b14;
    s32 result = FUN_002fb0d4(thread, &descriptor, entry, &argument, stack.info.address + stack.info.size, priority,
                              processor, 0);
    if (nnResultIsFailureExceptSummary(result, 3)) {
        resultHandleFailure(result);
    }
}

extern "C" {

/* Creates the camp's StreetPass receive screen: its work area, its update and draw tasks and its state
 * handlers. `source` says where the records come from (0: the cec inbox, 1: the DataStore). With StreetPass
 * restricted, switched off or not running, or with the selected unit marked, only the menu's script is loaded
 * for the notice; otherwise the wait window opens and the loader thread starts. */
void campCecRecvCreate(u8 source)
{
    if (g_campCecRecv == NULL) {
        asdDebugTrace(CAMP_CEC_RECV_SOURCE, 268);
        g_campCecRecv = (CampCecRecv *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(CampCecRecv), 1);
    }
    CampCecRecv *recv = g_campCecRecv;
    sysMemClear(recv, sizeof(CampCecRecv));
    recv->task = asdProcessCreateSimple((const s8 *)"CampCecRecv Calc", 3, 0, 0, (AsdProcUpdateFunc)stateMachineRun, 0, 0);
    taskCreateDraw((const s8 *)"CampCecRecv Draw", 0x86, 0, 0, (AsdProcUpdateFunc)FUN_0025d578, 0, 0, (void *)recv->task);
    taskCreateDraw((const s8 *)"CampCecRecv DrawR", 0xE2, 0, 0, (AsdProcUpdateFunc)FUN_0025d578, 0, 0, (void *)recv->task);
    recv->received.source = source;
    recv->done = 0;
    recv->machine.previousState = -1;
    recv->machine.state = 0;
    recv->machine.nextState = -1;
    recv->machine.unk3B4 = -1;
    recv->machine.states[0] = FUN_0035a840;
    recv->machine.states[1] = campCecRecvDownloadState;
    recv->machine.states[2] = jobScene360WaitStep;
    recv->machine.states[3] = FUN_0032e4a4;
    recv->machine.states[4] = campCecRecvStatGainState;
    recv->machine.states[5] = FUN_0035a3f0;
    recv->machine.states[6] = FUN_0035a7c4;
    recv->machine.states[7] = dataSceneWaitStep;
    recv->machine.states[8] = menuPollModeScript;
    recv->machine.idle = questQueryFalse;

    SlotRecordA *unit = stockFindSelectedUnit();
    recv->machine.restriction = 0;
    if (nn_cfg_CTR_IsRestrictP2pCec() != 0) {
        recv->machine.restriction = 1;
    } else if (FUN_004310c0() == 0) {
        recv->machine.restriction = 2;
    } else if (cecQueryOptionalProcess() == 0 && recv->received.source == 0) {
        recv->machine.restriction = 6;
    } else if (unit != NULL) {
        if (bitsAt60Test(unit, 1)) {
            recv->machine.restriction = 3;
        } else if (bitsAt60Test(unit, 10)) {
            recv->machine.restriction = 4;
        }
    }
    recv->received.unitOwed = 0;
    if (recv->machine.restriction != 0) {
        asdLoadFileAsyncSimple("camp/CecMain_scr.bf", &recv->machine.noticeScript, 0);
        asdLoadFileAsyncSimple("camp/CecMain_msg.mbm", &recv->machine.noticeMessages, 0);
        recv->machine.state = 8;
        return;
    }

    sysPlaySe(3);
    sysPlaySe(0xBB);
    runWinOpen();
    runWinOpenState();
    gameDataAddHomeButtonHold(2);
    gameDataBlocksAddFlags(2);
    recv->drawList = campCecDrawListCreate();

    /* The thread that loads the screen's files. */
    recv->loaderStop = 0;
    recv->loaderProgress = 0;
    asdDebugTrace(CAMP_CEC_RECV_SOURCE, 490);
    recv->loaderStackMemory = memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
    /* operator new's second argument is unused; retail passes the register that still holds the unit */
    ThreadStackStorage *stack = (ThreadStackStorage *)asdOperatorNew(sizeof(ThreadStackStorage), unit);
    if (stack != NULL) {
        stack->info.unk00 = 0;
        stack->info.unk04 = 0;
        stack->info.address = 0;
        stack->info.size = 0;
        stack->owned = 0;
    }
    recv->loaderStack = stack;
    resultReportIfFailed(recv->loaderStack, recv->loaderStackMemory, 0x1000);
    campCecRecvStartThread(recv->loaderThread, campCecLoaderThread, recv, *recv->loaderStack, 17, -2);
}

} /* extern "C" */
