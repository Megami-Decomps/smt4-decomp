/* NON_MATCHING: category/controller live ranges swap r8/r9 and move the initial category comparison; all list-building instructions otherwise match. */
#include "shard/W6_W6Match8_CampInventory.h"

extern "C" {
extern CampInventoryLists *g_camp;
s32 flagValueIsPositive(u32 id);
s32 FUN_0028fb40(u32 id);
void FUN_0029f848(CampInventoryController *controller, s32 count, s32 rows, s32 arg3, s32 arg4, s32 arg5);
void FUN_00282f80(s32 category);

void campRebuildOwnedInventoryCategory(s32 category)
{
    u16 *ids;
    CampInventoryController *controller;
    s32 firstId;
    s32 lastId;
    if (category == 11) {
        firstId = 1;
        lastId = 0x3c;
        ids = g_camp->inventory.firstIds;
        controller = &g_camp->controllers[0];
    } else if (category == 12) {
        firstId = 0x3b7;
        lastId = 0x47e;
        ids = g_camp->inventory.secondIds;
        controller = &g_camp->controllers[1];
    } else if (category == 13) {
        firstId = 0x33f;
        lastId = 0x3b6;
        ids = g_camp->inventory.thirdIds;
        controller = &g_camp->controllers[2];
    } else {
        return;
    }
    if (ids == NULL || controller == NULL) {
        return;
    }
    s32 count = 0;
    for (s32 id = firstId; id <= lastId; ++id) {
        if (flagValueIsPositive(id)) {
            ids[count++] = id;
        }
    }
    if (category == 12) {
        for (u32 id = 0x47f; id <= 0x79e; ++id) {
            if (flagValueIsPositive(id)) {
                ids[count++] = id;
            }
        }
    } else if (category == 13) {
        for (u32 id = 0x79f; id <= 0x802; ++id) {
            if (flagValueIsPositive(id) && FUN_0028fb40(id) > 0) {
                ids[count++] = id;
            }
        }
    }
    FUN_0029f848(controller, count, 11, 1, 1, 1);
    FUN_00282f80(category);
}
}
