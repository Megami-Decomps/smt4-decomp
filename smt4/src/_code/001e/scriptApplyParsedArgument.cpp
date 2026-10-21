/* NON_MATCHING: compiler normalizes the script result after the call rather than retaining the retail zero-initialized saved register. */
#include "common.h"
extern "C" {
u32 scrGetArg(u32 index);
const char *scrGetArgString(u32 index);
u32 FUN_00100bd4(const char *text);
s32 FUN_001eb398(u32 first,u32 second);
/* Apply the script argument and parsed text, normalizing the result. */
s32 scriptApplyParsedArgument(void) { u32 first=scrGetArg(0); u32 second=FUN_00100bd4(scrGetArgString(1)); return FUN_001eb398(first,second)!=0; }
}
