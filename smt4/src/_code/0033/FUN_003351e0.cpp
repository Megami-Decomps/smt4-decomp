#include "classes/Obj4206e8.h"
#include "map/LmapPlayerModel.h"

extern "C" {
static void setModelRotation(AsdMdlObject *model, NodeVec3 rotation)
{
    modelPartSetRotationDegrees(model->node, 0, rotation);
}

// Apply the same Euler rotation to the root model and every loaded part.
void FUN_003351e0(Obj4206e8 *group, NodeVec3 rotation)
{
    setModelRotation(group->rootModel, rotation);
    for (s32 i = 0; i < 3; ++i) {
        if (group->slots[i].model != NULL)
            setModelRotation(group->slots[i].model, rotation);
    }
}
} /* extern "C" */
