/* NON_MATCHING: first rewrite from the asm (205 rows against 231; asdDebugTrace is a real call here but a nop after armlink inlining in retail): same flow, strings, constants and handler table; retail keeps the work pointer/size constant in more registers (r5 = 0xD7C then the draw callback, r7 = 1, r8 = &g_campCec) and builds the thread-create argument block (info, stack top, priority, affinity) with different stack stores, and the handler table stores use ldr/str pairs in a different order */
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "sys/ResultReport.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/AsdMemAlloc.h"
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

extern "C" {

typedef void (*CecHandler)(void);

/* Camp "CEC" (StreetPass) screen work (observed fields only). */
struct CampCecWork {
    u32 process;                 /* 0x000: the screen's update process */
    u8 pad004[4];
    CecHandler handler[16];      /* 0x008: per-state handler table; unused entries are not set here */
    u8 pad048[0x0A0 - 0x048];
    u8 modelScene[0xCF4 - 0x0A0]; /* 0x0A0: model scene, initialised by campCecModelSceneInit */
    u32 scriptFile;              /* 0xCF4: camp/CecMain_scr.bf */
    u32 messageFile;             /* 0xCF8: camp/CecMain_msg.mbm */
    u8 padCFC[0xD24 - 0xCFC];
    s32 selectA;                 /* 0xD24 */
    s32 mode;                    /* 0xD28: screen state (0, 13 = waiting for the files) */
    s32 selectB;                 /* 0xD2C */
    s32 selectC;                 /* 0xD30 */
    s32 selectD;                 /* 0xD34 */
    u8 padD38[0xD5C - 0xD38];
    s32 availability;            /* 0xD5C: 0 usable, 1 restricted, 2 unavailable */
    u8 padD60[1];
    u8 helpFlagA;                /* 0xD61 */
    u8 helpFlagB;                /* 0xD62 */
    u8 helpFlagC;                /* 0xD63 */
    u8 loading;                  /* 0xD64 */
    u8 flagD65;                  /* 0xD65 */
    u8 padD66[2];
    s32 stateD68;                /* 0xD68 */
    void *taskList;              /* 0xD6C */
    u8 thread[4];                /* 0xD70 */
    void *threadStack;           /* 0xD78 */
};

extern CampCecWork *g_campCec;   /* 0x43daa8 */

extern u8 LAB_0018b20c;
extern u8 LAB_00220fa8;

void campCecDrawDimmingOverlay(void);
void FUN_002113c0(void);
void FUN_002ec588(void);
void FUN_002ccb7c(void);
void FUN_001ebedc(void);
void FUN_001dbf34(void);
void FUN_002110ac(void);
void FUN_002e1898(void);
void FUN_002114fc(void);
void FUN_001dbeb8(void);
void FUN_001ebe10(void);
void FUN_001dc608(void);
void FUN_003105f4(void);
void FUN_002ece60(void);
void FUN_001ec6e0(void);

void taskCreateDraw(const char *name, s32 priority, s32 a, s32 b, void (*draw)(void), s32 c, s32 d, u32 owner);
void *asdOperatorNew(s32 size, void (*owner)(void));
void buttonHelpSetPreset(s32 preset);
void FUN_002579bc(s32 arg);
void campCecModelSceneInit(void *scene);
void bgmRestart(s32 arg);
void soundChannelRequestIfEnabled(u32 id, s32 a, s32 frames);
void runWinOpen(void);
void runWinOpenState(void);
void gameDataBlocksAddFlags(s32 flags);
void gameDataFlagsSetBits(s32 bits);
s32 nn_cfg_CTR_IsRestrictP2pCec(void);
u8 FUN_00359f90(void);
u32 FUN_002bcc60(void *thread, s32 *info, void (*entry)(void), void *argument, s32 stackTop, s32 priority, s32 affinity, s32 flag);
void asdDebugTrace(const char *path, s32 line);

/* Creates the camp CEC screen: allocates its work, starts the update process and draw tasks,
 * installs the handler table, then either queues the script/message files (when the feature is
 * usable) or opens the screen directly and starts its worker thread. */
void FUN_001ffc5c(void)
{
    CampCecWork *work;

    if (g_campCec == 0) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\CampCec\\CampCec.cpp", 281);
        g_campCec = (CampCecWork *)asdMemAlloc(0x100, 0x100, 0, 0xD7C, 1);
    }
    work = g_campCec;
    memClear(work, 0xD7C);
    work->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("CampCec Calc"), 1, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(&LAB_0018b20c), 0, 0);
    taskCreateDraw("CampCec DrawUpLeft", 0x7D, 0, 0, campCecDrawDimmingOverlay, 0, 0, work->process);
    taskCreateDraw("CampCec DrawUpRight", 0xDB, 0, 0, campCecDrawDimmingOverlay, 0, 0, work->process);

    work->selectA = -1;
    work->mode = 0;
    work->selectB = -1;
    work->selectC = -1;
    work->selectD = 0;
    work->handler[0] = FUN_002113c0;
    work->handler[1] = FUN_002ec588;
    work->handler[2] = FUN_002ccb7c;
    work->handler[3] = FUN_001ebedc;
    work->handler[4] = FUN_001dbf34;
    work->handler[5] = FUN_002110ac;
    work->handler[6] = FUN_002e1898;
    work->handler[9] = FUN_002114fc;
    work->handler[7] = FUN_001dbeb8;
    work->handler[10] = FUN_001ebe10;
    work->handler[8] = FUN_001dc608;
    work->handler[11] = FUN_001ebe10;
    work->handler[12] = FUN_003105f4;
    work->handler[13] = FUN_002ece60;
    work->handler[15] = (CecHandler)&LAB_00220fa8;

    work->availability = 0;
    if (nn_cfg_CTR_IsRestrictP2pCec() != 0) {
        work->availability = 1;
    } else if (FUN_00359f90() == 0) {
        work->availability = 2;
    }
    work->loading = 0;

    if (work->availability != 0) {
        asdLoadFileAsyncSimple("camp/CecMain_scr.bf", &work->scriptFile, 0);
        asdLoadFileAsyncSimple("camp/CecMain_msg.mbm", &work->messageFile, 0);
        work->mode = 13;
    } else {
        buttonHelpSetPreset(3);
        work->helpFlagA = 0;
        work->helpFlagB = 1;
        work->helpFlagC = 0;
        buttonHelpSetPreset(0xB9);
        FUN_002579bc(0);
        campCecModelSceneInit(work->modelScene);
        bgmRestart(0);
        soundChannelRequestIfEnabled(0x1000062, 0, 60);
        runWinOpen();
        runWinOpenState();
        gameDataBlocksAddFlags(2);
        gameDataFlagsSetBits(2);
        work->flagD65 = 0;
        work->stateD68 = 0;
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\CampCec\\CampCec.cpp", 573);
        work->threadStack = (void *)memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
        work->taskList = asdOperatorNew(0x18, campCecDrawDimmingOverlay);
        resultReportIfFailed(work->taskList, work->threadStack, 0x1000);
        s32 info = 4;
        u32 result = FUN_002bcc60(work->thread, &info, FUN_001ec6e0, work, 0, 0x11, -2, 0);
        if (((result & 0x7E00000) != 0x600000) && (s32)result < 0) {
            FUN_002c526c(result);
        }
    }
}

} /* extern "C" */
