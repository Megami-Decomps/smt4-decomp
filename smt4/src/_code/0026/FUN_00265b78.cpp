/* NON_MATCHING: the active byte now addresses `state + index * 0x88 + 0xB31` directly and the linked byte through the slot pointer like retail; retail still reloads g_lmapMainState for the slot after the null check (the local `state` keeps the first load for the table) where armcc merges the two loads. */
#include "common.h"

struct MapObject {
    u8 unk000[0x1F6];  // 0x000
    u8 active;         // 0x1F6
};

struct MapObjectTable {
    MapObject **objects; // 0x00
};

struct MapSlot {
    u8 unk00[0x30];   // 0x00
    u8 linked;        // 0x30 (state + 0xB30)
    u8 active;        // 0x31
    u8 unk32[0x56];   // 0x32
};

struct MapMainState {
    u8 unk000[0xA9C];        // 0x000
    MapObjectTable *table;   // 0xA9C
    u8 unkAA0[0x60];         // 0xAA0
    MapSlot slots[1];        // 0xB00
};

extern "C" {

extern MapMainState *g_lmapMainState; /* 0x447060 */

/* Sets the slot's active flag and mirrors it to the slot's map object when the slot is linked. */
void FUN_00265b78(s32 index, s32 enable)
{
    MapMainState *state = g_lmapMainState;
    if (state == NULL) {
        return;
    }
    MapSlot *slot = &g_lmapMainState->slots[index];

    if (enable != 0) {
        if (g_lmapMainState->slots[index].active != 0) {
            return;
        }
        g_lmapMainState->slots[index].active = 1;
        if (slot->linked == 0) {
            return;
        }
        state->table->objects[index]->active = 1;
    } else {
        if (g_lmapMainState->slots[index].active == 0) {
            return;
        }
        g_lmapMainState->slots[index].active = 0;
        if (slot->linked == 0) {
            return;
        }
        state->table->objects[index]->active = 0;
    }
}

} /* extern "C" */
