#include "common.h"
extern "C" {
struct MapInterfaceValue { u8 unk00[0x30]; u32 value; };
extern MapInterfaceValue *g_mapIf;
/* Set the map interface state to two. */
void mapInterfaceSetStateTwo(void)
{
    MapInterfaceValue *mapIf = g_mapIf;
    mapIf->value = 2;
}
}
