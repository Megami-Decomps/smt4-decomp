#ifndef ASDSDK_SOURCE_SND_ASDSND3DPOSITION_H
#define ASDSDK_SOURCE_SND_ASDSND3DPOSITION_H
#include "common.h"
#include <stddef.h>

/* The sound engine passes positions as three floating-point coordinates. */
struct AsdSnd3dPosition { f32 x, y, z; };
typedef AsdSnd3dPosition AsdSndListener;
typedef AsdSnd3dPosition SoundActorQueuePosition;
typedef char AsdSnd3dPositionLayoutCheck[
    sizeof(AsdSnd3dPosition) == 12 && offsetof(AsdSnd3dPosition, z) == 8 ? 1 : -1];

extern "C" {
void asd3dSoundActorSetPosition(u32 index, const AsdSnd3dPosition *position);
void vec4Forward(u32 handle, AsdSnd3dPosition position);
}
#endif
