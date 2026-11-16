#include "map/MapObjects.h"

extern "C" {
extern MapObjectWork *g_mapObj;

/* Releases all map objects and clears the active flag of every entry. */
void FUN_00246b48(void)
{
    for (s32 i = 0; i < 24; ++i) {
        MapObjectInstance *object = g_mapObj->entries[i].object;
        if (object != NULL) {
            object->vfunc04();
            g_mapObj->entries[i].object = NULL;
        }
    }
    for (s32 i = 0; i < 24; ++i) {
        g_mapObj->entries[i].active = 0;
    }
}
}
