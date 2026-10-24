/* NON_MATCHING: Retail retains an inlined constant type-normalization comparison and an unused pool address. */
#include "ui/MessageMain.h"
extern "C" {
void* FUN_002ba85c(s32);
s32 scrGetArg(u32);
s32 scrGetCommandFrame(void);
s32 FUN_0021bdac(void*, s32, s32, s32, s32, s32);
void msgBoxFlagsSetBit7(u32);

s32 FUN_0036de98(MessageGlobalsA* globals)
{
    MessageWorkA* work = globals->state;
    void* context = FUN_002ba85c(5);
    s32 argument = scrGetArg(0);
    s32 frame = scrGetCommandFrame();
    s32 result = FUN_0021bdac(context, argument, frame, 5, 0, 0);
    if (scrGetCommandFrame() == 0) {
        msgBoxFlagsSetBit7(work->box);
        work->unk19C4 = 0;
        work->flags |= 0x20;
    }
    return result;
}
}
