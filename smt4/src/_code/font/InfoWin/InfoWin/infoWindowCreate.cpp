#include "font/InfoWin.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/UiSpriteApi.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
s32 infoWindowUpdate(u32 job);
s32 infoWinDraw(u32 job);
u32 taskCreateDraw(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc draw, AsdProcFunc destroy, u32 work, u32 parent);
void drawParameterBlockClear(UiResourceParameters *parameters);

void *asdTextCreate(u32 flags);
void asdTextSetBaseColor(void *text, u32 color);
void positionStateSet(void *text, u32 mode, u32 color, f32 position);
extern const u8 g_infoWindowDefaultParams[];

// Create the information popup process, stereo draw tasks, sprite timers and text state.
void infoWindowCreate()
{
    if (g_infoWin == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\font\\InfoWin\\InfoWin.cpp", 255);
        g_infoWin = static_cast<InfoWindow *>(asdMemAlloc(0x100, 0x100, 0, sizeof(InfoWindow), 1));
    }
    InfoWindow *work = g_infoWin;
    memClear(work, sizeof(InfoWindow));
    u32 process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("InfoWin Calc"), 1, 0, 0, infoWindowUpdate, NULL, 0);
    work->task = process;
    taskCreateDraw(reinterpret_cast<const s8 *>("InfoWin DrawUpLeft"), 0x81, 0, 0, infoWinDraw, NULL, 0, process);
    taskCreateDraw(reinterpret_cast<const s8 *>("InfoWin DrawUpRight"), 0xDF, 0, 0, infoWinDraw, NULL, 0, work->task);
    work = g_infoWin;
    drawParameterBlockClear(&work->parameters);
    paramsInit(&work->parameters, g_infoWindowDefaultParams, 0x24, 0, 0, 0, 0, 0, 0, 0, 0);
    uiSpriteStateInitFromSource(&work->background, 0xE, 0x87, &work->parameters, 1, 1.0f);
    timerStart(&work->background, 0, 0);
    uiSpriteStateInitFromSource(&work->content, 0xE, 0x87, &work->parameters, 1, 1.0f);
    timerStart(&work->content, 2, 0);
    void *text = asdTextCreate(0);
    work->text = text;
    asdTextSetBaseColor(text, 0xFFFFFFFF);
    positionStateSet(work->text, 0, 0x646464FF, 0.0f);
    work->timer = 30;
}
}
