#include "map/mapMain.h"

extern "C" {

extern MapMainA *g_mapMain;

bool mapMainIsIdle(void)
{
    if (g_mapMain == NULL) {
        return true;
    }
    if (g_mapMain->unk28 == 0x17) {
        if (g_mapMain->unk2C >= 0xC) {
            return true;
        }
    } else if (g_mapMain->unk28 == 0x18) {
        return true;
    }
    return false;
}

} /* extern "C" */
