#include "saveLoadUI/SaveLoadState.h"

extern "C" {

extern SaveLoadThreadA g_saveLoadThread;

/* Returns whether the word at 0x8 of the global at 0x57F6C8 is 0. */
u8 FUN_002a6464(void)
{
    return g_saveLoadThread.unk08 == 0;
}

} /* extern "C" */
