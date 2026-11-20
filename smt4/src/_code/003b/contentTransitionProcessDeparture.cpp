#include "shard/W6_W6Match6_ContentTransition.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "map/mapDepart.h"
#include "game/GameState.h"
#include <stddef.h>

/* The transition's departure work: the map-departure flags and the delayed-return counter. */
struct ContentDepartureWork : ContentTransition {
    /* 0x048 */ u8 specialMapPending;
    /* 0x049 */ u8 mapPending;
    /* 0x04A */ u8 unk04a[0xd2e];
    /* 0xD78 */ s16 delayFrames;
};
typedef char ContentDepartureWorkLayout[offsetof(ContentDepartureWork, specialMapPending) == 0x48 &&
    offsetof(ContentDepartureWork, delayFrames) == 0xD78 ? 1 : -1];

extern "C" {
s32 screenFadeIsBusy();
void partyRestoreGroup(u32 party, s32 force);
void titleSetSlotValueState2(u32 slot, u32 value);
void mapDepartSetTarget(s32 map, s32 area, u32 place);
void __ARM_common_memcpy4_6(void *destination, const void *source);
void mikadoLoadSceneResources(ContentTransition *transition);
void campScriptCleanupRelease(ContentTransition *transition);

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
void contentTransitionProcessDeparture(ContentDepartureWork *work)
{
    if (!(work->flags & 0x100) && screenFadeIsBusy() != 0) {
        return;
    }
    u32 flags = work->flags;
    if (flags & 0x400000) {
        ++work->delayFrames;
        if (work->delayFrames >= 30) {
            partyRestoreGroup(0, 1);
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
        asdSequenceRequest(static_cast<s32>(g_mapSelection.selection.group) >= 100 ? 8 : 6, NULL, 0);
    } else if (flags & 0x100000) {
        s32 map = (s16)work->destination.map;
        if (map >= 100) {
            if (map != 100) {
                mapDepartSetTarget(map, 1, ~0u);
            }
            work->specialMapPending = 1;
        } else {
            mapDepartSetTarget(map, (s16)work->destination.area,
                               (s16)work->destination.place);
            work->mapPending = 1;
        }
        work->step.state = 17;
        work->step.phase = 0;
        return;
    } else {
        campScriptCleanupRelease(work);
        __ARM_common_memcpy4_6(&work->sourceMap, &work->destination);
        mikadoLoadSceneResources(work);
        work->step = contentTransitionStep(2, 0);
        work->flags &= ~0x10u;
        return;
    }
    work->step.state = 17;
    work->step.phase = 0;
}
}
