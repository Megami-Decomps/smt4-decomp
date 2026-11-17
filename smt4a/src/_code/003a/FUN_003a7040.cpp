#include "addon/aocMain.h"
#include "addon/AocSystemA.h"

extern "C" {

void loadSlotEnsureLoaded(s32 arg);
void FUN_004715a8(AocSystemA *system);


void FUN_003a7040(void)
{
    loadSlotEnsureLoaded(0x45);
    FUN_004715a8(g_aocSystem);
}

} /* extern "C" */
