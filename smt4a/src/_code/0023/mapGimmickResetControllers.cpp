#include "map/mapGimic.h"
#include <string.h>

struct GimmickResetPrefixA {
    u32 state;
    u8 active;
    u8 unk05;
    u16 parameters[4];
    u8 unk0e[2];
    u32 resource;
    struct { u8 active; u8 unk01[7]; } channels[4];
    u32 vector[3];
    u32 stateWords[10];
    u8 pending;
    u8 unk69[3];
    u32 auxiliary[5];
    u32 counter;
    u32 references[3];
};
struct GimmickResetTailA {
    u8 active;
    u8 unk01;
    s16 id;
    f32 values[4];
    u32 resource;
    u32 state;
    u8 pending;
    u8 unk1d;
    s16 delay;
    u8 requested;
    u8 unk21[3];
    u32 first;
    u32 second;
};
union GimmickResetEntryA {
    MapGimicEntry base;
    struct {
        u8 unk00[0x10];
        f32 angle;
        u8 unk14[0x14];
        f32 transform[4];
        u32 state;
    } reset;
};
struct GimmickResetViewA {
    union { MapGimic base; GimmickResetPrefixA control; };
    GimmickResetTailA tail;
};

extern "C" {
extern MapGimic *g_mapGimic;
void wordTripleClear(u32 *words);

// Reset all map gimmick controllers, keeping padding and untouched resource storage intact.
void mapGimmickResetControllers(void)
{
    // The extra controller follows the canonical MapGimic prefix; do not grow that shared type.
    GimmickResetViewA *work = reinterpret_cast<GimmickResetViewA *>(g_mapGimic);
    u32 *vector = work->control.vector;
    work->control.state = 0;
    work->control.active = 0;
    work->control.parameters[0] = 0;
    work->control.parameters[1] = 0;
    work->control.parameters[2] = 0;
    work->control.parameters[3] = 0;
    work->control.resource = 0;
    work->control.channels[0].active = 0;
    work->control.channels[1].active = 0;
    work->control.channels[2].active = 0;
    work->control.channels[3].active = 0;
    wordTripleClear(vector);
    work = reinterpret_cast<GimmickResetViewA *>(g_mapGimic);
    memset(work->control.stateWords, 0, sizeof(work->control.stateWords));
    work->control.pending = 0;
    work->control.auxiliary[0] = 0;
    work->control.auxiliary[1] = 0;
    work->control.auxiliary[2] = 0;
    work->control.auxiliary[3] = 0;
    work->control.auxiliary[4] = 0;
    work->control.references[0] = 0;
    work->control.references[1] = 0;
    work->control.references[2] = 0;
    work->control.counter = 0;
    for (s32 index = 0; index < MAP_GIMIC_ENTRIES; ++index) {
        GimmickResetEntryA *entry = reinterpret_cast<GimmickResetEntryA *>(&g_mapGimic->entries[index]);
        entry->base.active = 0;
        entry->base.requested = 0;
        entry->base.position[0] = 0.0f;
        entry->base.position[1] = 0.0f;
        entry->base.position[2] = 0.0f;
        entry->reset.angle = 90.0f;
        entry->base.requestState = 0;
        entry->base.id = 0;
        entry->base.obj = NULL;
        entry->base.gates.entryId = 0;
        entry->base.gates.required = 0;
        entry->base.gates.excluded = 0;
        entry->reset.transform[0] = 0.0f;
        entry->reset.transform[1] = 0.0f;
        entry->reset.transform[2] = 0.0f;
        entry->reset.transform[3] = 0.0f;
        entry->reset.state = 0;
    }
    for (s32 index = 0; index < MAP_GIMIC_SLOTS; ++index) {
        MapGimic *gimmicks = g_mapGimic;
        MapGimicSlot *slot = &gimmicks->slots[index];
        slot->active = 0;
        slot->animationId = 0;
        slot->id = 0;
        slot->obj = NULL;
        slot->unk0C = 0;
        slot->requested = 0;
        slot->delay = 0;
        slot->unk14[0] = 0;
    }
    GimmickResetTailA *tail = &reinterpret_cast<GimmickResetViewA *>(g_mapGimic)->tail;
    tail->active = 0;
    tail->id = 0;
    tail->values[0] = 0.0f;
    tail->values[1] = 0.0f;
    tail->values[2] = 0.0f;
    tail->values[3] = 0.0f;
    tail->resource = 0;
    tail->state = 0;
    tail->pending = 0;
    tail->delay = 0;
    tail->requested = 0;
    tail->first = 0;
    tail->second = 0;
}
}
