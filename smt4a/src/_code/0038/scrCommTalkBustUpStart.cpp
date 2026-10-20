#include "common.h"

extern "C" {

extern u32 scrGetArg(void);
extern s32 scrGetCommandFrame(void);
extern void FUN_00336de4(u16 id, s32 arg);
extern void btlTalkBustUpSetUnk2F4(s32 value);
extern s32 FUN_003811b4(u16 id);

/* Script command: on its first frame starts the talk bust-up for the id; returns whether FUN_003811b4 says it is done. */
u8 scrCommTalkBustUpStart(void)
{
    u32 id = scrGetArg();

    if (scrGetCommandFrame() == 0) {
        FUN_00336de4(id, 1);
        btlTalkBustUpSetUnk2F4(1);
    }
    return FUN_003811b4(id) != 0;
}

} /* extern "C" */
