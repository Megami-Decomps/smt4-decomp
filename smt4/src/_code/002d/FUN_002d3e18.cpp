/* NON_MATCHING: retail keeps each slot's base (0xCC70/0xCC94) in a register and addresses the manager at +0x20 from it; armcc folds the +0x20 into the base. */
#include "common.h"

namespace { struct Slot { u8 padding[0x20]; u32 manager; }; struct Map { u8 padding[0xcc70]; Slot slots[2]; }; }

extern "C" {
extern Map *g_mapIf;
void asdMdlManagerDestroy(u32 manager);
void FUN_002d3e18(void)
{
    Map *map = g_mapIf;
    asdMdlManagerDestroy(map->slots[0].manager);
    map->slots[0].manager = 0;
    asdMdlManagerDestroy(map->slots[1].manager);
    map->slots[1].manager = 0;
}
}
