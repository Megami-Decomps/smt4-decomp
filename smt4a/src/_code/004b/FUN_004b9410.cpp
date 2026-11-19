#include "shard/W6_W6Match6_ContentTransition.h"
#include "map/MapSelection.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include <stddef.h>

/* The transition's departure work: the map-departure flags and the delayed-return counter. */
struct ContentDepartureWorkA : ContentTransition {
    /* 0x0048 */ u8 specialMapPending;
    /* 0x0049 */ u8 mapPending;
    /* 0x004A */ u8 unk004a[0x10EA];
    /* 0x1134 */ s16 delayFrames;
};
typedef char ContentDepartureWorkALayout[offsetof(ContentDepartureWorkA, specialMapPending) == 0x48 &&
    offsetof(ContentDepartureWorkA, delayFrames) == 0x1134 ? 1 : -1];

extern "C" {
extern MapSelection g_mapSelection;
s32 screenFadeIsBusy();
void mapPlaceSet(s32 map, s32 area, s32 place);
void FUN_004a0bac(s32 option, s32 enabled);
void titleSetSlotValueState2(s32 option, s32 frames);
void campScriptPanelResourcesRelease(ContentTransition *work);
void mikadoLoadSceneResources(ContentTransition *work);
void __ARM_common_memcpy4_6(ShortJumpDestination *source, ShortJumpDestination *destination);

/* Whether either of two flag bits is set. */
static __inline bool flagsAny(u32 flags, u32 first, u32 second)
{
    if (flags & first)
        return true;
    if (flags & second)
        return true;
    return false;
}

/* Departure step of a content transition: waits out the fade or the delayed return, then starts the
 * requested sequence, map departure or scene load. */
void FUN_004b9410(ContentDepartureWorkA *work)
{
    if (!(work->flags & 0x100) && screenFadeIsBusy() != 0) {
        return;
    }
    u32 flags = work->flags;
    if (flags & 0x400000) {
        ++work->delayFrames;
        if (work->delayFrames >= 30) {
            FUN_004a0bac(0, 1);
            titleSetSlotValueState2(0, 10);
            work->flags &= ~0x400000u;
            work->step = contentTransitionStep(5, 0);
        }
        return;
    }
    if (flagsAny(flags, 0x200000, 0x40000) || flagsAny(flags, 0x800000, 0x4000000) ||
        flagsAny(flags, 0x1000000, 0x2000000) || flagsAny(flags, 0x8000000, 0x20000000) || !(flags & 0x10)) {
        work->step.state = 17;
        work->step.phase = 0;
        return;
    }
    if (flags & 0x80000) {
        asdSequenceRequest(g_mapSelection.id >= 100 ? 8 : 6, NULL, 0);
    } else if (flags & 0x100000) {
        s32 map = (s16)work->destination.map;
        if (map >= 100) {
            if (map != 100) {
                mapPlaceSet(map, 1, -1);
            }
            work->specialMapPending = 1;
        } else {
            mapPlaceSet(map, (s16)work->destination.area, (s16)work->destination.place);
            work->mapPending = 1;
        }
        work->step.state = 17;
        work->step.phase = 0;
        return;
    } else {
        campScriptPanelResourcesRelease(work);
        __ARM_common_memcpy4_6(reinterpret_cast<ShortJumpDestination *>(&work->sourceMap), &work->destination);
        mikadoLoadSceneResources(work);
        work->step = contentTransitionStep(2, 0);
        work->flags &= ~0x10u;
        return;
    }
    work->step.state = 17;
    work->step.phase = 0;
}
}
