#include "map/MapDepartLookup.h"

extern "C" {

/* Save the requested target and resolve its destination through table 23. */
void mapDepartSetTarget(s32 group, s32 map, u32 target)
{
    mapDepartSelect(group, map, target);
}
}
