#include "shard/W5_W5Match2_MapCallbacks.h"

extern "C" {

extern MapObjectCallbackWork *g_mapObj;
void *FUN_0025be44(u32 index);

/* Select the map object's first table entry. */
void mapObjSelectFirstEntry(void)
{
    g_mapObj->entry = FUN_0025be44(0);
}

}
