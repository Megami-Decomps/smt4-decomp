#ifndef UI_HUNTERDATABASEWORK_H
#define UI_HUNTERDATABASEWORK_H
#include "common.h"
#include <stddef.h>
#include "ui/UiSpriteState.h"

struct HunterDatabaseWork {
    union {
        u8 unk000[8];
        struct { u32 job; } lifecycle;
    };
    u32 messages; // 0x008
    u32 helpMessages; // 0x00c
    u8 unk010[4];
    u32 state; // 0x014
    union {
        u8 acquiredTables[2]; // 0x018
        u16 acquisitionFlags;
    };
    u8 unk01A[0x72];
    u32 selection; // 0x08c
    u8 unk090[0x64];
    u32 values[4]; // 0x0f4
    u8 active; // 0x104
    u8 unk105[3];
    u32 pending; // 0x108
    union {
        u8 unk10C[0x560];
        struct {
            u8 prefix[0x1C];
            u16 touchRegionCount; /* 0x128 */
        } touch;
        struct {
            u8 prefix[0x20];
            u8 parameters[0x20]; /* 0x12c */
            UiSpriteState widgets[5]; /* 0x14c */
        } setup;
    };
    u32 sprites[6]; // 0x66c
};
typedef char HunterDatabaseOffsets[
    offsetof(HunterDatabaseWork, state) == 0x14 &&
    offsetof(HunterDatabaseWork, selection) == 0x8c &&
    offsetof(HunterDatabaseWork, values) == 0xf4 &&
    offsetof(HunterDatabaseWork, active) == 0x104 &&
    offsetof(HunterDatabaseWork, pending) == 0x108 &&
    offsetof(HunterDatabaseWork, sprites) == 0x66c ? 1 : -1];
typedef char HunterDatabaseLifecycleOffsets[
    offsetof(HunterDatabaseWork, lifecycle.job) == 0 &&
    offsetof(HunterDatabaseWork, touch.touchRegionCount) == 0x128 &&
    sizeof(HunterDatabaseWork) == 0x684 ? 1 : -1];
typedef char HunterDatabaseSetupOffsets[
    offsetof(HunterDatabaseWork, setup.parameters) == 0x12c &&
    offsetof(HunterDatabaseWork, setup.widgets) == 0x14c &&
    sizeof(HunterDatabaseWork) == 0x684 ? 1 : -1];
#endif
