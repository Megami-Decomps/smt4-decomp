#include "classes/Obj55a314.h"
#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

extern u8 DAT_00559920;
extern u8 DAT_00594b24;
extern void FUN_001296b8(u32 *obj);
extern void onlineObjectListRemove(u8 *table, u32 *obj);
u8 *_ZN9Obj55a314D1Ev(void *self); /* Retail chains the ABI destructor result. */

void FUN_00129778(u32 *obj)
{
    *obj = (u32)&DAT_00559920;
    onlineObjectListRemove(&DAT_00594b24, obj);
    FUN_001296b8(obj);
    asdDebugHookPtr(_ZN9Obj55a314D1Ev(_ZN9Obj55a314D1Ev(obj + 8) - 0x14) - 0xc);
}

} /* extern "C" */
