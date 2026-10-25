/* NON_MATCHING: the unit loop keeps one &units[i] pointer where retail recomputes base+892 for each store and the call, and g_buttonHelp is reloaded instead of living in r9 */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;
extern const u8 DAT_00402550;

void *asdMemAlloc(s32 heap, s32 align, s32 a, s32 size, s32 flag);
void memClear(void *block, s32 size);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                           AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work, u32 parent);
void drawParameterBlockClear(UiResourceParameters *resources);

void FUN_002bd954(ButtonHelpDisplayUnit *unit, s32 kind, s32 count, UiResourceParameters *resources,
                  u16 flags, f32 speed);
void FUN_00262210(ButtonHelpDisplayUnit *unit, s32 kind, s32 count, s32 mode);
void FUN_00295eb0(ButtonHelpDisplayUnit *unit, s32 kind, s32 count);
u32 asdTextCreate(s32 arg);
void FUN_002bd82c(u32 text, u32 color);
void positionStateSet(u32 text, s32 arg, u32 color, f32 value);
u32 FUN_00297060(s32 bf, s32 mbm);
void buttonHelpNotifyNoop(u32 handle);
s32 FUN_001c0c38(u32 handle);
s32 FUN_002109cc(u32 handle);

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
        work->jobs.process = asdProcessCreateSimple((const s8 *)"ButtonHelp CALC", 1, 0, 0,
                                                    FUN_001c0c38, buttonHelpNotifyNoop, 0);
        work->jobs.drawTask = taskCreateDraw((const s8 *)"ButtonHelp DRAW", 0xE6, 0, 0, FUN_002109cc,
                                             NULL, 0, work->jobs.process);

        ButtonHelpWork *help = g_buttonHelp.work;
        drawParameterBlockClear(&help->ui.parameters);
        paramsInit(&help->ui.parameters, &DAT_00402550 - 0x4A, 0x30, &DAT_00402550 - 0x18, 0xC,
                   &DAT_00402550 - 0xC, 0xC, NULL, 0, &DAT_00402550, 0xA8);
        for (s32 i = 0; i < 6; i++) {
            FUN_002bd954(&help->ui.selection[i], 0x12, 3, &help->ui.parameters, 0x10, 1.0f);
            FUN_00262210(&help->ui.selection[i], 0x12, i + 0x11, 3);
        }
        FUN_002bd954(&help->units[0], 0x12, 0, &help->ui.parameters, 0x10, 1.0f);
        FUN_002bd954(&help->units[1], 0x12, 1, &help->ui.parameters, 0x10, 1.0f);

        ButtonHelpWork *units = g_buttonHelp.work;
        units->mode = 0;
        for (s32 i = 0; i < 2; i++) {
            ButtonHelpDisplayUnit *unit = &units->units[i];
            unit->value = 2;
            FUN_00295eb0(unit, 0x12, 0);
            unit->active = 1;
            unit->unk0C = 0;
            unit->unk10 = 0;
            unit->unk14 = 0;
        }
        help->unk4C5 = 0;
        help->unk04C6[0] = 1;
        help->unk4C4 = 1;
        help->unk04C6[1] = 0;

        work->unk558 = asdTextCreate(0);
        FUN_002bd82c(work->unk558, 0x323232FF);
        positionStateSet(work->unk558, 0, 0x646464FF, 0.0f);
        work->unk560 = FUN_00297060(g_buttonHelp.bf, g_buttonHelp.mbm);
    }
    g_buttonHelp.references++;
}

} /* extern "C" */
