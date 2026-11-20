#include "shard/Shard0031.h"

extern "C" {

extern u32 loadSlotEnsureLoaded(u32 value);

void campButtonHelpLoadSlot(void)
{
    loadSlotEnsureLoaded(0xE);
}

} /* extern "C" */
