#include "AsdSDK/Source/Snd/AsdSnd3dManagerScalars.h"

extern "C" {

extern AsdSnd3dScalarsView g_asdSound;
void FUN_00121028(void *object, f32 value);

/* Sets one of the 3D sound manager's scalars and forwards it to the playing object, while the 3D sound state is enabled. */
void FUN_0010e5a4(f32 value)
{
    AsdSnd3dManagerScalars *manager = &g_asdSound.manager;
    if (manager->active != 0) {
        manager->scalarA34 = value;
        FUN_00121028(manager->object, value);
    }
}

} /* extern "C" */
