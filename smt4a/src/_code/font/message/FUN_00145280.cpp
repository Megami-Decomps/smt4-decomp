/* NON_MATCHING: retail clears the many state fields through a handful of shared base registers (the large offsets are derived from one constant) with one more saved register and a 28-byte frame; the field values, call sequence and parameter tables are the same. The word store at 0x1A0C is retail's (it was missing; adding it raised the diff from 77 to 94 lines, since armcc derives the late offsets differently). */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "ui/UiSpriteState.h"

/* Animation key tables passed to paramsInit; the original file defined them statically. */
static const UiSpritePositionKey sMessagePositionKeys[] = {
    {-200, 0, 10, 0, 6, 0, 0},
    {10, 0, 0, 0, 2, 0, 0},
    {320, 0, -20, 0, 6, 0, 0},
    {0, 0, -320, 0, 4, 0, 0},
    {-320, 0, 0, 0, 8, 0, 0},
    {0, 0, 2, 0, 2, 0, 0},
    {2, 0, 0, 0, 3, 0, 0},
    {0, 0, 0, 2, 8, 0, 0},
    {0, 0, -250, 0, 6, 0, 0},
    {-250, 0, 0, 0, 6, 0, 0},
    {250, 0, 0, 0, 6, 0, 0},
    {0, 0, 250, 0, 6, 0, 0},
    {400, 0, 0, 0, 6, 0, 0},
    {0, 0, -400, 0, 4, 0, 0},
    {320, 0, 0, 0, 6, 0, 0},
    {-320, 0, 0, 0, 6, 0, 0},
    {-160, 0, -560, 0, 5, 0, 0},
    {160, 0, 560, 0, 5, 0, 0},
    {0, 0, 160, 0, 35, 0, 0},
    {0, 0, 160, 0, 30, 0, 0},
    {0, 0, 160, 0, 23, 0, 0},
    {320, 0, 0, 0, 6, 0, 0},
    {0, 0, 320, 0, 6, 0, 0},
};
static const UiSpriteScalarKey sMessageAlphaKeys[] = {
    {0.0f, 1.0f, 8, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
    {1.0f, 0.0f, 4, 0, 0},
    {0.0f, 1.0f, 20, 0, 0},
    {0.0f, 1.0f, 8, 0, 0},
    {1.0f, 0.0f, 3, 0, 0},
    {0.2f, 1.0f, 20, 0, 0},
    {0.2f, 1.0f, 15, 0, 0},
    {0.2f, 1.0f, 10, 0, 0},
    {0.2f, 1.0f, 20, 0, 0},
    {0.2f, 1.0f, 15, 0, 0},
    {0.2f, 1.0f, 12, 0, 0},
    {0.0f, 1.0f, 6, 0, 0},
    {1.0f, 0.0f, 5, 0, 0},
    {1.0f, 1.0f, 5, 0, 0},
    {0.5f, 1.0f, 7, 0, 0},
    {1.0f, 0.5f, 16, 0, 0},
};
static const UiSpriteScalarKey sMessageScaleKeys[] = {
    {0.0f, 1.0f, 8, 0, 0},
    {0.0f, 1.0f, 2, 0, 0},
    {1.1f, 1.0f, 4, 0, 0},
    {0.0f, 1.3f, 20, 1, 0},
    {0.0f, 1.1f, 8, 0, 0},
    {1.1f, 1.0f, 2, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
};
static const SpriteAnimationCommand sMessageCommands[] = {
    {-3, 0, {0, 0, 0}, -3, 0, 0, {0, 0, 0}, 0, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {0, 0, {0, 0, 0}, -3, 0, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, 0, 0, 0, {0, 0, 0}, 0, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 1, 0, {0, 0, 0}, 2, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 3, 1, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 0, 0, {0, 0, 0}, 4, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, 5, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {2, 0, {0, 0, 0}, -3, 0, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {3, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, 0, 0, 0, {0, 0, 0}, 0, 0, {0, 0, 0}},
    {4, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, 0, 0, 0, {0, 0, 0}, 0, 0, {0, 0, 0}},
    {5, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {6, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-2, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, 0, 0, 0, {0, 0, 0}, 0, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 4, 0, {0, 0, 0}, 6, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, 0, 0, 0, {0, 0, 0}, 0, 0, {0, 0, 0}},
    {12, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {13, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {14, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {15, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {16, 0, {0, 0, 0}, -3, 14, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {17, 0, {0, 0, 0}, -3, 14, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 12, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 13, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 6, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 6, 1, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 7, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 7, 1, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 8, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 8, 1, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 9, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 9, 1, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 10, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 10, 1, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 11, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 11, 1, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {18, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-2, 0, {0, 0, 0}, -3, -1, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {19, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-2, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {20, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-2, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {21, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {22, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 15, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 16, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
};


extern "C" {

/* The message window object (0x1A28 bytes): only the fields this constructor sets are named. */
typedef struct MessageWindow {
    /* 0x0000 */ void *process;
    /* 0x0004 */ u32 sprite;
    /* 0x0008 */ u8 unk08;
    /* 0x0009 */ u8 unk09[0x29];
    /* 0x0032 */ u8 unk32;
    /* 0x0033 */ u8 unk33;
    /* 0x0034 */ u8 unk34;
    /* 0x0035 */ u8 unk35;
    /* 0x0036 */ u8 unk36[0x56];
    /* 0x008C */ u8 unk8c;
    /* 0x008D */ u8 unk8d;
    /* 0x008E */ u8 unk8e;
    /* 0x008F */ u8 unk8f;
    /* 0x0090 */ u8 unk90;
    /* 0x0091 */ u8 unk91[3];
    /* 0x0094 */ u32 unk94;
    /* 0x0098 */ u32 unk98;
    /* 0x009C */ u32 unk9c;
    /* 0x00A0 */ u32 words[15];                 /* cleared to 0 (0xA0-0xD8) */
    /* 0x00DC */ u8 unkdc[0xC];
    /* 0x00E8 */ u8 unke8;
    /* 0x00E9 */ u8 unke9[0xA9];
    /* 0x0192 */ u8 unk192;
    /* 0x0193 */ u8 unk193[1];
    /* 0x0194 */ u8 params[0x1851];             /* the parameter packet at 0x194 */
} MessageWindow;


void *asdMemoryAllocTracked(u32 heap, u32 alignClass, u32 flags, u32 size, u32 fromFront);
void sysMemClear(void *block, u32 size);
void gxResetUniformQuadColorsAndScale(void);
u32 spriteHandleCreate(u32 kind);
void asdTextSetValueFlagsAndScalar(u32 sprite, u32 flags, u32 value, f32 scalar);
void positionStateSet(u32 sprite, s32 a, s32 b, f32 value);
void *taskCreateDraw(const char *name, s32 priority, s32 a, s32 b, void (*draw)(void *), s32 c, void *work, void *owner);
void FUN_0014c01c(void *work);
void FUN_0014f3f4(void *work);
void paramsClearPacket(void *packet);


/* Creates the message window: its sprite, the update process, the two draw tasks and the
 * parameter packet, with every state field cleared. */
MessageWindow *FUN_00145280(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\font\\message.cpp", 563);
    u8 *raw = (u8 *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x1A28, 1);
    MessageWindow *window = (MessageWindow *)raw;

    sysMemClear(raw, 0x1A28);
    raw[0x19C5] = 0x15;
    gxResetUniformQuadColorsAndScale();
    window->sprite = spriteHandleCreate(0);
    uiObjectSetColorRgb(window->sprite, -1);
    asdTextSetValueFlagsAndScalar(window->sprite, 3, 255, 0.0f);
    positionStateSet(window->sprite, 0, -1, 0.0f);
    window->unk08 = 0;
    window->unk34 = 0;
    window->unk35 = 0;
    raw[0x19DA] = 1;
    window->unk32 = 0;
    window->unk8e = 0;
    window->unk8f = 0;
    window->unk8c = 0;
    window->unk90 = 0;
    window->unk9c = 0;
    window->unk98 = 0;
    raw[0xE8] = 0;
    window->unk192 = 0;
    for (s32 i = 0; i < 15; i++) {
        window->words[i] = 0;
    }
    raw[0x19F2] = 0;
    *(u32 *)(raw + 0x19F4) = 0;
    raw[0x19FB] = 0;
    *(u32 *)(raw + 0x19FC) = 0;
    *(u32 *)(raw + 0x1A04) = 0;
    raw[0x1A08] = 0;
    *(u32 *)(raw + 0x1A0C) = 0;
    window->unk33 = 0;
    *(s32 *)(raw + 0x19EC) = -2;
    raw[0x1A10] = 0;
    *(u32 *)(raw + 0x1A11) = 0;
    *(u32 *)(raw + 0x1A18) = 0;
    window->process = reinterpret_cast<void *>(asdProcessCreateSimple(reinterpret_cast<const s8 *>("MESS_C"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_0014c01c), 0, reinterpret_cast<u32>(window)));
    taskCreateDraw("MESS_U LEFT", 0x86, 0, 0, FUN_0014f3f4, 0, window, window->process);
    taskCreateDraw("MESS_U RIGHT", 0xE2, 0, 0, FUN_0014f3f4, 0, window, window->process);
    paramsClearPacket(raw + 0x194);
    paramsInit(reinterpret_cast<UiResourceParameters *>(raw + 0x194), sMessagePositionKeys,
               sizeof(sMessagePositionKeys), sMessageAlphaKeys, sizeof(sMessageAlphaKeys), sMessageScaleKeys,
               sizeof(sMessageScaleKeys), NULL, 0, sMessageCommands, sizeof(sMessageCommands));
    return window;
}

}
