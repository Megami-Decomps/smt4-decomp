#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern MapObjectRequest *g_mapObj;

/* Requests a map-object transition and resets its timer. */
void mapObjRequestTransition(u16 map, u16 object)
{
    g_mapObj->mode = 10;
    g_mapObj->timer = 0;
    g_mapObj->map = map;
    g_mapObj->object = object;
    g_mapObj->state = 0;
}

} /* extern "C" */
