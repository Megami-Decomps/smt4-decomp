#include "common.h"

struct MapTable {
    u32 unk00;          // 0x00
    void* data;         // 0x04
    u8 unk08[0x10];     // 0x08
    u32 unk18;          // 0x18
};

extern "C" {
extern MapTable g_mapTable;
void* asdLoadFileSyncDefault(const char* path);
s32 asdTMTexTableLoadTmx(s32 textureId, s32 options);

void mapFilterLoad(void)
{
    void* data = asdLoadFileSyncDefault("/map/all/filter.bin");
    g_mapTable.data = data;
    g_mapTable.unk18 = 0;
    asdTMTexTableLoadTmx(45, 0);
}
}
