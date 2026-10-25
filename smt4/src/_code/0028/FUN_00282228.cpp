/* NON_MATCHING: vector-copy bases and the duration conversion are scheduled differently. */
#include "map/VectorPairTransition.h"

extern "C" {
extern VectorTransitionGlobals DAT_004474f0;
void __aeabi_memcpy4(void* destination, const void* source, u32 size);

// Install a camera-vector transition and precompute its unsmoothed per-frame deltas.
void FUN_00282228(const VectorPairTransition* parameters)
{
    VectorPairTransition* transition = &DAT_004474f0.work->transition;
    __aeabi_memcpy4(transition, parameters, sizeof(VectorPairTransition));
    transition->current.first = transition->start.first;
    transition->current.second = transition->start.second;
    transition->frame = 0;
    if (transition->smoothing == 0) {
        vectorPairComputeDelta(transition->delta.first, transition->target.first,
                               transition->start.first, transition->duration);
        vectorPairComputeDelta(transition->delta.second, transition->target.second,
                               transition->start.second, transition->duration);
    }
}
}
