/* NON_MATCHING: Retail retains an inlined constant type-normalization comparison and an unused pool address. */
#include "ui/MessageMain.h"
extern "C" {
void* scrGetCommandOwner(s32);
s32 scrGetArg(u32);
s32 scrGetCommandFrame(void);
s32 FUN_0021bdac(void*, s32, s32, s32, s32, s32);
void msgBoxFlagsSetBit7(u32);

extern MessageGlobalsA g_messageMain;

/* The script context kind a request is filed under: kind 21 is filed as kind 5. */
static __inline s32 requestKind(s32 kind)
{
    if (kind == 21) {
        return 5;
    }
    return kind;
}

s32 FUN_0036de98(void)
{
    MessageWorkA* work = g_messageMain.state;
    s32 kind = requestKind(21);
    void* context = scrGetCommandOwner(kind);
    s32 argument = scrGetArg(0);
    s32 frame = scrGetCommandFrame();
    s32 result = FUN_0021bdac(context, argument, frame, kind, 0, 0);
    if (scrGetCommandFrame() == 0) {
        msgBoxFlagsSetBit7(work->box);
        work->unk19C4 = 0;
        work->flags |= 0x20;
    }
    return result;
}
}
