#include "shard/W6_W6Match8_CampInventory.h"
#include "code/Code0028.h"
#include "gamedata/FlagValueIsPositive.h"

extern "C" {
extern CampInventoryLists *g_camp;
void FUN_0029f848(CampInventoryController *controller, s32 count, s32 rows, s32 arg3, s32 arg4, s32 arg5);
void FUN_00282f80(s32 category);

// Refill one camp inventory category (11-13) with the owned item ids and reset its list navigation.
void campRebuildOwnedInventoryCategory(s32 category)
{
    u16 *ids;
    CampInventoryController *controller;
    s32 firstId;
    s32 lastId;
    CampInventoryLists *camp = g_camp;
    switch (category) {
    case 11:
        firstId = 1;
        lastId = 0x3c;
        ids = camp->inventory.firstIds;
        controller = &camp->controllers[0];
        break;
    case 12:
        firstId = 0x3b7;
        lastId = 0x47e;
        ids = camp->inventory.secondIds;
        controller = &camp->controllers[1];
        break;
    case 13:
        firstId = 0x33f;
        lastId = 0x3b6;
        ids = camp->inventory.thirdIds;
        controller = &camp->controllers[2];
        break;
    default:
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
