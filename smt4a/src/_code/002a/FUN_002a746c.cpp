#include "shard/W5_W5Match7_UiQuest.h"

extern "C" {

/* Returns whether the state of the record at 0x57F28C is 0. */
u8 FUN_002a746c(void)
{
    return g_uiQuest->menuState == 0;
}

} /* extern "C" */
