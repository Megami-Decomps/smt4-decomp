#include "shard/GameGlobals.h"

extern "C" {
void FUN_002958f8(s32 handle, s32 enabled);
void FUN_00294f64(void *resource);
void jobStop(u32 job, s32 reason);
void asdMemFree(void *memory);
void statusDownDestroy(void);

/* Releases the game-data block when its last reference is dropped. */
void gameReleaseDataReference(void)
{
    if (--g_gameGlobals.refCount > 0) {
        return;
    }
    GameData *data = g_gameGlobals.data;
    if (data->unk12FC != 0) {
        FUN_002958f8(data->unk12FC, 1);
    }
    if (data->unk12FE > 0 && data->resource != NULL) {
        FUN_00294f64(data->resource);
        data->resource = NULL;
    }
    jobStop(data->job, 0);
    asdMemFree(data);
    g_gameGlobals.data = NULL;
    g_gameGlobals.refCount = 0;
    statusDownDestroy();
}
}
