#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

/* Destroys the object's embedded member at +0x20 (whose result gives the owner back) and then the owner itself; both destructors are weak hooks the release build did not link. */
extern "C" u8 *FUN_002fffbe(u8 *self)
{
    u8 *member = (u8 *)asdDebugHookPass(self + 0x20);
    u8 *owner = member - 0x20;
    return (u8 *)asdDebugHookPass(owner);
}
