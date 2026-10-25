/* NON_MATCHING: the zeroed-field stores, the sprite setup scheduling and the pooled constants are laid out differently from retail (252 vs 249 rows); the screen setup is the same. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "shard/fillTwoWordsWithByte.h"

extern "C" {

/* The status-down screen's work block (0x259C bytes; only the fields set here). */
typedef struct StatusDown {
    /* 0x0000 */ void *process;
    /* 0x0004 */ void *drawTask;
    /* 0x0008 */ u8 params[0x20];
    /* 0x0028 */ u8 sprite0[0x8C];
    /* 0x00B4 */ u8 sprite1[0x8C];
    /* 0x0140 */ u8 sprite2[0x8C];
    /* 0x01CC */ u8 sprite3[0x8C];
    /* 0x0258 */ u8 sprite4[0x8C];
    /* 0x02E4 */ u8 sprite5[0x8C];
    /* 0x0370 */ u8 sprite6[0x8C];
    /* 0x03FC */ u8 sprite7[0x8C];
    /* 0x0488 */ u8 sprite8[0xBC];
    /* 0x0544 */ u8 slots[0x1E74];
    /* 0x23B8 */ u32 spriteHandle;
    /* 0x23BC */ u8 unk23bc[0xEE];
    /* 0x24AA */ u8 ready;
    /* 0x24AB */ u8 unk24ab;
    /* 0x24AC */ u32 cleared[16];
    /* 0x24EC */ u8 unk24ec[4];
    /* 0x24F0 */ u8 flag24f0;
    /* 0x24F1 */ u8 unk24f1[3];
    /* 0x24F4 */ u32 pair[2];
    /* 0x24FC */ u32 unk24fc;
    /* 0x2500 */ u8 unk2500[0x64];
    /* 0x2564 */ u32 one;
    /* 0x2568 */ u8 unk2568[4];
    /* 0x256C */ u32 campMessages;
    /* 0x2570 */ u32 campScript;
    /* 0x2574 */ u32 unk2574;
    /* 0x2578 */ u8 unk2578[8];
    /* 0x2580 */ u8 unk2580[4];
    /* 0x2584 */ u8 unk2584;
    /* 0x2585 */ u8 unk2585[3];
    /* 0x2588 */ u8 state[0x10];
    /* 0x2598 */ u8 unk2598;
} StatusDown;

extern StatusDown *g_statusDown;
extern u8 DAT_0053687c[];
extern u8 DAT_00536924[];
extern u8 DAT_005369b4[];
extern u8 DAT_005369cc[];

void *asdMemoryAllocTracked(u32 size, u32 alignment, u32 a, u32 b, u32 c);
void sysMemClear(void *block, u32 size);
void *taskCreateDraw(const char *name, u32 priority, u32 a, u32 b, void (*draw)(void *), u32 c, u32 d, void *process);
void paramsClearPacket(void *packet);

void FUN_0014e188(void *sprite, u32 group, u32 id, void *owner, u32 flag, f32 scale);
void FUN_00230b9c(s32 a, s32 b);
void uiSpriteSelectAnim(void *sprite, u32 anim);
void uiSpriteSetKeyframe(void *sprite, u32 frame, u32 flag);
void uiSpriteInitializeState(void *sprite, u32 group, s32 id, u32 size, void *owner, u32 anim, f32 scale);
u32 spriteHandleCreate(u32 kind);
void positionStateSet(u32 handle, u32 a, u32 color, f32 value);
void __aeabi_memset4(void *destination, u32 size, s32 value);
void FUN_003e4140(void *state);
void FUN_00268770(void *process);
void FUN_0026b0e4(void *process);

/* Creates the status-down screen: allocates and clears its work block, starts the update process
 * and draw task, builds the sprite set and clears its state, then loads the camp message and
 * script files. */
void FUN_0034a544(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\status\\StatusDown.cpp", 4860);
    if (g_statusDown == NULL) {
        g_statusDown = (StatusDown *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x259C, 1);
    }
    StatusDown *down = g_statusDown;

    sysMemClear(down, 0x259C);
    void *process = reinterpret_cast<void *>(asdProcessCreateSimple(reinterpret_cast<const s8 *>("TMD CALC"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_00268770), 0, 0));

    down->process = process;
    down->drawTask = taskCreateDraw("TMD DDRAW", 0xEB, 0, 0, FUN_0026b0e4, 0, 0, process);
    down = g_statusDown;
    paramsClearPacket(down->params);
    paramsInit(reinterpret_cast<UiResourceParameters *>(down->params), DAT_0053687c, 0xA8, DAT_00536924, 0x90, DAT_005369b4, 0x18, 0, 0, DAT_005369cc, 0x1A4);
    FUN_0014e188(down->sprite0, 0x12, 1000, down->params, 1, 1.0f);
    FUN_00230b9c(0, -1);
    FUN_0014e188(down->sprite1, 0x12, 1000, down->params, 1, 1.0f);
    uiSpriteSelectAnim(down->sprite1, 0);
    FUN_0014e188(down->sprite2, 0x12, 1000, down->params, 1, 1.0f);
    uiSpriteSelectAnim(down->sprite2, 1);
    FUN_0014e188(down->sprite3, 0x12, 1000, down->params, 1, 1.0f);
    uiSpriteSelectAnim(down->sprite3, 3);
    FUN_0014e188(down->sprite4, 0x12, 1000, down->params, 1, 1.0f);
    uiSpriteSelectAnim(down->sprite4, 3);
    FUN_0014e188(down->sprite5, 0x12, 1000, down->params, 1, 1.0f);
    uiSpriteSetKeyframe(down->sprite5, 1, 0);
    uiSpriteInitializeState(down->sprite6, 0x12, -1, 0x1C, down->params, 0xC9, 1.0f);
    uiSpriteSelectAnim(down->sprite6, 2);
    *(u16 *)(down->sprite6 + 0x3A) = 2;
    FUN_0014e188(down->sprite7, 0x12, 0x556, down->params, 1, 1.0f);
    FUN_0014e188(down->sprite8, 0x12, 0x556, down->params, 1, 1.0f);
    down->spriteHandle = spriteHandleCreate(0);
    FUN_001527d8(down->spriteHandle, -1);
    positionStateSet(down->spriteHandle, 0, 0x91A2A2FF, 0.0f);
    __aeabi_memset4(down->slots, 0x2A, -1);
    down->ready = 1;
    down = g_statusDown;
    for (s32 i = 0; i < 16; i++) {
        down->cleared[i] = 0;
    }
    down->one = 1;
    fillTwoWordsWithByte(down->pair, -1);
    down->flag24f0 = 0;
    down->unk24fc = 0;
    down = g_statusDown;
    down->unk2584 = 0;
    FUN_003e4140(down->state);
    down->unk2598 = 0;
    down = g_statusDown;
    down->unk2574 = 0;
    asdLoadFileAsyncSimple("camp/camp.mbm", &down->campMessages, 0);
    asdLoadFileAsyncSimple("camp/camp.bf", &down->campScript, 0);
}

}
