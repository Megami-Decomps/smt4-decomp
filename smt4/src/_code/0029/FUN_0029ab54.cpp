#include "status/StatusDown.h"
#include "shard/TextureDrawCall.h"

extern "C" {

// Draw paired status indicators using their active or inactive sprite variants.
void FUN_0029ab54(s32 x, s32 y)
{
    StatusDownState *status = g_statusDown;
    if (FUN_00288498()) {
        if (status->indicatorFirst == 1 || status->indicatorFirst == 2) {
            texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x4D5, x, y, 0xBA);
            texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x4D9, x, y, 0xBA);
        } else {
            texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x4D3, x, y, 0xBA);
            texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x4D7, x, y, 0xBA);
        }
        if (status->indicatorSecond == 1 || status->indicatorSecond == 2) {
            texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x4D4, x, y, 0xBA);
            texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x4D8, x, y, 0xBA);
            return;
        }
        texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x4D2, x, y, 0xBA);
        texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x4D6, x, y, 0xBA);
    }
}
}
