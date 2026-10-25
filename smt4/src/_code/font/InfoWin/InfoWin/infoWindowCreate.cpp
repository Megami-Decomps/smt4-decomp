#include "shard/X14_InfoWindowSmt4.h"
#include "shard/W6_W6Match7_DrawParameters.h"
#include "ui/UiSpriteState.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
void *asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 clear);
void memClear(void *memory, u32 bytes);
s32 infoWindowUpdate(u32 job);
s32 infoWinDraw(u32 job);
u32 asdProcessCreateSimple(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work);
u32 taskCreateDraw(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc draw, AsdProcFunc destroy, u32 work, u32 parent);
void drawParameterBlockClear(Params002c312c *parameters);
void paramsInit(Params002c312c *parameters, const void *source, u32 value,
    u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
void FUN_002bd954(UiSpriteState *sprite, s32 group, s32 id, Params002c312c *parameters, s32 flags, f32 scale);
void timerStart(UiSpriteState *sprite, s32 mode, s32 frame);
void *asdTextCreate(u32 flags);
void FUN_002bd82c(void *text, u32 color);
void positionStateSet(void *text, u32 mode, u32 color, f32 position);
extern const u8 DAT_00403a04[];

// Create the information popup process, stereo draw tasks, sprite timers and text state.
void infoWindowCreate()
{
    struct InfoWindowSetupView {
        u32 process;
        u8 padding04[0x20];
        Params002c312c parameters;
        UiSpriteState background;
        UiSpriteState label;
    };
    if (g_infoWin == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\font\\InfoWin\\InfoWin.cpp", 255);
        g_infoWin = static_cast<InfoWindowSmt4 *>(asdMemAlloc(0x100, 0x100, 0, sizeof(InfoWindowSmt4), 1));
    }
    InfoWindowSmt4 *work = g_infoWin;
    memClear(work, sizeof(InfoWindowSmt4));
    InfoWindowSetupView *setup = reinterpret_cast<InfoWindowSetupView *>(work);
    u32 process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("InfoWin Calc"), 1, 0, 0, infoWindowUpdate, NULL, 0);
    setup->process = process;
    taskCreateDraw(reinterpret_cast<const s8 *>("InfoWin DrawUpLeft"), 0x81, 0, 0, infoWinDraw, NULL, 0, process);
    taskCreateDraw(reinterpret_cast<const s8 *>("InfoWin DrawUpRight"), 0xDF, 0, 0, infoWinDraw, NULL, 0, setup->process);
    work = g_infoWin;
    setup = reinterpret_cast<InfoWindowSetupView *>(work);
    drawParameterBlockClear(&setup->parameters);
    paramsInit(&setup->parameters, DAT_00403a04, 0x24, 0, 0, 0, 0, 0, 0, 0, 0);
    FUN_002bd954(&setup->background, 0xE, 0x87, &setup->parameters, 1, 1.0f);
    timerStart(&setup->background, 0, 0);
    FUN_002bd954(&setup->label, 0xE, 0x87, &setup->parameters, 1, 1.0f);
    timerStart(&setup->label, 2, 0);
    void *text = asdTextCreate(0);
    work->text = text;
    FUN_002bd82c(text, 0xFFFFFFFF);
    positionStateSet(work->text, 0, 0x646464FF, 0.0f);
    work->timer = 30;
}
}
