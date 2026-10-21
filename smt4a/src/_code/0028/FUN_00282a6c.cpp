#include "common.h"

extern "C" {

void scrSetResult(void);
void FUN_0035c3d0(u32 a, u32 b, u32 c, u32 d);
u32 scrGetArg(s32 index);
s32 scrGetCommandFrame(void);
s32 eventTextureSlotIsLoaded(u32 a);

/* Script command: when scrGetCommandFrame reports nonzero, returns whether eventTextureSlotIsLoaded(arg0) holds; otherwise passes script arguments 0..3 to FUN_0035c3d0, sets the script result and returns 0. */
u8 FUN_00282a6c(void)
{
    u32 a;
    s32 result;
    u32 b;
    u32 c;
    u32 d;

    a = scrGetArg(0);
    result = scrGetCommandFrame();
    if (result != 0) {
        result = eventTextureSlotIsLoaded(a);
        return result != 0;
    }
    b = scrGetArg(1);
    c = scrGetArg(2);
    d = scrGetArg(3);
    FUN_0035c3d0(a, b, c, d);
    scrSetResult();
    return 0;
}

} /* extern "C" */
