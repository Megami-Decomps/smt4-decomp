#include "mobiclip/MoLivePlayer.h"
#include "mobiclip/MoLiveObjectHandleMap.h"

extern "C" void FUN_00521c8c(PlayerArray *array, u32 *first, u32 *last);

/* Clears the allocator-backed array (same FUN_00521c8c call as siblings FUN_004ad528, FUN_004adf7c, FUN_004afd38). */
static __inline void clearPlayerArray(PlayerArray *array)
{
    FUN_00521c8c(array, 0, array->capacity);
    array->capacity = 0;
}

using namespace MoLive;

/* Drops the worker and every stream, and puts the player back to its freshly built state. */
void MoLivePlayer::reset()
{
    if (worker != NULL) {
        worker->destroy();
        worker = NULL;
        streams.erase(streams.begin(), streams.end());
        clearPlayerArray(&unk143C);
        unk0000.first = 0;
        unk1480 = 0x40;
        unk148D = 1;
        unk148E = 0;
    }
}
