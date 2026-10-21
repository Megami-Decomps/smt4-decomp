#include "shard/Shard0036.h"
#include "map/mapIf.h"

extern "C" {
extern MapIfGlobals g_mapIf;

// Clear the state of active map-interface records belonging to the requested group.
void mapIfClearGroupState(s32 group)
{
    MapIfState *interface = g_mapIf.state;
    if (interface == NULL) {
        return;
    }
    for (s32 index = 0; index < 128; ++index) {
        Rec194 *record = mapIfGetRecords(interface) + index;
        if (record->active != 0 && record->groupView.id == group) {
            record->state = 0;
        }
    }
}
}
