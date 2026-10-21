#include "common.h"

extern "C" {

void *FUN_002c5c04(const char *path);
extern void *g_mapAccessoryTable;

/* Load the battle map's accessory table. */
void mapAccessoryLoadTable(void)
{
    g_mapAccessoryTable = FUN_002c5c04("battle/battle_map/MapAccessory.tbb");
}

}
