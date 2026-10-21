#include "common.h"
#include "AsdSDK/AsdDebug.h"

struct MapEplEntry {
    f32 x;      // 0x00
    f32 y;      // 0x04
    f32 z;      // 0x08
    f32 w;      // 0x0C
    u32 unk10;  // 0x10
    u32 unk14;  // 0x14
};

struct MapEpl {
    u32 unk00;                // 0x00
    u32 unk04;                // 0x04
    MapEplEntry entries[16];  // 0x08
};

extern "C" {
extern const char DAT_005319ec[];
extern MapEpl *g_mapEpl;

void *asdMemoryAllocTracked(s32 heap, s32 alignClass, s32 flags,
                           u32 size, s32 fromFront);

void mapEplAlloc(void)
{
    asdDebugTrace(DAT_005319ec, 100);

    MapEpl *epl = static_cast<MapEpl *>(
        asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(MapEpl), 1));
    g_mapEpl = epl;
    epl->unk00 = 0;
    epl->unk04 = 0;

    for (s32 index = 0; index < 16; ++index) {
        MapEplEntry *entry = &epl->entries[index];
        entry->unk10 = 0;
        entry->unk14 = 0;
        entry->x = 0.0f;
        entry->y = 0.0f;
        entry->z = 0.0f;
        entry->w = 0.0f;
    }
}
}
