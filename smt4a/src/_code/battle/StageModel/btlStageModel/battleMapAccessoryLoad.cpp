#include "common.h"
extern "C" {
extern void *g_engineOptionalWork;
void *FUN_0020214c(const char *path);
/* Loads the battle map accessory table. */
void battleMapAccessoryLoad(void) {
    g_engineOptionalWork = FUN_0020214c("battle/battle_map/MapAccessory.tbb");
}
}
