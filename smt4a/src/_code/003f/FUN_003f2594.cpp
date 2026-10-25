#include "shard/Shard003F.h"

extern "C" {

extern void gameDataClearSaveRecord(s32 index);

void FUN_003f2594(void)
{
    s32 i;

    for (i = 0; i < 0x20; i++) {
        gameDataClearSaveRecord(i);
    }
}

} /* extern "C" */
