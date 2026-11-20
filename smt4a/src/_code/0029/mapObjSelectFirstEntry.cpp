#include "shard/W5_W5Match2_MapCallbacks.h"
#include "map/MapObjectRecords.h"

extern "C" {

extern MapObjectCallbackWork *g_mapObj;

/* Select the map object's first table entry. */
void mapObjSelectFirstEntry(void)
{
    g_mapObj->entry = mapObjGetCombinedEntry(0);
}

}
