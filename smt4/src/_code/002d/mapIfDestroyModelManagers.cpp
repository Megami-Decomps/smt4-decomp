#include "common.h"

namespace { struct Slot { u8 padding[0x20]; u32 manager; }; struct Map { u8 padding[0xcc70]; Slot slots[2]; }; }

extern "C" {
extern Map *g_mapIf;
void asdMdlManagerDestroy(u32 manager);

static void destroySlotManager(Slot *slot)
{
    asdMdlManagerDestroy(slot->manager);
    slot->manager = 0;
}

void mapIfDestroyModelManagers(void)
{
    Map *map = g_mapIf;
    destroySlotManager(&map->slots[0]);
    destroySlotManager(&map->slots[1]);
}
}
