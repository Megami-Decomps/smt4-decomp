/* NON_MATCHING: 64 raw / 20 shape. Three places differ: the flag at 0x2584 is stored through a pooled offset
 * where retail forms its address with two adds after the block's (evaluating the block's address before the
 * store gives retail's code, 8 raw: a helper taking the block, which has no other evidence yet); the skill menu's
 * screen pointer is in r0 where retail keeps it in r2; and sprite 6's packet/0xC9 stack arguments load in the
 * other order. */
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "util/MemoryHelpers.h"
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "ui/UiControl.h"
#include "status/StatusDownA.h"
#include "ui/UiSpriteState.h"

/* Animation tables for paramsInit; the original file defined them statically. */
static const UiSpritePositionKey sPositionKeys[] = {
    {-320, 0, 0, 0, 8, 0, 0},
    {320, 0, 0, 0, 8, 0, 0},
    {0, 0, -320, 0, 4, 0, 0},
    {0, 0, 320, 0, 4, 0, 0},
    {300, 0, -60, 0, 40, 1, 0},
    {180, 0, -60, 0, 40, 1, 0},
    {-30, 0, 0, 0, 5, 0, 0},
    {30, 0, 0, 0, 5, 0, 0},
    {0, 0, -30, 0, 3, 0, 0},
    {0, 0, 30, 0, 3, 0, 0},
    {0, 0, 0, -4, 4, 0, 0},
    {0, 0, 0, 4, 4, 0, 0},
    {-4, 0, 0, 0, 4, 0, 0},
    {4, 0, 0, 0, 4, 0, 0},
};
static const UiSpriteScalarKey sAlphaKeys[] = {
    {1.0f, 0.5f, 20, 0, 0},
    {0.5f, 1.0f, 40, 0, 0},
    {0.0f, 0.8f, 20, 0, 0},
    {0.8f, 0.0f, 40, 0, 0},
    {0.0f, 1.0f, 30, 0, 0},
    {1.0f, 0.0f, 30, 0, 0},
    {0.0f, 1.0f, 5, 0, 0},
    {1.0f, 0.0f, 25, 0, 0},
    {0.0f, 1.0f, 5, 0, 0},
    {1.0f, 0.0f, 3, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
    {1.0f, 0.0f, 4, 0, 0},
};
static const UiSpriteScalarKey sScaleKeys[] = {
    {0.0f, 1.0f, 5, 0, 0},
    {1.0f, 3.0f, 25, 0, 0},
};
static const SpriteAnimationCommand sCommands[] = {
    {-3, 0, {0, 0, 0}, -3, 0, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 1, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 6, 0, {0, 0, 0}, 0, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 7, 0, {0, 0, 0}, 1, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 4, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 5, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-2, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
};

extern "C" {

void *asdMemoryAllocTracked(u32 size, u32 alignment, u32 a, u32 b, u32 c);
void sysMemClear(void *block, u32 size);
u32 taskCreateDraw(const char *name, u32 priority, u32 a, u32 b, void (*draw)(void *), u32 c, u32 d, void *process);
void paramsClearPacket(void *packet);

void statusDownSetSpriteMode(s32 mode, s32 imageKey, s32 flag);
AsdText *spriteHandleCreate(u32 kind);
void positionStateSet(AsdText *text, u32 a, u32 color, f32 value);
void __aeabi_memset4(void *destination, u32 size, s32 value);
void copyDefaultWordsPair(void *state);
void FUN_00268770(void *process);
void FUN_0026b0e4(void *process);

/* Creates the status-down screen: allocates and clears its work block, starts the update process
 * and draw task, builds the sprite set and clears its state, then loads the camp message and
 * script files. */
void statusDownCreateScreen(void)
{
    if (g_statusDown == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\status\\StatusDown.cpp", 4860);
        g_statusDown = (StatusDownStateA *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(StatusDownStateA), 1);
    }
    StatusDownStateA *down = g_statusDown;

    sysMemClear(down, sizeof(StatusDownStateA));
    u32 process = asdProcessCreateSimple((const s8 *)"TMD CALC", 4, 0, 0, (AsdProcUpdateFunc)FUN_00268770, 0, 0);

    down->job = process;
    down->drawTask = taskCreateDraw("TMD DDRAW", 0xEB, 0, 0, FUN_0026b0e4, 0, 0, (void *)process);
    down = g_statusDown;
    paramsClearPacket(&down->packet);
    paramsInit(&down->packet, sPositionKeys, sizeof(sPositionKeys), sAlphaKeys, sizeof(sAlphaKeys), sScaleKeys,
               sizeof(sScaleKeys), NULL, 0, sCommands, sizeof(sCommands));
    uiSpriteStateInitFromSource(&down->sprites[0], 0x12, 1000, &down->packet, 1, 1.0f);
    statusDownSetSpriteMode(0, -1, 0);
    uiSpriteStateInitFromSource(&down->sprites[1], 0x12, 1000, &down->packet, 1, 1.0f);
    uiSpriteSelectAnim(&down->sprites[1], 0);
    uiSpriteStateInitFromSource(&down->sprites[2], 0x12, 1000, &down->packet, 1, 1.0f);
    uiSpriteSelectAnim(&down->sprites[2], 1);
    uiSpriteStateInitFromSource(&down->sprites[3], 0x12, 1000, &down->packet, 1, 1.0f);
    uiSpriteSelectAnim(&down->sprites[3], 3);
    uiSpriteStateInitFromSource(&down->sprites[4], 0x12, 1000, &down->packet, 1, 1.0f);
    uiSpriteSelectAnim(&down->sprites[4], 3);
    uiSpriteStateInitFromSource(&down->sprites[5], 0x12, 1000, &down->packet, 1, 1.0f);
    uiSpriteSetKeyframe(&down->sprites[5], 1, 0);
    uiSpriteInitializeState(&down->sprites[6], 0x12, -1, 0x1C, &down->packet, 0xC9, 1.0f);
    uiSpriteSelectAnim(&down->sprites[6], 2);
    spriteSetLayer(&down->sprites[6], 2);
    uiSpriteStateInitFromSource(&down->sprites[7], 0x12, 0x556, &down->packet, 1, 1.0f);
    uiSpriteStateInitFromSource(&down->sprites[8], 0x12, 0x556, &down->packet, 1, 1.0f);
    down->text = spriteHandleCreate(0);
    uiObjectSetColorRgb((u32)down->text, -1); /* the colour setter takes the text as a handle word */
    positionStateSet(down->text, 0, 0x91A2A2FF, 0.0f);
    __aeabi_memset4(down->slots, 0x2A, -1);
    down->panelEnabled = 1;
    /* empty the skill menu, as statusDownInitializeSkillList does before it lists a unit */
    StatusDownStateA *screen = g_statusDown;
    StatusDownSkillMenuA *menu = &screen->menu;
    menu->step.state = 1;
    menu->rows[0].idWord = 0;
    menu->rows[0].level = 0;
    menu->rows[1].idWord = 0;
    menu->rows[1].level = 0;
    menu->rows[2].idWord = 0;
    menu->rows[2].level = 0;
    menu->rows[3].idWord = 0;
    menu->rows[3].level = 0;
    menu->rows[4].idWord = 0;
    menu->rows[4].level = 0;
    menu->rows[5].idWord = 0;
    menu->rows[5].level = 0;
    menu->rows[6].idWord = 0;
    menu->rows[6].level = 0;
    menu->rows[7].idWord = 0;
    menu->rows[7].level = 0;
    fillTwoWordsWithByte((u32 *)screen->menu.selection, -1);
    menu->changed = 0;
    menu->source = NULL;
    StatusDownStateA *holder = g_statusDown;
    g_statusDown->unk2584 = 0;
    copyDefaultWordsPair(holder->block2588);
    down->unk2598 = 0;
    menu = &g_statusDown->menu;
    menu->process = NULL;
    /* the loader stores the buffer address as a word */
    asdLoadFileAsyncSimple("camp/camp.mbm", (u32 *)&g_statusDown->menu.dataA, 0);
    asdLoadFileAsyncSimple("camp/camp.bf", (u32 *)&menu->dataB, 0);
}

}
