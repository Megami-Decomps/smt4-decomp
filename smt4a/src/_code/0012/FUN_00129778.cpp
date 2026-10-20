#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

extern u8 DAT_00559920;
extern u8 DAT_00594b24;
extern void FUN_001296b8(u32 *obj);
extern u8 *FUN_0030cbb8(void *p);
extern void onlineObjectListRemove(u8 *table, u32 *obj);

void FUN_00129778(u32 *obj)
{
    *obj = (u32)&DAT_00559920;
    onlineObjectListRemove(&DAT_00594b24, obj);
    FUN_001296b8(obj);
    asdDebugHookPtr(FUN_0030cbb8(FUN_0030cbb8(obj + 8) - 0x14) - 0xc);
}

} /* extern "C" */
