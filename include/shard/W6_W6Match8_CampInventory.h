#ifndef SHARD_W6_W6MATCH8_CAMP_INVENTORY_H
#define SHARD_W6_W6MATCH8_CAMP_INVENTORY_H

#include "common.h"

struct CampInventoryController {
    u8 data[0x64];
};
struct CampInventorySlot {
    s32 unit;
    u32 unk04;
};
struct CampInventoryLists {
    u8 unk0000[0xb0];
    CampInventoryController controllers[3];
    // Different menu modes reuse this storage for ID lists and category rows.
    union {
        struct {
            u8 unk01dc[0x12a0];
            u16 firstIds[60];    /* 0x147c */
            u16 secondIds[1000]; /* 0x14f4 */
            u16 thirdIds[220];   /* 0x1cc4 */
        } inventory;
        struct {
            CampInventoryController controller; /* 0x1dc */
            u8 unk0240[0xc00];
            u8 slotData[0x103c]; /* 0xe40 */
        } categories;
    };
    u8 unk1e7c[0x614];
    s32 categoryTimers[25];  /* 0x2490; index 0 is the player, 1..24 are unit slots */
    s32 categoryIndices[25]; /* 0x24f4 */
    u32 categoryColors[25];  /* 0x2558 */
};

#endif
