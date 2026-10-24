#include "classes/Obj55c5a0.h"
#include "AsdSDK/AsdDebugHooks.h"

/* Installs the vtable; the release build's debug hook call is gone (a NOP). */
Obj55c5a0::Obj55c5a0()
{
    asdDebugHookPtrInt(NULL, 0x4000144);
}
