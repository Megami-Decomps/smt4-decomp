#include "AsdSDK/Source/Snd/AsdSnd3dManagerScalars.h"

extern "C" {

extern AsdSnd3dScalarsView g_asdSound;
void nw_snd_Sound3DActor_SetPosition(AsdSnd3dActor *actor, const AsdSnd3dPosition *position);

/* Moves 3D sound actor `index` to `position` (ignored when 3D sound is off or the index is out of range). */
void asd3dSoundActorSetPosition(u32 index, const AsdSnd3dPosition *position)
{
    AsdSnd3dManagerScalars *manager = &g_asdSound.manager;
    if (manager->active != 0 && index < 16) {
        manager->positions[index].x = position->x;
        manager->positions[index].y = position->y;
        manager->positions[index].z = position->z;
        nw_snd_Sound3DActor_SetPosition(&manager->actors[index], &manager->positions[index]);
    }
}

} /* extern "C" */
