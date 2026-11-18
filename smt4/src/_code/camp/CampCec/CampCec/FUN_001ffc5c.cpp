/* NON_MATCHING: work pointer/size allocation, thread creation arguments and handler table stores differ. */
#include "camp/CecMenu.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "sys/ResultReport.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "code/Code002c_Smt4.h"

extern "C" {
u32 campCecUpdateState();
s32 questQueryFalse();
u32 campCecDrawDimmingOverlay();
void campCecStopCommThread();
void FUN_002ec588();
void FUN_002ccb7c();
void FUN_001ebedc();
void FUN_001dbf34();
void FUN_002110ac();
void FUN_002e1898();
void FUN_002114fc();
void FUN_001dbeb8();
void FUN_001ebe10();
void FUN_001dc608();
void FUN_003105f4();
void FUN_002ece60();
void buttonHelpSetPreset(s32 preset);
void FUN_002579bc(s32 arg);
void campCecModelSceneInit(void *scene);
void bgmRestart(s32 arg);
void soundChannelRequestIfEnabled(u32 id, s32 a, s32 frames);
void runWinOpen();
void runWinOpenState();
void gameDataBlocksAddFlags(s32 flags);
void gameDataFlagsSetBits(s32 bits);
s32 nn_cfg_CTR_IsRestrictP2pCec();
u8 FUN_00359f90();
u32 FUN_002bcc60(NnOsThread *thread, s32 *info, void (*entry)(CampCecMenu *), CampCecMenu *argument,
                  s32 stackTop, s32 priority, s32 affinity, s32 flag);
void asdDebugTrace(const char *path, s32 line);

// Install the camp screen handlers. When StreetPass is available the worker loads its resources.
void FUN_001ffc5c()
{
    if (g_campCec == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\CampCec\\CampCec.cpp", 281);
        g_campCec = (CampCecMenu *)asdMemAlloc(0x100, 0x100, 0, sizeof(CampCecMenu), 1);
    }
    CampCecMenu *work = g_campCec;
    memClear(work, sizeof(CampCecMenu));
    work->updateProcess = asdProcessCreateSimple(reinterpret_cast<const s8 *>("CampCec Calc"), 1, 0, 0,
                              reinterpret_cast<AsdProcUpdateFunc>(&campCecUpdateState), 0, 0);
    AsdProcUpdateFunc draw = reinterpret_cast<AsdProcUpdateFunc>(campCecDrawDimmingOverlay);
    taskCreateDraw(reinterpret_cast<const s8 *>("CampCec DrawUpLeft"), 0x7D, 0, 0, draw, 0, 0,
                   reinterpret_cast<void *>(work->updateProcess));
    taskCreateDraw(reinterpret_cast<const s8 *>("CampCec DrawUpRight"), 0xDB, 0, 0, draw, 0, 0,
                   reinterpret_cast<void *>(work->updateProcess));
    work->screen.selection = -1;
    work->screen.mode = 0;
    work->state = -1;
    work->unkD30 = -1;
    work->substate = 0;
    work->handlers[0] = campCecStopCommThread;
    work->handlers[1] = FUN_002ec588;
    work->handlers[2] = FUN_002ccb7c;
    work->handlers[3] = FUN_001ebedc;
    work->handlers[4] = FUN_001dbf34;
    work->handlers[5] = FUN_002110ac;
    work->handlers[6] = FUN_002e1898;
    work->handlers[9] = FUN_002114fc;
    work->handlers[7] = FUN_001dbeb8;
    work->handlers[10] = FUN_001ebe10;
    work->handlers[8] = FUN_001dc608;
    work->handlers[11] = FUN_001ebe10;
    work->handlers[12] = FUN_003105f4;
    work->handlers[13] = FUN_002ece60;
    work->handlers[15] = reinterpret_cast<void (*)()>(&questQueryFalse);

    work->scriptFlow.kind = 0;
    if (nn_cfg_CTR_IsRestrictP2pCec() != 0)
        work->scriptFlow.kind = 1;
    else if (FUN_00359f90() == 0)
        work->scriptFlow.kind = 2;
    work->loading = 0;
    if (work->scriptFlow.kind != 0) {
        asdLoadFileAsyncSimple("camp/CecMain_scr.bf", &work->scriptFile, 0);
        asdLoadFileAsyncSimple("camp/CecMain_msg.mbm", &work->messageFile, 0);
        work->screen.mode = 13;
    } else {
        buttonHelpSetPreset(3);
        work->helpInitialized = 0;
        work->unkD62 = 1;
        work->savedBannerPending = 0;
        buttonHelpSetPreset(0xB9);
        FUN_002579bc(0);
        campCecModelSceneInit(work->block0A0);
        bgmRestart(0);
        soundChannelRequestIfEnabled(0x1000062, 0, 60);
        runWinOpen();
        runWinOpenState();
        gameDataBlocksAddFlags(2);
        gameDataFlagsSetBits(2);
        work->stopLoader = 0;
        work->loadState = 0;
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\CampCec\\CampCec.cpp", 573);
        work->threadStack = (void *)memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
        work->taskList = asdOperatorNew(0x18, campCecDrawDimmingOverlay);
        resultReportIfFailed(work->taskList, work->threadStack, 0x1000);
        s32 info = 4;
        u32 result = FUN_002bcc60(&work->thread, &info, campCecLoaderThread, work, 0, 0x11, -2, 0);
        if ((result & 0x7E00000) != 0x600000 && (s32)result < 0)
            resultHandleFailure(result);
    }
}
}
