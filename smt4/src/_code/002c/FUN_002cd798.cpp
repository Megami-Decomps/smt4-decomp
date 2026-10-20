#include "common.h"

extern "C" {

int scrSetResult(int result);
extern u32 FUN_0024bb38(void);
extern u32 FUN_002592d8(void);
extern int FUN_002b4414(u32 a, u32 b, u32 c);

u32 FUN_002cd798(void)
{
    u32 a = FUN_002592d8();
    u32 b = FUN_0024bb38();
    int result = FUN_002b4414(a, b, 0x12);

    scrSetResult(result == 0);
    return 1;
}

} /* extern "C" */
