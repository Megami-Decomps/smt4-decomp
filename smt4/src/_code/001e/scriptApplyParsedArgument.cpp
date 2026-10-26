#include "common.h"
#include "script/ScriptArgs.h"
extern "C" {
const char *scrGetArgString(u32 index);
u32 FUN_00100bd4(const char *text);
s32 FUN_001eb398(u32 first,u32 second);
/* Apply the script argument and parsed text, normalizing the result. */
s32 scriptApplyParsedArgument(void)
{
    s32 result = 0;
    u32 first = scrGetArg(0);
    u32 second = FUN_00100bd4(scrGetArgString(1));
    if (FUN_001eb398(first, second) != 0) {
        result = 1;
    }
    return result;
}
}
