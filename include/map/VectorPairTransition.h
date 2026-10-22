#ifndef MAP_VECTOR_PAIR_TRANSITION_H
#define MAP_VECTOR_PAIR_TRANSITION_H
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include <stddef.h>

struct VectorPair {
    BattleVector3 first;
    BattleVector3 second;
};
struct VectorPairTransition {
    union {
        u8 unk00[0x18];
        VectorPair start;
    };
    VectorPair target;
    VectorPair current;
    s32 smoothing;
    s32 duration;
    s32 frame;
    VectorPair delta;
    f32 smoothingDivisor;
};
/* Apocalypse copies one additional, currently opaque word with the transition. */
struct VectorPairTransitionA {
    VectorPairTransition value;
    u32 unk70;
};
struct VectorTransitionWork {
    u8 unk000[0x220];
    VectorPairTransition transition;
};
struct VectorTransitionGlobals {
    u32 unk00;
    VectorTransitionWork* work;
};
typedef char VectorPairTransitionLayoutCheck[sizeof(VectorPair) == 0x18 &&
    sizeof(VectorPairTransition) == 0x70 && offsetof(VectorPairTransition, target) == 0x18 &&
    offsetof(VectorPairTransition, current) == 0x30 && offsetof(VectorPairTransition, smoothing) == 0x48 &&
    offsetof(VectorPairTransition, duration) == 0x4C && offsetof(VectorPairTransition, frame) == 0x50 &&
    offsetof(VectorPairTransition, delta) == 0x54 && offsetof(VectorPairTransition, smoothingDivisor) == 0x6C ? 1 : -1];
typedef char VectorTransitionWorkOffsets[offsetof(VectorTransitionWork, transition) == 0x220 &&
    offsetof(VectorTransitionGlobals, work) == 4 && sizeof(VectorTransitionGlobals) == 8 ? 1 : -1];
typedef char VectorPairTransitionALayoutCheck[sizeof(VectorPairTransitionA) == 0x74 &&
    offsetof(VectorPairTransitionA, value) == 0 && offsetof(VectorPairTransitionA, unk70) == 0x70 ? 1 : -1];

static inline void vectorPairComputeDelta(BattleVector3& delta, const BattleVector3& target,
                                         const BattleVector3& start, s32 duration)
{
    BattleVector3 difference = {
        target.x - start.x,
        target.y - start.y,
        target.z - start.z
    };
    const f32 fraction = 1.0f / (f32)duration;
    delta.x = difference.x * fraction;
    delta.y = difference.y * fraction;
    delta.z = difference.z * fraction;
}
#endif
