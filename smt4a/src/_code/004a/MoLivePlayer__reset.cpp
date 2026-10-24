/* NON_MATCHING: needs the rename of _ZN12MoLivePlayer5resetEv to _ZN12MoLivePlayer5resetEv; with it every call and store matches; the build keeps one more stack word for the erase temporaries and clears the first two words with two str where retail stores a pair (strd of two zero registers). */
#include "mobiclip/MoLivePlayer.h"
#include "mobiclip/MoLiveObjectHandleMap.h"

using namespace MoLive;

extern "C" void FUN_00521c8c(PlayerArray *array, u32 *first, u32 *last);

/* Drops the worker and every stream, and puts the player back to its freshly built state. */
void MoLivePlayer::reset()
{
    if (worker != NULL) {
        worker->destroy();
        worker = NULL;
        streams.erase(streams.begin(), streams.end());
        PlayerArray *array = &unk143C;
        FUN_00521c8c(array, 0, array->capacity);
        array->capacity = 0;
        unk0000.a = unk0000.b = 0;
        unk1480 = 0x40;
        unk148D = 1;
        unk148E = 0;
    }
}
