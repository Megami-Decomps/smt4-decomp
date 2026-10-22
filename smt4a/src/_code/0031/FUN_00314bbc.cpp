#include "map/mapTrap.h"
extern "C" {
extern MapTrapA *g_mapTrap;
/* Updates the active trap's selection pair when the first value is nonzero. */
void FUN_00314bbc(u32 first, u32 second) {
    if (first != 0) {
        g_mapTrap->unk38 = first;
        g_mapTrap->unk3C = second;
    }
}
}
