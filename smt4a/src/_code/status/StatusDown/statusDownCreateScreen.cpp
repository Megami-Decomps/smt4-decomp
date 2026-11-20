/* NON_MATCHING: the zeroed-field stores, the sprite setup scheduling and the pooled constants are laid out differently from retail (248 vs 251 rows); the screen setup is the same. */
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

extern "C" {

extern u8 DAT_0053687c[];
extern u8 DAT_00536924[];
extern u8 DAT_005369b4[];
extern u8 DAT_005369cc[];

void *asdMemoryAllocTracked(u32 size, u32 alignment, u32 a, u32 b, u32 c);
void sysMemClear(void *block, u32 size);
u32 taskCreateDraw(const char *name, u32 priority, u32 a, u32 b, void (*draw)(void *), u32 c, u32 d, void *process);
void paramsClearPacket(void *packet);

void statusDownSetSpriteMode(s32 a, s32 b);
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
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\status\\StatusDown.cpp", 4860);
    if (g_statusDown == NULL) {
        g_statusDown = (StatusDownStateA *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(StatusDownStateA), 1);
    }
    StatusDownStateA *down = g_statusDown;

    sysMemClear(down, sizeof(StatusDownStateA));
    u32 process = (asdProcessCreateSimple(reinterpret_cast<const s8 *>("TMD CALC"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_00268770), 0, 0));

    down->job = process;
    down->drawTask = taskCreateDraw("TMD DDRAW", 0xEB, 0, 0, FUN_0026b0e4, 0, 0, reinterpret_cast<void *>(process));
    down = g_statusDown;
    paramsClearPacket(&down->packet);
    paramsInit(&down->packet, DAT_0053687c, 0xA8, DAT_00536924, 0x90, DAT_005369b4, 0x18, 0, 0, DAT_005369cc, 0x1A4);
    uiSpriteStateInitFromSource(&down->sprites[0], 0x12, 1000, &down->packet, 1, 1.0f);
    statusDownSetSpriteMode(0, -1);
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
    uiObjectSetColorRgb(reinterpret_cast<u32>(down->text), -1); /* the colour setter takes the text as a handle word */
    positionStateSet(down->text, 0, 0x91A2A2FF, 0.0f);
    __aeabi_memset4(down->slots, 0x2A, -1);
    down->panelEnabled = 1;
    down = g_statusDown;
    for (s32 i = 0; i < 8; i++) {
        down->menu.rows[i].idWord = 0;
        down->menu.rows[i].level = 0;
    }
    down->menu.step.state = 1;
    fillTwoWordsWithByte((u32 *)down->menu.selection, -1);
    down->menu.changed = 0;
    down->menu.source = NULL;
    down = g_statusDown;
    down->unk2584 = 0;
    copyDefaultWordsPair(down->block2588);
    down->unk2598 = 0;
    down = g_statusDown;
    down->menu.process = NULL;
    /* the loader stores the buffer address as a word */
    asdLoadFileAsyncSimple("camp/camp.mbm", reinterpret_cast<u32 *>(&down->menu.dataA), 0);
    asdLoadFileAsyncSimple("camp/camp.bf", reinterpret_cast<u32 *>(&down->menu.dataB), 0);
}

}
