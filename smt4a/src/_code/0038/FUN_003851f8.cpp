#include "map/MapGimicGlobal.h"
#include "Model/MoriModelContent.h"
#include "classes/Obj557b18.h"

extern "C" {

/* Sets or clears the low two flag bits on the object behind the active gimic slot with `id`. */
void FUN_003851f8(s32 id, s32 enable)
{
    s32 i;

    for (i = 0; i < MAP_GIMIC_SLOTS; i++) {
        MapGimicSlotA *slot = &g_mapGimic->slots[i];
        if (slot->active && slot->id == id) {
            Obj557b18 *object = slot->obj->body;
            if (enable != 0) {
                object->flags &= ~3u;
            } else {
                object->flags |= 3;
            }
            return;
        }
    }
}

} /* extern "C" */
