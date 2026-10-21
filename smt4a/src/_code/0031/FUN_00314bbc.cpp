#include "common.h"
extern "C" {
extern struct { u8 unk00[0x38]; u32 first, second; } *g_mapTrap;
/* Updates the active trap's selection pair when the first value is nonzero. */
void FUN_00314bbc(u32 first, u32 second) {
    if (first != 0) {
        g_mapTrap->first = first;
        g_mapTrap->second = second;
    }
}
}
