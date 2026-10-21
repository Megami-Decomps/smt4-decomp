#include "common.h"

extern "C" {

void *asdLoadFileSyncDefault(const char *path);
extern void *g_mapAccessoryTable;

/* Load the battle map's accessory table. */
void mapAccessoryLoadTable(void)
{
    g_mapAccessoryTable = asdLoadFileSyncDefault("battle/battle_map/MapAccessory.tbb");
}

}
