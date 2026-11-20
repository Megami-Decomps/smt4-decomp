#include "map/MapGimicGlobal.h"
#include "Model/MoriModelContent.h"
#include "gfx/ControllerModel.h"
#include "Model/MoriModelManager.h"

extern "C" {

void animationSelectClip(Obj557b18 *model, u32 index, u8 flags, f32 time);

/* Starts the loaded gimmick with the id from its first clip (clip 1 too for id 42) and registers its model; returns 1 when started. */
u32 mapGimicStartById(s32 id)
{
    s32 i;

    for (i = 0; i < MAP_GIMIC_SLOTS; i++) {
        MapGimicSlotA *slot = &g_mapGimic->slots[i];

        if (slot->active && slot->id == id) {
            Obj557b18 *model;

            if (!moriModelContentIsLoaded(slot->obj)) {
                return 0;
            }
            moriModelContentLoadBody(slot->obj, 0);
            model = slot->obj->body;
            modelPlayClip(model, 0, 2, 0.0f, 0.0f);
            if (id == 42) {
                animationSelectClip(model, 1, 2, 0.0f);
            }
            handleRegistryRegisterObject(g_handleRegistry, model);
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
