#include "addon/aocMain.h"

extern "C" {

void loadSlotEnsureLoaded(s32 arg);
void FUN_004715a8(AocSystemA *system);

extern AocSystemA *g_aocSystem;

void FUN_003a7040(void)
{
    loadSlotEnsureLoaded(0x45);
    FUN_004715a8(g_aocSystem);
}

} /* extern "C" */
