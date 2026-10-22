/* NON_MATCHING: retail preserves style 7 in r4 across calls; compiler materializes it at the final call. */
#include "common.h"

extern "C" {

typedef struct MessageWindow {
    /* 0x000 */ u8 unk000[0xA11];
    /* 0xA11 */ u8 mode;
} MessageWindow;

typedef struct MessageOwner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ MessageWindow *window;
} MessageOwner;

extern u32 scrGetArg(s32 index);
extern u32 FUN_002865f8(void);
extern u32 scrGetCommandFrame(void);
extern void FUN_002866b4(u32 a, u32 b, u32 c, s32 d, s32 e, s32 f);

extern MessageOwner g_messageMain;
void FUN_001c2a1c(void)
{
    u32 first;
    u32 second;
    u32 third;

    if (g_messageMain.window != NULL) {
        g_messageMain.window->mode = 0x14;
    }
    first = FUN_002865f8();
    second = scrGetArg(0);
    third = scrGetCommandFrame();
    FUN_002866b4(first, second, third, 7, 0, 0);
}

} /* extern "C" */
