/* NON_MATCHING: the resource packets are now defined here in retail's order (presets + packet A, packets B and C, packet E), so paramsInit's pointers derive from one literal by the same chained subtraction; remaining: callee-saved register numbering (retail keeps g_buttonHelp in r9, the work in r8, constants 1/0 in fp/sl). */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "ui/ButtonHelp.h"
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
extern ButtonHelpGlobals g_buttonHelp;

u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work, u32 parent);
void drawParameterBlockClear(UiResourceParameters *resources);

void FUN_002bd954(ButtonHelpDisplayUnit *unit, s32 kind, s32 count, UiResourceParameters *resources,
                  u16 flags, f32 speed);
void FUN_00262210(ButtonHelpDisplayUnit *unit, s32 kind, s32 count, s32 mode);
void FUN_00295eb0(ButtonHelpDisplayUnit *unit, s32 kind, s32 count);
u32 asdTextCreate(s32 arg);
void asdTextSetBaseColor(u32 text, u32 color);
void positionStateSet(u32 text, s32 arg, u32 color, f32 value);
u32 FUN_00297060(s32 bf, s32 mbm);
void buttonHelpNotifyNoop(u32 handle);
s32 FUN_001c0c38(u32 handle);
s32 FUN_002109cc(u32 handle);

/* Allocates the button-help work on first use: calc process, draw task, the six selection
 * animations and the two display units, then bumps the reference count. */
void buttonHelpCreate(void)
{
    ButtonHelpGlobals *globals = &g_buttonHelp;

    if (globals->references <= 0) {
        if (globals->work == NULL) {
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\ButtonHelp\\ButtonHelp.cpp", 832);
            globals->work = (ButtonHelpWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(ButtonHelpWork), 1);
        }
        ButtonHelpWork *work = globals->work;
        memClear(work, sizeof(ButtonHelpWork));
        work->jobs.process = asdProcessCreateSimple((const s8 *)"ButtonHelp CALC", 1, 0, 0, FUN_001c0c38, buttonHelpNotifyNoop, 0);
        work->jobs.drawTask = taskCreateDraw((const s8 *)"ButtonHelp DRAW", 0xE6, 0, 0, FUN_002109cc,
                                             NULL, 0, work->jobs.process);

        ButtonHelpWork *help = globals->work;
        drawParameterBlockClear(&help->ui.parameters);
        paramsInit(&help->ui.parameters, sButtonHelpPresets.packetA, 0x30, &sButtonHelpPacketB, 0xC,
                   &sButtonHelpPacketC, 0xC, NULL, 0, sButtonHelpPacketE, 0xA8);
        for (s32 i = 0; i < 6; i++) {
            FUN_002bd954(&help->ui.selection[i], 0x12, 3, &help->ui.parameters, 0x10, 1.0f);
            FUN_00262210(&help->ui.selection[i], 0x12, i + 0x11, 3);
        }
        FUN_002bd954(&help->units[0], 0x12, 0, &help->ui.parameters, 0x10, 1.0f);
        FUN_002bd954(&help->units[1], 0x12, 1, &help->ui.parameters, 0x10, 1.0f);

        ButtonHelpWork *units = globals->work;
        units->mode = 0;
        for (s32 i = 0; i < 2; i++) {
            units->units[i].value = 2;
            FUN_00295eb0(&units->units[i], 0x12, 0);
            units->units[i].active = 1;
            units->units[i].unk0C = 0;
            units->units[i].unk10 = 0;
            units->units[i].unk14 = 0;
        }
        help->unk4C5 = 0;
        help->unk04C6[0] = 1;
        help->unk4C4 = 1;
        help->unk04C6[1] = 0;

        work->unk558 = asdTextCreate(0);
        asdTextSetBaseColor(work->unk558, 0x323232FF);
        positionStateSet(work->unk558, 0, 0x646464FF, 0.0f);
        work->unk560 = FUN_00297060(globals->bf, globals->mbm);
    }
    globals->references++;
}

} /* extern "C" */
