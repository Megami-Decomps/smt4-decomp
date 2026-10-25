/* NON_MATCHING: only the zero constant of the selected-sprite reset loop differs (retail materialises it with a fresh mov r0,#0 instead of reusing the register holding 0, shifting the literal pool by one word) and the stm base register of the process arguments. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "ui/ButtonHelp.h"
#include "text/TextDraw.h"

namespace {
/* Animation keys handed to paramsInit. */
struct ButtonHelpKey {
    f32 first;
    f32 last;
    s32 mode;
};

/* g_buttonHelp as this function sees it: the reference count, the work area and the two resource files. */
struct ButtonHelpAcquireGlobals {
    ButtonHelpGlobalsA prefix;
    s32 mbm;
    s32 bf;
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
extern ButtonHelpAcquireGlobals g_buttonHelp;
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
void sysMemClear(void *data, u32 size);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
    AsdProcFunc update, AsdProcFunc destroy, void *work);
u32 taskCreateDraw(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, void *work, u32 owner);
void FUN_002e1698(u32 job);
s32 FUN_002e169c(u32 job);
void FUN_0025ccc0(u32 job);
void paramsClearPacket(UiResourceParameters *packet);

void FUN_0014e188(ButtonHelpUnit *sprite, u32 group, u32 image, UiResourceParameters *owner, u16 id, f32 scale);
void uiGetLayoutPointDifference(ButtonHelpUnit *sprite, u32 group, u32 image, s32 kind);
void FUN_00387240(ButtonHelpUnit *sprite, u32 group, s32 arg);
void spriteSetLayer(ButtonHelpUnit *sprite, u16 layer);
void spriteSetVisible(ButtonHelpUnit *sprite, u8 visible);
u32 spriteHandleCreate(u32 arg);
void positionStateSet(u32 handle, s32 arg, u32 color, f32 value);
u32 FUN_00275bc8(s32 bf, s32 mbm);

/* Takes a reference on the button help; the first one builds its work area, jobs and sprites. */
void campButtonHelpAcquire(void)
{
    if (g_buttonHelp.prefix.references <= 0) {
        if (g_buttonHelp.prefix.work == NULL) {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\ButtonHelp\\ButtonHelp.cpp", 0x42a);
            g_buttonHelp.prefix.work = static_cast<ButtonHelpWorkA *>(asdMemoryAllocTracked(
                ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(ButtonHelpWorkA), 1));
        }
        ButtonHelpWorkA *work = g_buttonHelp.prefix.work;
        sysMemClear(work, sizeof(ButtonHelpWorkA));
        work->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("ButtonHelp CALC"), 3, 0, 0,
                                           FUN_002e1698, FUN_0025ccc0, NULL);
        work->jobs.drawTask = taskCreateDraw(reinterpret_cast<const s8 *>("ButtonHelp DRAW"), 234, 0, 0,
                                        FUN_002e169c, NULL, NULL, work->job);
        ButtonHelpWorkA *panel = g_buttonHelp.prefix.work;
        paramsClearPacket(&panel->packet);
        paramsInit(&panel->packet, sKeysFirst, sizeof(sKeysFirst), sKeysSecond, sizeof(sKeysSecond),
                   sKeysThird, sizeof(sKeysThird), NULL, 0, sKeysFifth, sizeof(sKeysFifth));
        for (s32 i = 0; i < 6; i++) {
            FUN_0014e188(&panel->units[i], 10, 3, &panel->packet, 16, 1.0f);
            uiGetLayoutPointDifference(&panel->units[i], 10, 17 + i, 3);
        }
        FUN_0014e188(&panel->selected[0], 10, 0, &panel->packet, 16, 1.0f);
        FUN_0014e188(&panel->selected[1], 10, 1, &panel->packet, 16, 1.0f);
        FUN_0014e188(&panel->selected[2], 10, 163, &panel->packet, 16, 1.0f);
        FUN_0014e188(&panel->selected[3], 10, 164, &panel->packet, 16, 1.0f);
        ButtonHelpWorkA *current = g_buttonHelp.prefix.work;
        current->unk5E4 = 0;
        for (s32 i = 0; i < 4; i++) {
            spriteSetLayer(&current->selected[i], 2);
            FUN_00387240(&current->selected[i], 10, 0);
            spriteSetVisible(&current->selected[i], 1);
            current->selected[i].x = 0;
            current->selected[i].y = 0;
            current->selected[i].z = 0;
        }
        panel->panelState = 0;
        panel->unk5E2[0] = 1;
        panel->unk5E0 = 1;
        panel->unk5E2[1] = 0;
        panel->count = 0;
        work->unk678 = spriteHandleCreate(0);
        FUN_001527d8(work->unk678, 0xf4f4f4ff);
        positionStateSet(work->unk678, 0, 0x646464ff, 0.0f);
        work->process = FUN_00275bc8(g_buttonHelp.bf, g_buttonHelp.mbm);
    }
    g_buttonHelp.prefix.references++;
}

} /* extern "C" */
