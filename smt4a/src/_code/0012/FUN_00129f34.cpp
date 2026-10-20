#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

extern u8 DAT_00559a64;
extern u8 DAT_00594b24;
extern void FUN_00129ec8(u32 *obj);
extern void FUN_0030ccc0(u8 *table, u32 *obj);

u32 *FUN_00129f34(u32 *obj)
{
    *obj = (u32)&DAT_00559a64;
    FUN_0030ccc0(&DAT_00594b24, obj);
    FUN_00129ec8(obj);
    return (u32 *)asdDebugHookPass(obj);
}

} /* extern "C" */
