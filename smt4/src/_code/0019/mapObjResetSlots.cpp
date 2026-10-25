#include "map/mapObj.h"

extern "C" {
extern MapObjectState *g_mapObj;

// Reset the map-object request and the live fields of all object slots.
void mapObjResetSlots(void)
{
    MapObjectState *state = g_mapObj;
    state->request.job = 0;
    state->request.map = 0;
    state->request.object = 0;
    state->request.mode = 0;
    state->request.timer = 0;
    state->request.state = 0;
    for (s32 index = 0; index < 24; ++index) {
        state->slots[index].active = 0;
        state->slots[index].unk01 = 0;
        state->slots[index].unk02 = 0;
        state->slots[index].unk04 = 0.0f;
        state->slots[index].unk08 = 0.0f;
        state->slots[index].unk0c = 0.0f;
        state->slots[index].unk10 = 0.0f;
        state->slots[index].unk14 = 0.0f;
        state->slots[index].unk18 = 0.0f;
        state->slots[index].unk1c = 90.0f;
        state->slots[index].unk20 = 0;
        state->slots[index].state = 0;
        state->slots[index].model = NULL;
        state->slots[index].unk2c = 0;
        state->slots[index].id = -1;
    }
}
}
