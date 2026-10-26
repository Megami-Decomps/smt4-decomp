/* NON_MATCHING: aggregate table addressing folds its prefix into indexed loads; initial register assignment and active-store order differ. */
#include "shard/W5_W5Match7_SceneState.h"
#include "code/Code0040.h"

struct MapGimicIdentityView {
    u8 unk00[6];
    s16 id;
    s16 kind;
};
/* Adding these typed members at byte one of MapGimicEntry's padding would
 * change union alignment; keep this exact local layout instead. */
struct MapGimicSetupEntryView {
    u8 active;
    u8 unk01;
    s16 mode;
    MapVector position;
    f32 heading;
    MapGimicResource *resource;
    u8 unk18[0xc];
    u32 flag;
    s32 index;
};

/* Aggregate view of the pointer and its adjacent static entry table. */
struct MapGimicSetupGlobalsView {
    MapGimic *gimmick;
    u32 unk04;
    MapEntry entries[19];
};

extern "C" {
extern void *g_handleRegistry;
extern const char DAT_00531a48[];
extern const char DAT_00531a78[];
s32 gameFlagIsSet(s32 flag);
void *FUN_00178b04(u32 bytes, const char *file, s32 line);
MapGimicResource *modelListInit(void *memory);
void FUN_0040aad4(MapGimicResource *resource, s32 index);
void controllerSetDestination(void *controller, const MapVector *position);
void controllerSetRotationEulerDegrees(void *controller, f32 x, f32 y, f32 z);
void FUN_003fe86c(void *controller, s32 mode, s32 flags, f32 first, f32 second);
void handleRegistryRegisterObject(void *registry, void *object);

/* Find the map's matching gimmick, create its model and register the controller. */
void FUN_003b51a4(void)
{
    const MapGimicSetupGlobalsView *globals = (const MapGimicSetupGlobalsView *)&g_mapGimic;
    MapGimic *gimmick = globals->gimmick;
    const MapGimicIdentityView *identity = (const MapGimicIdentityView *)gimmick;
    for (s32 i = 0; i < 19; ++i) {
        const MapEntry *source = &globals->entries[i];
        if (source->id == identity->id && source->kind == identity->kind) {
            MapGimicSetupEntryView *entry = (MapGimicSetupEntryView *)&gimmick->entry;
            entry->index = i;
            entry->position.x = source->origin.x;
            entry->position.y = source->origin.y;
            entry->position.z = source->origin.z;
            union { u32 bits; f32 value; } heading;
            heading.bits = source->unk14;
            entry->heading = heading.value;
            entry->flag = source->status;
            s32 mode = gameFlagIsSet(entry->flag);
            if (mode)
                mode = 2;
            entry->mode = mode;
            entry->active = 1;
            void *memory = FUN_00178b04(0x20, DAT_00531a48, 0xa04);
            entry->resource = memory ? modelListInit(memory) : NULL;
            FUN_0040aa6c(entry->resource, DAT_00531a78);
            FUN_0040aad4(entry->resource, 0);
            void *controller = entry->resource->object;
            controllerSetDestination(controller, &entry->position);
            controllerSetRotationEulerDegrees(controller, 0.0f, entry->heading, 0.0f);
            FUN_003fe86c(controller, entry->mode, 2, 0.0f, 0.0f);
            handleRegistryRegisterObject(g_handleRegistry, controller);
            return;
        }
    }
}
}
