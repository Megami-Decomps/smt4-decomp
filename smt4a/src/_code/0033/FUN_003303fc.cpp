#include "common.h"

extern "C" {

extern s8 g_mapCollision;

bool FUN_003303fc(void)
{
    return g_mapCollision != 0;
}

} /* extern "C" */
