/* NON_MATCHING: retail reloads the state global after the null check and addresses the active byte (state + index * 0x88 + 0xB31) and the linked byte (+0xB30 via a separate base) from two bases; built uses one base and keeps the state in a register */
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
    if (g_lmapMainState == NULL) {
        return;
    }
    MapSlot *slot = &g_lmapMainState->slots[index];

    if (enable != 0) {
        if (slot->active != 0) {
            return;
        }
        slot->active = 1;
        if (slot->linked == 0) {
            return;
        }
        g_lmapMainState->table->objects[index]->active = 1;
    } else {
        if (slot->active == 0) {
            return;
        }
        slot->active = 0;
        if (slot->linked == 0) {
            return;
        }
        g_lmapMainState->table->objects[index]->active = 0;
    }
}

} /* extern "C" */
