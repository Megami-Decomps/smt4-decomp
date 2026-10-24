/* NON_MATCHING: register allocation only: retail passes navi in r4 to NaviMain_InitInstance (armcc uses r0), puts sp+4 in r8 instead of r5, and splits the zero arguments of the final requestBeginProcessing tail call between r6 and #0. */
#include "shard/NaviMain.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern NaviMain *g_naviMain;
extern const char DAT_00404c78[];
extern const char DAT_00404ca8[];
extern const char DAT_00404cb8[];
extern const char DAT_00404cc4[];

void *asdMemAlloc(u32 bytes, u32 alignment, u32 flags, u32 size, u32 clear);
void NaviMain_InitInstance(void *instance);
void FUN_002898e4(void);
s32 gameFlagIsSet(u32 flag);
void FUN_00289880(void);
void buttonHelpCreate(void);
void FUN_00240cec(u32 mode);
void naviRequestClose(void *job);
u32 NAVI_PROC(void);
u32 NAVI_DOWN(void);
u32 FUN_001fc4f8(void);
u32 asdProcessCreateSimple(const char *name, s32 priority, s32 flags, s32 owner,
    u32 (*step)(void), void (*destroy)(void *), void *work);
u32 taskCreateDraw(const char *name, s32 priority, s32 flags, s32 owner,
    u32 (*draw)(void), void (*destroy)(void *), void *work, u32 process);
void NaviMain_ResetFlags(void *settings, s32 value);
void requestBeginProcessing(void *request, s32 value, s32 type);

/* Creates the navi screen: the state block, its process and its two draw tasks, then starts the first request. */
void NaviMain_Start(s32 unused, u32 mode)
{
    asdDebugTrace(DAT_00404c78, 213);
    NaviMain *navi = (NaviMain *)asdMemAlloc(0x100, 0x100, 0, 0x12344, 1);
    g_naviMain = navi;
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
    navi->closeRequested = 0;
    NaviMain_InitInstance(navi->state);
    FUN_002898e4();
    if (gameFlagIsSet(0x16) == 0) {
        FUN_00289880();
    }
    buttonHelpCreate();
    FUN_00240cec(mode);
    navi->job = asdProcessCreateSimple(DAT_00404cc4, 2, 0, 0, NAVI_PROC, naviRequestClose, navi);
    navi->drawTask = taskCreateDraw(DAT_00404cb8, 0xe5, 1, 0, NAVI_DOWN, NULL, navi, navi->job);
    navi->tasks.fadeTask = taskCreateDraw(DAT_00404ca8, 0xe6, 0, 0, FUN_001fc4f8, NULL, NULL, navi->job);
    NaviMain_ResetFlags(navi->settings, 1);
    if (g_naviMain != NULL) {
        requestBeginProcessing(g_naviMain->settings, 0, 0);
    }
}

} /* extern "C" */
