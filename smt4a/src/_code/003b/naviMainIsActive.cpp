#include "shard/NaviMain.h"
#include "shard/Shard003B.h"

extern "C" {
extern NaviMainA *g_naviMain;

u8 naviMainIsActive(void)
{
    return g_naviMain != NULL;
}

} /* extern "C" */
