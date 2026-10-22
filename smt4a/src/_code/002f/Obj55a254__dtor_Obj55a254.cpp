#include "classes/Obj55a254.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {
extern u8 _ZTV9Obj55a254[];
extern u8 *_ZN9Obj55aff4D1Ev(u32 *base);

/* The retail post-member debug hook cannot be placed after implicit member destruction. */
u32 *_ZN9Obj55a254D1Ev(u32 *obj)
{
    *obj = (u32)(_ZTV9Obj55a254 + 8);
    return (u32 *)asdDebugHookPass(_ZN9Obj55aff4D1Ev(obj + 2) - 8);
}
} /* extern "C" */
