/* NON_MATCHING: retail keeps the constant 7 for the last call's fourth argument in r4 from the start (mov r4, #7 before the first test); built passes it with mov r3, #7 */
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

void FUN_001c2a20(MessageOwner *owner)
{
    u32 first;
    u32 second;
    u32 third;

    if (owner->window != NULL) {
        owner->window->mode = 0x14;
    }
    first = FUN_002865f8();
    second = scrGetArg(0);
    third = scrGetCommandFrame();
    FUN_002866b4(first, second, third, 7, 0, 0);
}

} /* extern "C" */
