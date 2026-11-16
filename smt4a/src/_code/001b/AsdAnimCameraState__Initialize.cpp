#include "classes/Obj557af8.h"

extern "C" u32 bchValidateSectionBinding(AsdAnimCameraState *state, const AsdAnimCameraResource *resource, AsdAnimCameraSetup *setup);

/* Forwards to bchValidateSectionBinding, the function that follows it. */
u32 AsdAnimCameraState::Initialize(const AsdAnimCameraResource *resource, AsdAnimCameraSetup *setup)
{
    return bchValidateSectionBinding(this, resource, setup);
}
