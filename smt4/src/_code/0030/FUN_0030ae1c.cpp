#include "battle/btlUI.h"
#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

extern u32 scrGetArg(u32 index);
extern void scrSetResult(u32 value);
extern u32 FUN_0029c1fc(void);
extern void FUN_0029c1c8(u32 object, u32 arg, int flag);
extern BtlUi *g_btlUiBlock; /* object the hook is given */

/* Script command: creates an object from argument 0 and returns it. */
s32 FUN_0030ae1c(void)
{
    u32 arg = scrGetArg(0);
    u32 object = FUN_0029c1fc();

    FUN_0029c1c8(object, arg, 0);
    asdDebugHookPtr(g_btlUiBlock);
    scrSetResult(object);
    return 1;
}

} /* extern "C" */
