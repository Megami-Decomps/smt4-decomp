#include "classes/Obj557af8.h"

extern "C" u32 FUN_001b15d0(AsdAnimCameraState *state, const AsdAnimCameraResource *resource, AsdAnimCameraSetup *setup);

/* Forwards to FUN_001b15d0, the function that follows it. */
u32 AsdAnimCameraState::Initialize(const AsdAnimCameraResource *resource, AsdAnimCameraSetup *setup)
{
    return FUN_001b15d0(this, resource, setup);
}
