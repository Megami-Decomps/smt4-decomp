#include "shard/Shard004B.h"
#include "shard/W6_W6Match8_BattleDebug.h"

extern "C" {

extern u32 loadSlotIsLoaded(u32 id);

s32 dataTable33IsLoaded(void *arg0)
{
    loadSlotIsLoaded(0x33);
}

} /* extern "C" */
