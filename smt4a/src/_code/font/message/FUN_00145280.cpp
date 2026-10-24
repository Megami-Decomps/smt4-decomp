/* NON_MATCHING: retail clears the many state fields through a handful of shared base registers (the large offsets are derived from one constant), and derives the three parameter-table addresses by subtracting from the last one; the field values and call sequence are the same. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

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

/* The three constant parameter tables the packet is initialised from, laid out back to back. */
extern const u8 DAT_0052fe6c[];
extern const u8 DAT_0052ff80[];
extern const u8 DAT_0053004c[];
extern const u8 DAT_005300a0[];

void *asdMemoryAllocTracked(u32 heap, u32 alignClass, u32 flags, u32 size, u32 fromFront);
void sysMemClear(void *block, u32 size);
void FUN_001692d4(void);
u32 spriteHandleCreate(u32 kind);
void FUN_001527d8(u32 sprite, s32 arg);
void asdTextSetValueFlagsAndScalar(u32 sprite, u32 flags, u32 value, f32 scalar);
void positionStateSet(u32 sprite, s32 a, s32 b, f32 value);
void *asdProcessCreateSimple(const char *name, s32 group, s32 delay, s32 end, void (*update)(void *), void (*onEnd)(void *), void *work);
void *taskCreateDraw(const char *name, s32 priority, s32 a, s32 b, void (*draw)(void *), s32 c, void *work, void *owner);
void FUN_0014c01c(void *work);
void FUN_0014f3f4(void *work);
void paramsClearPacket(void *packet);
void paramsInit(void *packet, const void *a, u32 aSize, const void *b, u32 bSize, const void *c, u32 cSize, u32 d, u32 e,
                const void *f, u32 fSize);

/* Creates the message window: its sprite, the update process, the two draw tasks and the
 * parameter packet, with every state field cleared. */
MessageWindow *FUN_00145280(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\font\\message.cpp", 563);
    u8 *raw = (u8 *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x1A28, 1);
    MessageWindow *window = (MessageWindow *)raw;

    sysMemClear(raw, 0x1A28);
    raw[0x19C5] = 0x15;
    FUN_001692d4();
    window->sprite = spriteHandleCreate(0);
    FUN_001527d8(window->sprite, -1);
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
    window->unk33 = 0;
    *(s32 *)(raw + 0x19EC) = -2;
    raw[0x1A10] = 0;
    *(u32 *)(raw + 0x1A11) = 0;
    *(u32 *)(raw + 0x1A18) = 0;
    window->process = asdProcessCreateSimple("MESS_C", 4, 0, 0, FUN_0014c01c, 0, window);
    taskCreateDraw("MESS_U LEFT", 0x86, 0, 0, FUN_0014f3f4, 0, window, window->process);
    taskCreateDraw("MESS_U RIGHT", 0xE2, 0, 0, FUN_0014f3f4, 0, window, window->process);
    paramsClearPacket(raw + 0x194);
    paramsInit(raw + 0x194, DAT_0052fe6c, 0x114, DAT_0052ff80, 0xCC, DAT_0053004c, 0x54, 0, 0, DAT_005300a0, 0x94C);
    return window;
}

}
