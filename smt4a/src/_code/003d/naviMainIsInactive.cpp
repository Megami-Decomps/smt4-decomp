#include "shard/NaviMain.h"
#include "shard/Shard003D.h"

extern "C" {
extern NaviMainA *g_naviMain;

u8 naviMainIsInactive(void)
{
    if (g_naviMain != NULL) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
