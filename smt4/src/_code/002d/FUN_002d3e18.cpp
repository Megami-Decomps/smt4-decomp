/* NON_MATCHING: compiler forms the two model-slot addresses and clears their flags with different base registers. */
#include "common.h"

namespace { struct Slot { u8 active; u8 padding[0x1f]; u32 manager; }; struct Map { u8 padding[0xcc70]; Slot slots[2]; }; }

extern "C" {
extern Map *g_mapIf;
void asdMdlManagerDestroy(u32 manager);
void FUN_002d3e18(void)
{
    Map *map = g_mapIf;
    asdMdlManagerDestroy(map->slots[0].manager);
    map->slots[0].active = 0;
    asdMdlManagerDestroy(map->slots[1].manager);
    map->slots[1].active = 0;
}
}
