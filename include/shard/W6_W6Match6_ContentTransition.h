#ifndef SHARD_W6_W6MATCH6_CONTENT_TRANSITION_H
#define SHARD_W6_W6MATCH6_CONTENT_TRANSITION_H

#include "common.h"

struct ShortJumpDestination { u16 map, area, place; };

/* The transition's state and the phase within it, one 8-byte record. */
struct ContentTransitionStep {
    s32 state;
    s32 phase;
};

/* The step record for `state` at `phase` (entering a state assigns it whole: retail's strd). */
static __inline ContentTransitionStep contentTransitionStep(s32 state, s32 phase)
{
    ContentTransitionStep step;
    step.state = state;
    step.phase = phase;
    return step;
}

struct ContentTransition {
    u8 unk00[0x20];
    u32 flags;
    u32 unk24;
    ContentTransitionStep step; /* 0x28 */
    u8 unk30[0xc];
    u16 sourceMap;
    u16 unk3e;
    u16 sourceArea;
    ShortJumpDestination destination;
};

#endif
