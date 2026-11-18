#include "classes/Obj4206e8.h"
#include "map/LmapPlayerModel.h"

// Move the root and every loaded part to the same position.
extern "C" void nodeOwnerSetTranslations(Obj4206e8 *group, const MapVector *position)
{
    nodeSetTranslation(group->model()->node, 0, &position->x);
    for (s32 i = 0; i < 3; ++i) {
        if (AsdMdlObject *part = group->partModel(i))
            nodeSetTranslation(part->node, 0, &position->x);
    }
}
