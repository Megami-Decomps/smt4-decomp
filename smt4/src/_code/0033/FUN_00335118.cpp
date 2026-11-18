#include "classes/Obj4206e8.h"
#include "map/LmapPlayerModel.h"

extern "C" u32 modelGetCurrentMotion(AsdMdlNode *node);

// Read the active motion of the root model.
extern "C" u32 FUN_00335118(const Obj4206e8 *group)
{
    return modelGetCurrentMotion(group->model()->node);
}
