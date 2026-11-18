#include "classes/Obj4206e8.h"
#include "map/LmapPlayerModel.h"

extern "C" {
void nodeSetScale(AsdMdlNode *node, s32 index, NodeVec3 scale);

static void setModelScale(AsdMdlObject *model, NodeVec3 scale)
{
    nodeSetScale(model->node, 0, scale);
}

// Apply the scale to the group's root model and every loaded part.
void nodeGroupSetScale(Obj4206e8 *group, NodeVec3 scale)
{
    setModelScale(group->rootModel, scale);
    for (s32 i = 0; i < 3; ++i) {
        if (group->slots[i].model != NULL)
            setModelScale(group->slots[i].model, scale);
    }
}
} /* extern "C" */
