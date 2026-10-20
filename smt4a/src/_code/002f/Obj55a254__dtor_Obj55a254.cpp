#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

extern u8 DAT_0055a25c;
extern u8 *onlineStringDestroy(u32 *base);

u32 *_ZN9Obj55a254D1Ev(u32 *obj)
{
    *obj = (u32)&DAT_0055a25c;
    return (u32 *)asdDebugHookPass(onlineStringDestroy(obj + 2) - 8);
}

} /* extern "C" */
