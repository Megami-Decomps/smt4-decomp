#include "common.h"

extern "C" {

int sequenceRequestDefer(u32 a, u32 b);
int sequenceRequestKind5(u32 value);
extern u32 scrGetArg(u32 index);

u32 FUN_00211f50(void)
{
    u32 value = scrGetArg(0);
    u32 b = scrGetArg(2);
    u32 a = scrGetArg(1);

    sequenceRequestDefer(a, b);
    sequenceRequestKind5(value);
    return 2;
}

} /* extern "C" */
