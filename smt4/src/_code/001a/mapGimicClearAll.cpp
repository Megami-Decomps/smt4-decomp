#include "map/MapGimicGlobal.h"

extern "C" {

/* Clears the gimmick table: the header, then every entry (heading reset to 90). */
void mapGimicClearAll(void)
{
    MapGimic *state = g_mapGimic;

    state->mode = 0;
    state->busy = 0;
    state->area = 0;
    state->subArea = 0;
    state->step = 0;
    state->index = 0;
    state->loaded = 0;
    state->cloneAvailable = 0;
    for (s32 i = 0; i < MAP_GIMIC_COUNT; i++) {
        MapGimicEntry *slot = &state->entries[i];

        slot->active = 0;
        slot->dirty = 0;
        slot->position[0] = 0.0f;
        slot->position[1] = 0.0f;
        slot->position[2] = 0.0f;
        slot->position[3] = 90.0f;
        slot->motion = 0;
        slot->kind = 0;
        slot->model = NULL;
        slot->gimicId = 0;
        slot->requiredFlag = 0;
        slot->forbiddenFlag = 0;
    }
}

} /* extern "C" */
