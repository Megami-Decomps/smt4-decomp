#include "shard/X14_StatusDown.h"

extern "C" {
s32 FUN_00230544();
void FUN_001835b4(s32 layer, u32 archive, u32 image, s32 x, s32 y, s32 priority);

// Draw both status indicators using the active or inactive image pair.
void statusDownDrawIndicatorPairs(s32 x, s32 y)
{
    StatusDown *screen = g_statusDown;
    if (FUN_00230544()) {
        s32 first = screen->indicators.first;
        if (first == 1 || first == 2) {
            FUN_001835b4(2, 0x12, 0x4d5, x, y, 0xba);
            FUN_001835b4(2, 0x12, 0x4d9, x, y, 0xba);
        } else {
            FUN_001835b4(2, 0x12, 0x4d3, x, y, 0xba);
            FUN_001835b4(2, 0x12, 0x4d7, x, y, 0xba);
        }
        s32 second = screen->indicators.second;
        if (second == 1 || second == 2) {
            FUN_001835b4(2, 0x12, 0x4d4, x, y, 0xba);
            FUN_001835b4(2, 0x12, 0x4d8, x, y, 0xba);
            return;
        }
        FUN_001835b4(2, 0x12, 0x4d2, x, y, 0xba);
        FUN_001835b4(2, 0x12, 0x4d6, x, y, 0xba);
    }
}
}
