/* NON_MATCHING: Retail push {r4, r5, r6, r7, lr} differs from recovered push {r4, r5, r6, lr}. */
#include "common.h"

struct MessageStateLocalView {
    u8 unk00[0x30]; // 0x00
    u8 unk30;       // 0x30
    u8 unk31;       // 0x31
};

struct MessageMainLocalView {
    u8 unk00[0x08];                 // 0x00
    MessageStateLocalView* unk08;   // 0x08
};

extern "C" {
extern MessageMainLocalView g_messageMain;

s32 scrCommMessageSetMode(s32 mode);
s32 scrGetCommandFrame(void);
u32 scrGetCommandOwner(void);
u32 scrGetArg(u32 index);
s32 FUN_0021bdac(u32 context, u32 argument, s32 frame, s32 mode,
                 s32 enabled, s32 flags);

// Set the initial message flags and dispatch the script message in mode 5.
void FUN_002e4930(void)
{
    scrCommMessageSetMode(0);
    if (scrGetCommandFrame() == 0) {
        MessageStateLocalView* state = g_messageMain.unk08;
        if (state != 0) {
            state->unk30 = 1;
        }
        state->unk31 = 1;
    }

    u32 context = scrGetCommandOwner();
    u32 argument = scrGetArg(0);
    s32 frame = scrGetCommandFrame();
    FUN_0021bdac(context, argument, frame, 5, 1, 0);
}
}
