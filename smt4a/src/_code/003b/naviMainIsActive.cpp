#include "shard/Shard003B.h"

extern "C" {

extern Sub68Owner *g_naviMain;

u8 naviMainIsActive(void)
{
    return g_naviMain != NULL;
}

} /* extern "C" */
