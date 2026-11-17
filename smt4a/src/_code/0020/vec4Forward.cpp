#include "AsdSDK/Source/Snd/AsdSnd3dPosition.h"

/* Forward the three-coordinate sound position by address. */
extern "C" void vec4Forward(u32 handle, AsdSnd3dPosition position)
{
    asd3dSoundActorSetPosition(handle, &position);
}
