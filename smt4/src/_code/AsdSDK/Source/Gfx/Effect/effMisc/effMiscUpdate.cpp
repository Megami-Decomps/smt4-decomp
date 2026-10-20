#include "AsdSDK/Source/Gfx/Effect/effMisc.h"

extern "C" {

extern EffMiscKind g_effMiscKinds[];

/* Runs the kind's update callback and advances the frame counter. */
void effMiscUpdate(EffMiscObject *obj)
{
    g_effMiscKinds[obj->kind].update(obj);
    obj->frame++;
}

} /* extern "C" */
