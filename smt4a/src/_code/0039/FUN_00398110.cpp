#include "map/mapGimic.h"

extern "C" {

s32 FUN_004ffba8(u32 handle);

extern MapGimic *DAT_00580ca0;

/* True when a slot with the given id is active and FUN_004ffba8 accepts its object. */
bool FUN_00398110(s32 id)
{
    MapGimicSlot *slot;
    s32 i;

    for (i = 0; i < MAP_GIMIC_SLOTS; i++) {
        slot = &DAT_00580ca0->slots[i];
        if (slot->active != 0 && slot->id == id && FUN_004ffba8(slot->obj->handle) != 0) {
            return true;
        }
    }
    return false;
}

} /* extern "C" */
