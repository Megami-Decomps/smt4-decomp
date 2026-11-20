#include "status/StatusDownA.h"
#include "shard/TextureDrawCall.h"

extern "C" {
s32 statusDownPanelIsOpenAndIdle();

// Draw both status indicators using the active or inactive image pair.
void statusDownDrawIndicatorPairs(s32 x, s32 y)
{
    StatusDownStateA *screen = g_statusDown;
    if (statusDownPanelIsOpenAndIdle()) {
        s32 first = screen->indicatorFirst;
        if (first == 1 || first == 2) {
            texDrawTableEntryAtStoredOrigin(2, 0x12, 0x4d5, x, y, 0xba);
            texDrawTableEntryAtStoredOrigin(2, 0x12, 0x4d9, x, y, 0xba);
        } else {
            texDrawTableEntryAtStoredOrigin(2, 0x12, 0x4d3, x, y, 0xba);
            texDrawTableEntryAtStoredOrigin(2, 0x12, 0x4d7, x, y, 0xba);
        }
        s32 second = screen->indicatorSecond;
        if (second == 1 || second == 2) {
            texDrawTableEntryAtStoredOrigin(2, 0x12, 0x4d4, x, y, 0xba);
            texDrawTableEntryAtStoredOrigin(2, 0x12, 0x4d8, x, y, 0xba);
            return;
        }
        texDrawTableEntryAtStoredOrigin(2, 0x12, 0x4d2, x, y, 0xba);
        texDrawTableEntryAtStoredOrigin(2, 0x12, 0x4d6, x, y, 0xba);
    }
}
}
