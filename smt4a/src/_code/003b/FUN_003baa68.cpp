/* NON_MATCHING: retail keeps the constant 6 (FUN_0021bdac's fourth argument) in r5 across the earlier calls (mov r5, #6 first), which shifts the other saved registers; built passes it with mov r3, #6 */
#include "common.h"

extern "C" {

typedef struct MessageWindow {
    /* 0x0000 */ u8 unk0000[4];
    /* 0x0004 */ u32 message;
    /* 0x0008 */ u8 unk0008[4];
    /* 0x000C */ u32 flags;
    /* 0x0010 */ u8 unk0010[0x19B4];
    /* 0x19C4 */ u8 unk19C4;
    /* 0x19C5 */ u8 mode;
} MessageWindow;

typedef struct MessageMain {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ MessageWindow *window;
} MessageMain;

extern MessageMain g_messageMain;

extern u32 scrGetArg(s32 index);
extern u32 FUN_002ba85c(void);
extern u32 scrGetCommandFrame(void);
extern u32 FUN_0021bdac(u32 a, u32 b, u32 c, s32 d, s32 e, s32 f);
extern void bustupCutAnimRequestStopSlots(void);
extern void eventTexRequestStopAll(void);
extern void msgBoxFlagsSetBit7(u32 message);

u32 FUN_003baa68(void)
{
    MessageWindow *window = g_messageMain.window;
    u32 first;
    u32 second;
    u32 third;
    u32 result;

    bustupCutAnimRequestStopSlots();
    eventTexRequestStopAll();
    if (g_messageMain.window != NULL) {
        g_messageMain.window->mode = 0x15;
    }
    first = FUN_002ba85c();
    second = scrGetArg(0);
    third = scrGetCommandFrame();
    result = FUN_0021bdac(first, second, third, 6, 0, 0);
    if (scrGetCommandFrame() == 0) {
        msgBoxFlagsSetBit7(window->message);
        window->unk19C4 = 0;
        window->flags |= 0x20;
    }
    return result;
}

} /* extern "C" */
