#include "common.h"
extern "C" {
extern void *g_engineOptionalWork;
void *asdLoadFileSyncDefault(const char *path);
/* Loads the battle map accessory table. */
void battleMapAccessoryLoad(void) {
    g_engineOptionalWork = asdLoadFileSyncDefault("battle/battle_map/MapAccessory.tbb");
}
}
