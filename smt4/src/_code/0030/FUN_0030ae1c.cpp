#include "battle/btlUI.h"
#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "battle/BtlUiGlobal.h"
#include "code/Code0029.h"

extern "C" {

extern u32 scrGetArg(u32 index);
extern void scrSetResult(u32 value);
extern u32 partyFindFreeStockSlot(void);

/* Script command: creates an object from argument 0 and returns it. */
s32 FUN_0030ae1c(void)
{
    u32 arg = scrGetArg(0);
    u32 object = partyFindFreeStockSlot();

    dispatchIfFound(object, arg, 0);
    asdDebugHookPtr(g_btlUiBlock);
    scrSetResult(object);
    return 1;
}

} /* extern "C" */
