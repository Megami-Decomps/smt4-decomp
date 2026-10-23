/* NON_MATCHING: map departure behavior restored; compiler merges exclusion masks and schedules transition stores differently. */
#include "shard/W6_W6Match6_ContentTransition.h"
#include "map/MapSelection.h"

extern "C" {
extern MapSelection g_mapSelection;
s32 screenFadeIsBusy();
void asdSequenceRequest(u32 sequence, u32 parameter, u32 flags);
void mapPlaceSet(s32 map, s32 area, s32 place);
void FUN_004a0bac(s32 option, s32 enabled);
void FUN_003d54f8(s32 option, s32 frames);
void FUN_004b7a54(ContentTransition *work);
void mikadoLoadSceneResources(ContentTransition *work);
void FUN_001d1438(ShortJumpDestination *source, ShortJumpDestination *destination);

// Finish delayed departure, switch sequence or prepare the requested map destination.
void FUN_004b9410(ContentTransition *work)
{
    struct DepartureWorkView {
        ContentTransition transition;
        u8 worldMapReady;
        u8 localMapReady;
        u8 padding[0x10EA];
        s16 delay;
    };
    DepartureWorkView *departure = reinterpret_cast<DepartureWorkView *>(work);
    if ((work->flags & 0x100) == 0 && screenFadeIsBusy())
        return;
    u32 flags = work->flags;
    if ((flags & 0x400000) != 0) {
        ++departure->delay;
        if (departure->delay >= 30) {
            FUN_004a0bac(0, 1);
            FUN_003d54f8(0, 10);
            work->flags &= ~0x400000;
            work->state = 5;
            work->phase = 0;
        }
        return;
    }
    if ((flags & 0x200000) == 0 && (flags & 0x40000) == 0 &&
        (flags & 0x800000) == 0 && (flags & 0x4000000) == 0 &&
        (flags & 0x1000000) == 0 && (flags & 0x2000000) == 0 &&
        (flags & 0x8000000) == 0 && (flags & 0x20000000) == 0 && (flags & 0x10) != 0) {
        if ((flags & 0x80000) != 0) {
            asdSequenceRequest(g_mapSelection.id < 100 ? 6 : 8, 0, 0);
        } else if ((flags & 0x100000) != 0) {
            s32 map = (s16)work->destination.map;
            if (map >= 100) {
                if (map != 100)
                    mapPlaceSet(map, 1, -1);
                departure->worldMapReady = 1;
            } else {
                mapPlaceSet(map, (s16)work->destination.area, (s16)work->destination.place);
                departure->localMapReady = 1;
            }
        } else {
            FUN_004b7a54(work);
            FUN_001d1438(reinterpret_cast<ShortJumpDestination *>(&work->sourceMap), &work->destination);
            mikadoLoadSceneResources(work);
            work->state = 2;
            work->phase = 0;
            work->flags &= ~0x10;
            return;
        }
    }
    work->state = 0x11;
    work->phase = 0;
}
}
