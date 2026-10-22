#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

extern u8 DAT_0055a25c;
extern u8 *_ZN9Obj55aff4D1Ev(u32 *base);

u32 *_ZN9Obj55a254D1Ev(u32 *obj)
{
    *obj = (u32)&DAT_0055a25c;
    return (u32 *)asdDebugHookPass(_ZN9Obj55aff4D1Ev(obj + 2) - 8);
}

} /* extern "C" */
