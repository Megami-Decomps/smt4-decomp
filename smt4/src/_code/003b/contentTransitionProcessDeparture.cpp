/* NON_MATCHING: the paired flag tests (tst/tsteq through flagsAny) and the hoisted state-17 store now match; remaining: retail places the shared state-17 tail right after the sequence request (the map branches branch back to it), stores state/phase with a separate base instead of the flags writeback, and its pool word names g_gameState+0x3f8. */
#include "shard/W6_W6Match6_ContentTransition.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "map/mapDepart.h"

struct ContentDepartureWork {
    ContentTransition transition;
    /* 0x048 */ u8 specialMapPending;
    /* 0x049 */ u8 mapPending;
    /* 0x04A */ u8 unk04a[0xd2e];
    /* 0xD78 */ s16 delayFrames;
};

extern "C" {
extern GameState g_gameState;
s32 screenFadeIsBusy();
void FUN_00249b18(u32 party, s32 force);
void FUN_002a03d8(u32 slot, u32 value);
void mapDepartSetTarget(s32 map, s32 area, u32 place);
void __ARM_common_memcpy4_6(void *destination, const void *source);
void mikadoLoadSceneResources(ContentTransition *transition);
void FUN_003b8b0c(ContentTransition *transition);

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
void contentTransitionProcessDeparture(ContentTransition *transition)
{
    ContentDepartureWork *work = (ContentDepartureWork *)transition;
    if (!(transition->flags & 0x100) && screenFadeIsBusy() != 0) {
        return;
    }
    u32 flags = transition->flags;
    if (flags & 0x400000) {
        ++work->delayFrames;
        if (work->delayFrames >= 30) {
            FUN_00249b18(0, 1);
            FUN_002a03d8(0, 10);
            transition->flags &= ~0x400000u;
            transition->state = 5;
            transition->phase = 0;
        }
        return;
    }
    if (!flagsAny(flags, 0x200000, 0x40000) && !flagsAny(flags, 0x800000, 0x4000000) &&
        !flagsAny(flags, 0x1000000, 0x2000000) && !flagsAny(flags, 0x8000000, 0x20000000) && (flags & 0x10)) {
        if (flags & 0x80000) {
            asdSequenceRequest(static_cast<s32>(g_gameState.jump.request.first) < 100 ? 6 : 8, NULL, 0);
            transition->state = 17;
            transition->phase = 0;
            return;
        } else if (flags & 0x100000) {
            s32 map = (s16)transition->destination.map;
            if (map >= 100) {
                if (map != 100) {
                    mapDepartSetTarget(map, 1, ~0u);
                }
                work->specialMapPending = 1;
            } else {
                mapDepartSetTarget(map, (s16)transition->destination.area,
                                   (s16)transition->destination.place);
                work->mapPending = 1;
            }
        } else {
            FUN_003b8b0c(transition);
            __ARM_common_memcpy4_6(&transition->sourceMap, &transition->destination);
            mikadoLoadSceneResources(transition);
            transition->state = 2;
            transition->phase = 0;
            transition->flags &= ~0x10u;
            return;
        }
    }
    transition->state = 17;
    transition->phase = 0;
}
}
