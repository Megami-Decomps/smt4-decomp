#include "common.h"

namespace { struct Slot { u8 active; u8 padding[0x1f]; u32 manager; }; struct Map { u8 padding[0xcc70]; Slot slots[2]; }; }

extern "C" {
extern Map *g_mapIf;
void asdMdlManagerMarkDestroy(u32 manager);
static void mapSlotDestroy(Slot *slot)
{
    asdMdlManagerMarkDestroy(slot->manager);
    slot->active = 0;
}

void mapIfDestroyModelSlots(void)
{
    Map *map = g_mapIf;
    mapSlotDestroy(&map->slots[0]);
    mapSlotDestroy(&map->slots[1]);
}
}
