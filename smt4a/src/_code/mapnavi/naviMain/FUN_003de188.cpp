/* NON_MATCHING: the queued-request block (offsets 0x1688..0x169c of the game flag block) is addressed through per-field pool constants in retail, so it keeps only r4-r9; the build CSEs the six field addresses into extra registers (sl/fp) and merges the 0x28/0x2c stores into an stm. FUN_002ba728 is a callback at 0x2ba728 that has no unit/symbol yet. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "shard/NaviMain.h"

extern "C" {
extern NaviMainA *g_naviMain;

void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 region, u32 size, u32 option);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc onUpdate,
                           AsdProcFunc onEnd, u32 work);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc onUpdate,
                   AsdProcFunc onEnd, u32 work, void *owner);
u8 *gameFlagsGetBlock(void);
s32 gameFlagIsSet(u32 flag);
void campCommonBgAcquire(void);
void campButtonHelpAcquire(void);
void FUN_003b61ec(void);
void commonBgReset(void);
void FUN_00485e74(u8 *panel);
void FUN_00490484(void *panel, u32 first, u32 third, u32 second, f32 x, f32 y);
void FUN_004930e4(u32 argument);
void requestBeginProcessing(u8 *request, s32 value, s32 type);
void NaviMain_ResetFlags(u8 *request, u8 mode);
s32 naviMenuStartIfIdle(u32 handle);
void naviRequestClose(u32 handle);
s32 naviMainPollResourcesAndUpdatePanel(u32 handle);
s32 FUN_002ba728(u32 handle);

// A navigation request saved while the navigation screen was closed (see navigationSetOrQueueRequest).
struct DeferredNavigationRequest {
    u8 unk0000[0x1688];
    s32 pending;
    u32 first;
    u32 third;
    s32 x;
    s32 y;
    u32 second;
};

// Creates the navigation screen: allocates its state, starts its update and draw tasks and applies a queued request.
void FUN_003de188(u32 unused, u32 argument)
{
    asdDebugTrace("c:\\SMT4F\\SMTF4\\sdds4\\program\\map\\navi\\naviMain.cpp", 227);
    NaviMainA *navigation = (NaviMainA *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(NaviMainA) + 0xc, 1);
    g_naviMain = navigation;
    DeferredNavigationRequest *queued = (DeferredNavigationRequest *)gameFlagsGetBlock();

    navigation->active = 0;
    navigation->unk00009 = 0;
    navigation->posX = 0;
    navigation->posY = 0;
    navigation->thirdValue = 0;
    navigation->argumentValue = 0.0f;
    navigation->unk2C = 0;
    navigation->currentMap = 1;
    navigation->scale = 1.0f;
    navigation->value.first = 0.0f;
    navigation->value.second = 0.0f;
    navigation->closeRequested = 0;
    FUN_00485e74(navigation->panel);

    campCommonBgAcquire();
    if (gameFlagIsSet(0x49a) == 0) {
        FUN_003b61ec();
    } else {
        commonBgReset();
    }
    if (gameFlagIsSet(0xc) != 0 && gameFlagIsSet(0x10) == 0) {
        FUN_003b61ec();
    }
    campButtonHelpAcquire();
    FUN_004930e4(argument);

    navigation->job = asdProcessCreateSimple("NAVI PROC", 4, 0, 0, naviMenuStartIfIdle, naviRequestClose,
                                             (u32)navigation);
    navigation->drawTask = taskCreateDraw("NAVI DOWN", 0xe8, 1, 0, naviMainPollResourcesAndUpdatePanel, NULL,
                                          (u32)navigation, (void *)navigation->job);
    navigation->tasks.fadeTask = taskCreateDraw("NAVI FADE DRAW", 0xea, 0, 0, FUN_002ba728, NULL, 0,
                                          (void *)navigation->job);
    NaviMain_ResetFlags(navigation->slider, 1);
    if (g_naviMain != NULL) {
        requestBeginProcessing(g_naviMain->slider, 0, 0);
    }

    if (queued->pending == 1) {
        FUN_00490484(navigation->panel, queued->first, queued->third, queued->second, (f32)queued->x,
                     (f32)queued->y);
        queued->pending = 0;
        queued->first = 0;
        queued->third = 0;
        queued->x = 0;
        queued->y = 0;
        queued->second = 0;
    }
}
}
