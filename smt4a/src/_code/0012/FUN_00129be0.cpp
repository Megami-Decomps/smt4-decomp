#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

extern u8 DAT_005599d4;
extern u8 DAT_00594b24;
extern void FUN_00129b34(u32 *obj);
extern u8 *FUN_0030cb98(void *p);
extern void FUN_0030ccc0(u8 *table, u32 *obj);

void FUN_00129be0(u32 *obj)
{
    *obj = (u32)&DAT_005599d4;
    FUN_0030ccc0(&DAT_00594b24, obj);
    FUN_00129b34(obj);
    asdDebugHookPtr(FUN_0030cb98(FUN_0030cb98(obj + 8) - 0x14) - 0xc);
}

} /* extern "C" */
