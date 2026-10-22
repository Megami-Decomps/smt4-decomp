#include "common.h"

extern "C" {
void FUN_0019ea00();
void FUN_0019e5e0(u32, u32, u32, u32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void effectSubmitDefaultParameters();
}

// Apply a five-component effect with default IDs and zero auxiliary components.
extern "C" void effectApplyFiveComponentsWithDefaults(f32 first, f32 second, f32 third, f32 fourth, f32 fifth)
{
    FUN_0019ea00();
    FUN_0019e5e0(~0u, ~0u, ~0u, ~0u, first, second, third, fourth, 0, 0, 0, 0, fifth);
    effectSubmitDefaultParameters();
}
