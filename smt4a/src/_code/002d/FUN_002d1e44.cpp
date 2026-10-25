/* NON_MATCHING: vector-copy bases and floating-point load/conversion scheduling differ. */
#include "map/lmapMain.h"

extern "C" {
extern LmapExtraGlobalsA DAT_005806a0;
void __aeabi_memcpy4(void* destination, const void* source, u32 size);

// Install the Apocalypse camera-vector packet, retaining its extra word.
void FUN_002d1e44(const VectorPairTransitionA* parameters)
{
    VectorPairTransitionA* packet = &DAT_005806a0.extra->cameraTransition.parameters;
    __aeabi_memcpy4(packet, parameters, sizeof(VectorPairTransitionA));
    VectorPairTransition& transition = packet->value;
    transition.current.first = transition.start.first;
    transition.current.second = transition.start.second;
    transition.frame = 0;
    if (transition.smoothing == 0) {
        vectorPairComputeDelta(transition.delta.first, transition.target.first,
                               transition.start.first, transition.duration);
        vectorPairComputeDelta(transition.delta.second, transition.target.second,
                               transition.start.second, transition.duration);
    }
}
}
