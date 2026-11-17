#include "map/MapIfGlobals.h"

// Mark the first active map-interface record with the requested ID.
extern "C" void mapIfRequestById(s32 id)
{
    s32 index = 0;
    MapIfStateA *mapIf = g_mapIf.state;
    for (; index < 128; ++index) {
        if (mapIf->records[index].active && mapIf->records[index].id == id) {
            mapIf->records[index].pending = 1;
            return;
        }
    }
}
