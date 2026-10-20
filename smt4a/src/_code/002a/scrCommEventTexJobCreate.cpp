#include "common.h"

extern "C" {

extern u32 scrGetArg(u32 index);
extern s32 scrSetResult(u32 value);
extern s32 FUN_0039af04(void);
extern u32 FUN_00389fe0(u32 a, u32 b, u32 c);
extern s32 eventTexSetJobParam(void);
extern s32 FUN_0036f298(u32 id);

/* Script command: creates the event texture job described by arguments 0..2 when possible and pushes its handle (0 when not). */
u32 scrCommEventTexJobCreate(void)
{
    u32 id = scrGetArg(0);
    u32 arg1 = scrGetArg(1);
    u32 arg2 = scrGetArg(2);
    u32 result = 0;

    if (FUN_0039af04() != 0) {
        result = FUN_00389fe0(id, arg1, arg2);
        eventTexSetJobParam();
        FUN_0036f298(result);
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
