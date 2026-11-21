#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "ui/ButtonHelpGlobal.h"
#include "script/scrScriptProcess.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/AsdMemAlloc.h"

/* The button-help sprite resource packets (0x30, 0xc, 0xc and 0xa8 bytes), in retail's order. */
struct ButtonHelpPacketScale {
    s32 first;
    f32 scale;
    s32 count;
};
/* Preset id tables, immediately followed by the first packet. */
struct ButtonHelpPresetsAndPacket {
    u8 presets[14];
    s16 packetA[24];
};
static const ButtonHelpPresetsAndPacket sButtonHelpPresets = {
    {0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0, 0, 0, 5, 6, 4, 3, 2, 1},
    {0, 18, 0, -3, 3, 0, 0, -3, 0, 0, 1, 0, 320, 0, 0, 0, 8, 0, 0, 0, -320, 0, 4, 0},
};
static const ButtonHelpPacketScale sButtonHelpPacketB = {0, 1.0f, 4};
static const ButtonHelpPacketScale sButtonHelpPacketC = {0, 1.0f, 4};
static const s32 sButtonHelpPacketE[42] = {
    0, 0, -3, 0, 0, -3, 0, 1, 0, -3, -3, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0,
    1, 1, -3, 0, 1, -3, 0, 0, 1, -3, -3, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0,
};

extern "C" {

u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work, u32 parent);
void drawParameterBlockClear(UiResourceParameters *resources);

void uiGetLayoutPointDifference(UiSpriteState *unit, s32 kind, s32 count, s32 mode); // declcheck: local (the shared declaration in camp/UIQuest/UIQuest.h does not compile here: argument of type "UiSpriteState *" is incompatible with parameter of type "PointDeltaWork *")
void uiStoreTextureEntryCenter(UiSpriteState *unit, s32 kind, s32 count);
u32 asdTextCreate(s32 arg);
void asdTextSetBaseColor(u32 text, u32 color);
void positionStateSet(u32 text, s32 arg, u32 color, f32 value);
void buttonHelpNotifyNoop(u32 handle);
s32 buttonHelpCalc(u32 handle);
s32 FUN_002109cc(u32 handle);

/* buttonHelpSetPanelMode's body: stores the help mode, resetting the two panel sprites for mode 0 or hiding them. */
static __inline void buttonHelpSetPanelMode(u8 mode)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    work->mode = mode;
    if (mode == 0) {
        for (s32 i = 0; i < 2; ++i) {
            spriteSetLayer(&work->panelSprites[i], 2);
            uiStoreTextureEntryCenter(&work->panelSprites[i], 18, 0);
            spriteSetVisible(&work->panelSprites[i], 1);
            work->panelSprites[i].x = 0;
            work->panelSprites[i].y = 0;
            work->panelSprites[i].z = 0;
        }
    } else {
        for (s32 i = 0; i < 2; ++i) {
            spriteSetVisible(&work->panelSprites[i], 0);
        }
    }
}

/* Allocates the button-help work on first use: calc process, draw task, the six selection
 * animations and the two display units, then bumps the reference count. */
void buttonHelpCreate(void)
{
    if (g_buttonHelp.references <= 0) {
        if (g_buttonHelp.work == NULL) {
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\ButtonHelp\\ButtonHelp.cpp", 832);
            g_buttonHelp.work = (ButtonHelpWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(ButtonHelpWork), 1);
        }
        ButtonHelpWork *work = g_buttonHelp.work;
        memClear(work, sizeof(ButtonHelpWork));
        work->calcProcess = asdProcessCreateSimple((const s8 *)"ButtonHelp CALC", 1, 0, 0, buttonHelpCalc, buttonHelpNotifyNoop, 0);
        work->drawTask = taskCreateDraw((const s8 *)"ButtonHelp DDRAW", 0xE6, 0, 0, FUN_002109cc,
                                             NULL, 0, work->calcProcess);

        ButtonHelpWork *help = g_buttonHelp.work;
        drawParameterBlockClear(&help->resources);
        paramsInit(&help->resources, sButtonHelpPresets.packetA, 0x30, &sButtonHelpPacketB, 0xC,
                   &sButtonHelpPacketC, 0xC, NULL, 0, sButtonHelpPacketE, 0xA8);
        for (s32 i = 0; i < 6; i++) {
            uiSpriteStateInitFromSource(&help->slotSprites[i], 0x12, 3, &help->resources, 0x10, 1.0f);
            uiGetLayoutPointDifference(&help->slotSprites[i], 0x12, i + 0x11, 3);
        }
        uiSpriteStateInitFromSource(&help->panelSprites[0], 0x12, 0, &help->resources, 0x10, 1.0f);
        uiSpriteStateInitFromSource(&help->panelSprites[1], 0x12, 1, &help->resources, 0x10, 1.0f);

        buttonHelpSetPanelMode(0);
        help->panelState = 0;
        help->panelSliding = 1;
        help->drawEnabled = 1;
        help->touchSuspended = 0;

        work->text.directoryText = asdTextCreate(0);
        asdTextSetBaseColor(work->text.directoryText, 0x323232FF);
        positionStateSet(work->text.directoryText, 0, 0x646464FF, 0.0f);
        work->scriptProcess = scrScriptProcessCreate(g_buttonHelp.bf, g_buttonHelp.mbm);
    }
    g_buttonHelp.references++;
}

} /* extern "C" */
