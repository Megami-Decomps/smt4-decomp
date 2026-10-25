#include "common.h"
#include "shard/W6_W6Match8_BattleDebug.h"

extern "C" {

int resourceFindActiveIndex(int id);

s32 FUN_003bbaa8(void *arg0)
{
    resourceFindActiveIndex(0x33);
}

} /* extern "C" */
