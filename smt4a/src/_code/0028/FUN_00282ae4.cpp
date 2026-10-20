#include "common.h"

extern "C" {

void FUN_00285020(s32 flag);
void FUN_003d2588(s32 a, u32 b);
s32 scrGetArg(s32 index);
s32 FUN_0023a5d8(void);
s32 scrGetCommandFrame(void);

/* Script command: when scrGetCommandFrame reports 0, runs FUN_00285020(arg2 != 0) and FUN_003d2588(arg0 as a short, arg1); returns whether FUN_0023a5d8 holds. */
u8 FUN_00282ae4(void)
{
    s16 a;
    s32 result;
    u32 b;

    result = scrGetCommandFrame();
    if (result == 0) {
        a = scrGetArg(0);
        b = scrGetArg(1);
        result = scrGetArg(2);
        FUN_00285020(result != 0);
        FUN_003d2588(a, b);
    }
    result = FUN_0023a5d8();
    return result != 0;
}

} /* extern "C" */
