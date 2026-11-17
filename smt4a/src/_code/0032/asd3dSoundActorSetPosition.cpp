#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
void trackerMoveTo(AsdSnd3dActorA *actor, const AsdSndListener *position);

/* Moves 3D sound actor `index` to `position` (ignored when 3D sound is off or the index is out of range). */
void asd3dSoundActorSetPosition(u32 index, const AsdSndListener *position)
{
    AsdSnd3dStateA *sound3d = &g_asdSoundSystem.sound3d;
    if (sound3d->enabled != 0 && index < 16) {
        sound3d->positions[index].x = position->x;
        sound3d->positions[index].y = position->y;
        sound3d->positions[index].z = position->z;
        trackerMoveTo(&sound3d->actors[index], &sound3d->positions[index]);
    }
}
}
