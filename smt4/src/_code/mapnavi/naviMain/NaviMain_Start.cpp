/* NON_MATCHING: canonical task contracts and the display-state initializer reproduce retail's bases/pool; argument-stack pointer register and final zero-argument scheduling still differ. */
#include "shard/NaviMain.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern NaviMain *g_naviMain;
extern const char DAT_00404c78[];
extern const char DAT_00404ca8[];
extern const char DAT_00404cb8[];
extern const char DAT_00404cc4[];

void NaviMain_InitInstance(void *instance);
void FUN_002898e4(void);
s32 gameFlagIsSet(u32 flag);
void FUN_00289880(void);
void buttonHelpCreate(void);
void FUN_00240cec(s32 requestId);
void naviRequestClose(u32 handle);
s32 NAVI_PROC(u32 handle);
s32 NAVI_DOWN(u32 handle);
s32 naviMainDrawFade(u32 handle);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work, void *owner);
void NaviMain_ResetFlags(void *settings, u8 value);
void requestBeginProcessing(void *request, s8 mode, u32 value);

/* Initialize display/navigation state; the creator owns the task and close-request prefix. */
static __inline NaviMain *naviMainInitializeState(NaviMain *navi)
{
    navi->active = 0;
    navi->unk0009[0] = 0;
    navi->posX = 0;
    navi->posY = 0;
    navi->third = 0;
    navi->argumentValue = 0.0f;
    navi->unk2C = 0;
    navi->currentMap = 1;
    navi->value = 1.0f;
    navi->unk38f = 0.0f;
    navi->unk3Cf = 0.0f;
    return navi;
}

/* Creates the navi screen: the state block, its process and its two draw tasks, then starts the first request. */
void NaviMain_Start(s32 unused, s32 requestId)
{
    asdDebugTrace(DAT_00404c78, 213);
    NaviMain *navi = (NaviMain *)asdMemAlloc(0x100, 0x100, 0, 0x12344, 1);
    g_naviMain = navi;
    naviMainInitializeState(navi);
    navi->closeRequested = 0;
    NaviMain_InitInstance(navi->state);
    FUN_002898e4();
    if (gameFlagIsSet(0x16) == 0) {
        FUN_00289880();
    }
    buttonHelpCreate();
    FUN_00240cec(requestId);
    navi->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_00404cc4), 2, 0, 0, NAVI_PROC, naviRequestClose, reinterpret_cast<u32>(navi));
    navi->drawTask = taskCreateDraw(reinterpret_cast<const s8 *>(DAT_00404cb8), 0xe5, 1, 0, NAVI_DOWN, NULL, reinterpret_cast<u32>(navi), reinterpret_cast<void *>(navi->job));
    navi->tasks.fadeTask = taskCreateDraw(reinterpret_cast<const s8 *>(DAT_00404ca8), 0xe6, 0, 0, naviMainDrawFade, NULL, 0, reinterpret_cast<void *>(navi->job));
    NaviMain_ResetFlags(navi->settings, 1);
    if (g_naviMain != NULL) {
        requestBeginProcessing(g_naviMain->settings, 0, 0);
    }
}

} /* extern "C" */
