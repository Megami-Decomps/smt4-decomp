/* NON_MATCHING: retail keeps the constant 7 for the last call's fourth argument in r4 across the earlier calls (mov r4, #7 first); built passes it with mov r3, #7 */
#include "shard/S1MessageMain.h"

extern "C" {

typedef struct MessageOwner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ MessageWindow *window;
} MessageOwner;

extern u32 scrGetArg(s32 index);
extern u32 FUN_002ba85c(void);
extern u32 scrGetCommandFrame(void);
extern void FUN_0021bdac(u32 a, u32 b, u32 c, s32 d, s32 e, s32 f);

void FUN_0025fe90(MessageOwner *owner)
{
    u32 first;
    u32 second;
    u32 third;

    if (owner->window != NULL) {
        owner->window->mode = 0x15;
    }
    first = FUN_002ba85c();
    second = scrGetArg(0);
    third = scrGetCommandFrame();
    FUN_0021bdac(first, second, third, 7, 0, 0);
}

} /* extern "C" */
