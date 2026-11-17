/* NON_MATCHING: the active byte now addresses `state + index * 0x88 + 0xB31` directly and the linked byte through the slot pointer like retail; retail still reloads g_lmapMainState for the slot after the null check (the local `state` keeps the first load for the table) where armcc merges the two loads. */
#include "map/LmapMainGlobals.h"

struct MapObject {
    u8 unk000[0x1F6];  // 0x000
    u8 active;         // 0x1F6
};

struct MapObjectTable {
    MapObject **objects; // 0x00
};

extern "C" {


/* Sets the slot's active flag and mirrors it to the slot's map object when the slot is linked. */
void FUN_00265b78(s32 index, s32 enable)
{
    LmapMainState *state = g_lmapMainState;
    if (state == NULL) {
        return;
    }
    LmapMainSlot *slot = &g_lmapMainState->slots[index];

    if (enable != 0) {
        if (g_lmapMainState->slots[index].shown != 0) {
            return;
        }
        g_lmapMainState->slots[index].shown = 1;
        if (slot->registered == 0) {
            return;
        }
        static_cast<MapObjectTable *>(state->markerModels)->objects[index]->active = 1;
    } else {
        if (g_lmapMainState->slots[index].shown == 0) {
            return;
        }
        g_lmapMainState->slots[index].shown = 0;
        if (slot->registered == 0) {
            return;
        }
        static_cast<MapObjectTable *>(state->markerModels)->objects[index]->active = 0;
    }
}

} /* extern "C" */
