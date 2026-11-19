#include "battle/btlUI.h"
/* Script command: applies its argument to the object partyFindFirstUnusedEntry returns, and returns that object as the result. */
#include "common.h"
#include "battle/BtlUiGlobal.h"
#include "code/Code0029.h"

extern "C" {

u32 scrGetArg(u32 index);
void scrSetResult(u32 value);
void FUN_002d8b34(u32 arg);
u32 partyFindFirstUnusedEntry(void);

__weak void FUN_0039cd08_hook(BtlUiA *value);

u32 FUN_0039cd08(void)
{
    u32 arg = scrGetArg(0);
    u32 result = partyFindFirstUnusedEntry();

    FUN_002d8b34(arg);
    dispatchIfFound(result, arg, 0);
    FUN_0039cd08_hook(g_btlUiBlock);
    scrSetResult(result);
    return 1;
}

}
