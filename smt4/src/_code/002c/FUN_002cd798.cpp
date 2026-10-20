#include "common.h"

extern "C" {

int scrSetResult(int result);
extern u32 gameDataGetSecondName(void);
extern u32 scrGetArgString(void);
extern int libc_strncmp(u32 a, u32 b, u32 c);

u32 FUN_002cd798(void)
{
    u32 a = scrGetArgString();
    u32 b = gameDataGetSecondName();
    int result = libc_strncmp(a, b, 0x12);

    scrSetResult(result == 0);
    return 1;
}

} /* extern "C" */
