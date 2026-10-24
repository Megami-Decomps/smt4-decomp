#include "map/MapGimicTableIV.h"

extern "C" {

extern MapGimicState *g_mapGimic; /* 0x447a48 */

/* Clears the gimmick table: the header, then every slot (radius reset to 90). */
void mapGimicClearAll(void)
{
    MapGimicState *state = g_mapGimic;

    state->unk00 = 0;
    state->unk04 = 0;
    state->unk06 = 0;
    state->unk08 = 0;
    state->unk0A = 0;
    state->unk0C = 0;
    state->unk10 = 0;
    state->unk14 = 0;
    for (s32 i = 0; i < 24; i++) {
        MapGimicTableSlot *slot = &state->slots[i];

        slot->active = 0;
        slot->flag = 0;
        slot->position[0] = 0.0f;
        slot->position[1] = 0.0f;
        slot->position[2] = 0.0f;
        slot->radius = 90.0f;
        slot->unk14 = 0;
        slot->id = 0;
        slot->unk18 = 0;
        slot->unk1C = 0;
        slot->unk20 = 0;
        slot->unk22 = 0;
    }
}

} /* extern "C" */
