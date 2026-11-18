#include "common.h"

extern "C" {

s32 mapEnemyHasTwoNearby(void);

s32 FUN_00376c50(void)
{
    return mapEnemyHasTwoNearby() != 0;
}

} /* extern "C" */
