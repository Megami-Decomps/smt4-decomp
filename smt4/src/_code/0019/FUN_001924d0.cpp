/* NON_MATCHING: compiler writes back the slot-base displacement instead of retaining the enclosing-block base. */
#include "map/mapObj.h"

extern "C" {
extern MapObjectState *g_mapObj;

// Reset the map-object request and the live fields of all object slots.
void FUN_001924d0(void)
{
    MapObjectState *state = g_mapObj;
    state->request.job = 0;
    state->request.map = 0;
    state->request.object = 0;
    state->request.mode = 0;
    state->request.timer = 0;
    state->request.state = 0;
    for (s32 index = 0; index < 24; ++index) {
        MapObjectSlot *slot = &state->slots[index];
        slot->active = 0;
        slot->unk01 = 0;
        slot->unk02 = 0;
        slot->unk04 = 0.0f;
        slot->unk08 = 0.0f;
        slot->unk0c = 0.0f;
        slot->unk10 = 0.0f;
        slot->unk14 = 0.0f;
        slot->unk18 = 0.0f;
        slot->unk1c = 90.0f;
        slot->unk20 = 0;
        slot->state = 0;
        slot->model = NULL;
        slot->unk2c = 0;
        slot->id = -1;
    }
}
}
