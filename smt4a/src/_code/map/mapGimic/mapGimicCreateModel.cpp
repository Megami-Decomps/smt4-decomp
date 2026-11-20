#include "shard/W5_W5Match7_SceneState.h"
#include "map/MapGimicGlobal.h"
#include "Model/MoriModelContent.h"
#include "gfx/ControllerModel.h"
#include "Model/MoriModelManager.h"

/* map/mapGimic.cpp's module statics: g_mapGimic and, eight bytes on, the stage table g_mapEntries
 * (retail addresses the table from g_mapGimic's address). */
struct MapGimicSetupGlobalsView {
    MapGimicA *gimmick;
    u32 unk04;
    MapEntry entries[19];
};

extern "C" {
extern const char DAT_00531a48[];
extern const char DAT_00531a78[];
s32 gameFlagIsSet(s32 flag);
void *asdMemoryAllocTraced(u32 bytes, const char *file, s32 line);

/* Find the map's matching gimmick, create its model and register the controller. */
void mapGimicCreateModel(void)
{
    const MapGimicSetupGlobalsView *globals = (const MapGimicSetupGlobalsView *)&g_mapGimic;
    MapGimicA *gimmick = globals->gimmick;
    const MapEntry *entries = globals->entries;
    for (s32 i = 0; i < 19; ++i) {
        const MapEntry *source = &entries[i];
        if (source->id == gimmick->area && source->kind == gimmick->subArea) {
            MapGimicStageActorA *entry = &gimmick->stageActor;
            entry->index = i;
            entry->position.x = source->origin.x;
            entry->position.y = source->origin.y;
            entry->position.z = source->origin.z;
            union { u32 bits; f32 value; } heading;
            heading.bits = source->unk14;
            entry->heading = heading.value;
            entry->flag = source->status;
            if (gameFlagIsSet(entry->flag)) {
                entry->motion = 2;
            } else {
                entry->motion = 0;
            }
            entry->active = 1;
            void *memory = asdMemoryAllocTraced(0x20, DAT_00531a48, 0xa04);
            entry->obj = memory ? modelListInit(memory) : NULL;
            resourceOwnerLoadFileSync(entry->obj, DAT_00531a78);
            moriModelContentLoadBody(entry->obj, 0);
            Obj557b18 *controller = entry->obj->body;
            controllerSetDestination(controller, &entry->position);
            controllerSetRotationEulerDegrees(controller, 0.0f, entry->heading, 0.0f);
            modelPlayClip(controller, entry->motion, 2, 0.0f, 0.0f);
            handleRegistryRegisterObject(g_handleRegistry, controller);
            return;
        }
    }
}
}
