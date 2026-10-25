#include "common.h"
extern "C" {
struct MapCounter {
    u32 map;
    u32 counter;
};
struct NavigationMapWork {
    u8 unk00[0x28];
    MapCounter current;
    u8 unk30[0x10];
    u32 field;
};
extern NavigationMapWork *g_naviMain;
void FUN_002314e8(u32 *field, u32 map);

/* Select the current navigation map and reset its counter. */
void NaviMain_SetCurrentMap(u32 map)
{
    MapCounter current = {map, 0};
    g_naviMain->current = current;
    FUN_002314e8(&g_naviMain->field, map);
}
}
