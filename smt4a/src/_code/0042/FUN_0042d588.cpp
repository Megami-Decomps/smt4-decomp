#include "common.h"

extern "C" {
extern s8 g_cecState;
s32 FUN_0042fbd4(void);

u32 FUN_0042d588(void)
{
    if (g_cecState != 0 || FUN_0042fbd4() != 0) {
        return 1;
    }
    return 0;
}
}
