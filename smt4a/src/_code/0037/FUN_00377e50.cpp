#include "map/MapGimicGlobal.h"
#include "Model/MoriModelContent.h"
#include "Model/MoriModelManager.h"

extern "C" {

/* Unregisters and releases the active gimmick with the requested id. */
void FUN_00377e50(s32 id)
{
    for (s32 i = 0; i < MAP_GIMIC_SLOTS; ++i) {
        MapGimicSlotA *slot = &g_mapGimic->slots[i];
        if (slot->active && slot->id == id) {
            ptrListRemoveClearOwner(g_handleRegistry, slot->obj->body);
            if (slot->obj != NULL) {
                delete slot->obj;
                slot->obj = NULL;
            }
            slot->active = 0;
            slot->animationId = 0;
            slot->id = 0;
            return;
        }
    }
}
}
