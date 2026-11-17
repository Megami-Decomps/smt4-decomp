/* NON_MATCHING: only the zero constant of the selected-sprite reset loop differs (retail materialises it with a fresh mov r0,#0 instead of reusing the register holding 0, shifting the literal pool by one word) and the stm base register of the process arguments. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"
#include "script/scrScriptProcess.h"
#include "text/TextDraw.h"

namespace {
/* Animation keys handed to paramsInit. */
struct ButtonHelpKey {
    f32 first;
    f32 last;
    s32 mode;
};

/* Animation tables for paramsInit; the original file defined them statically. */
static const s32 sKeysFirst[12] = {
    0, 0, 0, 0, 0, 0,
    320, 0, 8, 0, 65216, 4,
};
static const ButtonHelpKey sKeysSecond[2] = {
    {1.0f, 1.0f, 0},
    {0.4f, 0.0f, 3},
};
static const ButtonHelpKey sKeysThird[2] = {
    {0.0f, 1.0f, 4},
    {1.0f, 1.0f, 3},
};
static const s32 sKeysFifth[42] = {
    0, 0, -3, 0, 0, -3, 0, 1, 0, -3, -3, 0,
    -3, 0, -1, 0, -1, -1, 0, -1, 0, 1, 1, -3,
    0, 1, -3, 0, 0, 1, -3, -3, 0, -3, 0, -1,
    0, -1, -1, 0, -1, 0,
};
}

extern "C" {
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
void sysMemClear(void *data, u32 size);
u32 taskCreateDraw(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, void *work, u32 owner);
void FUN_002e1698(u32 job);
s32 FUN_002e169c(u32 job);
void FUN_0025ccc0(u32 job);
void paramsClearPacket(UiResourceParameters *packet);

void uiGetLayoutPointDifference(UiSpriteState *sprite, u32 group, u32 image, s32 kind);
void uiStoreTextureEntryCenter(UiSpriteState *sprite, u32 group, s32 arg);
void spriteSetVisible(UiSpriteState *sprite, u8 visible);
u32 spriteHandleCreate(u32 arg);
void positionStateSet(u32 handle, s32 arg, u32 color, f32 value);

/* Takes a reference on the button help; the first one builds its work area, jobs and sprites. */
void campButtonHelpAcquire(void)
{
    if (g_buttonHelp.references <= 0) {
        if (g_buttonHelp.work == NULL) {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\ButtonHelp\\ButtonHelp.cpp", 0x42a);
            g_buttonHelp.work = static_cast<ButtonHelpWorkA *>(asdMemoryAllocTracked(
                ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(ButtonHelpWorkA), 1));
        }
        ButtonHelpWorkA *work = g_buttonHelp.work;
        sysMemClear(work, sizeof(ButtonHelpWorkA));
        work->calcProcess = asdProcessCreateSimple(reinterpret_cast<const s8 *>("ButtonHelp CALC"), 3, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_002e1698), FUN_0025ccc0, NULL);
        work->drawTask = taskCreateDraw(reinterpret_cast<const s8 *>("ButtonHelp DRAW"), 234, 0, 0,
                                        FUN_002e169c, NULL, NULL, work->calcProcess);
        ButtonHelpWorkA *panel = g_buttonHelp.work;
        paramsClearPacket(&panel->resources);
        paramsInit(&panel->resources, sKeysFirst, sizeof(sKeysFirst), sKeysSecond, sizeof(sKeysSecond),
                   sKeysThird, sizeof(sKeysThird), NULL, 0, sKeysFifth, sizeof(sKeysFifth));
        for (s32 i = 0; i < 6; i++) {
            uiSpriteStateInitFromSource(&panel->slotSprites[i], 10, 3, &panel->resources, 16, 1.0f);
            uiGetLayoutPointDifference(&panel->slotSprites[i], 10, 17 + i, 3);
        }
        uiSpriteStateInitFromSource(&panel->panelSprites[0], 10, 0, &panel->resources, 16, 1.0f);
        uiSpriteStateInitFromSource(&panel->panelSprites[1], 10, 1, &panel->resources, 16, 1.0f);
        uiSpriteStateInitFromSource(&panel->panelSprites[2], 10, 163, &panel->resources, 16, 1.0f);
        uiSpriteStateInitFromSource(&panel->panelSprites[3], 10, 164, &panel->resources, 16, 1.0f);
        ButtonHelpWorkA *current = g_buttonHelp.work;
        current->mode = 0;
        for (s32 i = 0; i < 4; i++) {
            spriteSetLayer(&current->panelSprites[i], 2);
            uiStoreTextureEntryCenter(&current->panelSprites[i], 10, 0);
            spriteSetVisible(&current->panelSprites[i], 1);
            current->panelSprites[i].x = 0;
            current->panelSprites[i].y = 0;
            current->panelSprites[i].z = 0;
        }
        panel->panelState = 0;
        panel->panelSliding = 1;
        panel->drawEnabled = 1;
        panel->touchSuspended = 0;
        panel->touchCount = 0;
        work->text.directoryText = spriteHandleCreate(0);
        uiObjectSetColorRgb(work->text.directoryText, 0xf4f4f4ff);
        positionStateSet(work->text.directoryText, 0, 0x646464ff, 0.0f);
        work->scriptProcess = scrScriptProcessCreate(g_buttonHelp.bf, g_buttonHelp.mbm);
    }
    g_buttonHelp.references++;
}

} /* extern "C" */
