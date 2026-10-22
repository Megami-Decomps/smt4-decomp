#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "classes/Obj55add8.h"

extern "C" {

extern u8 DAT_005599d4;
extern u8 DAT_00594b24;
extern void FUN_00129b34(u32 *obj);
/* C declaration retained: the proven owner teardown consumes D1's returned this. */
extern u8 *_ZN9Obj55add8D1Ev(void *p);
extern void onlineObjectListRemove(u8 *table, u32 *obj);

void FUN_00129be0(u32 *obj)
{
    *obj = (u32)&DAT_005599d4;
    onlineObjectListRemove(&DAT_00594b24, obj);
    FUN_00129b34(obj);
    asdDebugHookPtr(_ZN9Obj55add8D1Ev(_ZN9Obj55add8D1Ev(obj + 8) - 0x14) - 0xc);
}

} /* extern "C" */
