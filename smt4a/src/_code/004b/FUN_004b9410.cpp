/* NON_MATCHING: same shape as smt4 contentTransitionProcessDeparture (flag tests and the record stores of state and phase match); remaining: retail places the shared state-17 tail right after the sequence request (the map branches branch back to it) and orders the 6/8 selection's movge/movlt the other way. */
#include "shard/W6_W6Match6_ContentTransition.h"
#include "map/MapSelection.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {
extern MapSelection g_mapSelection;
s32 screenFadeIsBusy();
void mapPlaceSet(s32 map, s32 area, s32 place);
void FUN_004a0bac(s32 option, s32 enabled);
void titleSetSlotValueState2(s32 option, s32 frames);
void campScriptPanelResourcesRelease(ContentTransition *work);
void mikadoLoadSceneResources(ContentTransition *work);
void __ARM_common_memcpy4_6(ShortJumpDestination *source, ShortJumpDestination *destination);

/* True when a pending request flag that supersedes the departure is set. */
static __inline bool departureIsSuperseded(u32 flags)
{
    if (flags & 0x200000)
        return true;
    if (flags & 0x40000)
        return true;
    if (flags & 0x800000)
        return true;
    if (flags & 0x4000000)
        return true;
    if (flags & 0x1000000)
        return true;
    if (flags & 0x2000000)
        return true;
    if (flags & 0x8000000)
        return true;
    if (flags & 0x20000000)
        return true;
    return false;
}

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
            titleSetSlotValueState2(0, 10);
            work->flags &= ~0x400000;
            work->step = contentTransitionStep(5, 0);
        }
        return;
    }
    if (!departureIsSuperseded(flags) && (flags & 0x10) != 0) {
        if ((flags & 0x80000) != 0) {
            asdSequenceRequest(g_mapSelection.id < 100 ? 6 : 8, 0, 0);
            work->step.state = 0x11;
            work->step.phase = 0;
            return;
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
            campScriptPanelResourcesRelease(work);
            __ARM_common_memcpy4_6(reinterpret_cast<ShortJumpDestination *>(&work->sourceMap), &work->destination);
            mikadoLoadSceneResources(work);
            work->step = contentTransitionStep(2, 0);
            work->flags &= ~0x10;
            return;
        }
    }
    work->step.state = 0x11;
    work->step.phase = 0;
}
}
