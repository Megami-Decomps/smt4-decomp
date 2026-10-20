#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_005319ec[]; /* "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapEpl.cpp": __FILE__ */

typedef struct MapEplEntry {
    f32 x, y, z, w; /* 0x00 */
    u32 unk10;      /* 0x10 */
    u32 unk14;      /* 0x14 */
} MapEplEntry;

typedef struct MapEpl {
    u32 unk00;
    u32 unk04;
    MapEplEntry entries[16]; /* 0x08 */
} MapEpl;

extern MapEpl *g_mapEpl;

extern void *asdMemoryAllocTracked(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* Allocates the map effect list and clears its 16 entries. */
void FUN_0020ec4c(void)
{
    MapEpl *epl;
    MapEplEntry *entry;
    s32 i;

    asdDebugTrace(DAT_005319ec, 100);
    epl = (MapEpl *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(MapEpl), 1);
    g_mapEpl = epl;
    epl->unk00 = 0;
    epl->unk04 = 0;
    for (i = 0; i < 16; i++) {
        entry = &epl->entries[i];
        entry->unk10 = 0;
        entry->unk14 = 0;
        entry->x = 0.0f;
        entry->y = 0.0f;
        entry->z = 0.0f;
        entry->w = 0.0f;
    }
}

} /* extern "C" */
