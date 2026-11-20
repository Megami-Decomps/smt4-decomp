#include "AsdSDK/Source/Snd/AsdSnd3dManagerScalars.h"

extern "C" {

extern AsdSnd3dScalarsView g_asdSound;
void FUN_00121018(void *object, f32 value);

/* Sets one of the 3D sound manager's scalars and forwards it to the playing object, while the 3D sound state is enabled. */
void asdSnd3dSetManagerScalarA3C(f32 value)
{
    AsdSnd3dManagerScalars *manager = &g_asdSound.manager;
    if (manager->active != 0) {
        manager->scalarA3C = value;
        FUN_00121018(manager->object, value);
    }
}

} /* extern "C" */
