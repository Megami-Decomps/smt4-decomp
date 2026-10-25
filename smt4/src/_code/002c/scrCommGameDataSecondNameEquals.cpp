#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

extern u32 gameDataGetSecondName(void);
extern u32 scrGetArgString(u32 index);
extern int libc_strncmp(u32 a, u32 b, u32 c);

u32 scrCommGameDataSecondNameEquals(void)
{
    u32 a = scrGetArgString(0);
    u32 b = gameDataGetSecondName();
    int result = libc_strncmp(a, b, 0x12);

    scrSetResult(result == 0);
    return 1;
}

} /* extern "C" */
