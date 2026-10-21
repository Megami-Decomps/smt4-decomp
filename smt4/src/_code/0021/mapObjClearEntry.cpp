#include "shard/W5_W5Match2_MapCallbacks.h"

extern "C" {

extern MapObjectCallbackWork *g_mapObj;

/* Clear the map object's selected entry. */
void mapObjClearEntry(void)
{
    g_mapObj->entry = NULL;
}

}
