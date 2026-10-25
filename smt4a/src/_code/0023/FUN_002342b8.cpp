#include "common.h"

struct MapInterface {
    u8 unk00[0x3C]; // 0x00
    u32 state;      // 0x3C
};

static __inline void mapInterfaceSetState(MapInterface *map, u32 state)
{
    map->state = state;
}

extern "C" {
extern MapInterface* g_mapIf;

void FUN_002342b8(void)
{
    mapInterfaceSetState(g_mapIf, 2);
}
}
