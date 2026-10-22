#include "shard/W5_W5Match2_MapCallbacks.h"

extern "C" {

extern MapObjectCallbackWork *g_mapObj;
void *mapObjGetCombinedEntry(u32 index);

/* Select the map object's first table entry. */
void mapObjSelectFirstEntry(void)
{
    g_mapObj->entry = mapObjGetCombinedEntry(0);
}

}
