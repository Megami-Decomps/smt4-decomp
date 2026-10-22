/* NON_MATCHING: default optimization retains/caches current components, groups vector stores and schedules FP registers differently; alternate optimization candidate. */
#include "map/VectorPairTransition.h"

namespace {

inline void addVector(BattleVector3& current, const BattleVector3& delta)
{
    current.x += delta.x;
    current.y += delta.y;
    current.z += delta.z;
}
inline void approachVector(BattleVector3& current, const BattleVector3& target, f32 divisor)
{
    BattleVector3 displacement = {
        target.x - current.x,
        target.y - current.y,
        target.z - current.z
    };
    const f32 fraction = 1.0f / divisor;
    displacement.x *= fraction;
    displacement.y *= fraction;
    displacement.z *= fraction;
    addVector(current, displacement);
}

}

extern "C" {
extern VectorTransitionGlobals DAT_004474f0;

s32 vectorPairTransitionStep()
{
    VectorPairTransition* transition = &DAT_004474f0.work->transition;
    if (transition->frame >= transition->duration) {
        transition->current = transition->target;
        return 1;
    }
    if (transition->smoothing) {
        approachVector(transition->current.first, transition->target.first, transition->smoothingDivisor);
        approachVector(transition->current.second, transition->target.second, transition->smoothingDivisor);
    } else {
        addVector(transition->current.first, transition->delta.first);
        addVector(transition->current.second, transition->delta.second);
    }
    ++transition->frame;
    return 0;
}
} // extern "C"
