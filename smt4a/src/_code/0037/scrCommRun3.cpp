#include "shard/Shard0037.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void sequenceRequestDefer(u32 a, u32 b);
extern void FUN_00376fa4(u32 a);
extern void FUN_0036af24(void);

/* Script command: runs sequenceRequestDefer(arg1, arg2), FUN_00376fa4(arg0) and FUN_0036af24. */
u32 scrCommRun3(void)
{
    u32 a = scrGetArg(0);
    u32 b = scrGetArg(1);
    u32 c = scrGetArg(2);

    sequenceRequestDefer(b, c);
    FUN_00376fa4(a);
    FUN_0036af24();
    return 1;
}

} /* extern "C" */
