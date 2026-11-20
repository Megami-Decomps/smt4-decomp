#include "common.h"
#include "script/ScriptArgs.h"
extern "C" {
const char *scrGetArgString(u32 index);
u32 scriptParseIntArgumentPreservingErrno(const char *text);
s32 scriptApplyParsedArgumentImpl(u32 first,u32 second);
/* Apply the script argument and parsed text, normalizing the result. */
s32 scriptApplyParsedArgument(void)
{
    s32 result = 0;
    u32 first = scrGetArg(0);
    u32 second = scriptParseIntArgumentPreservingErrno(scrGetArgString(1));
    if (scriptApplyParsedArgumentImpl(first, second) != 0) {
        result = 1;
    }
    return result;
}
}
