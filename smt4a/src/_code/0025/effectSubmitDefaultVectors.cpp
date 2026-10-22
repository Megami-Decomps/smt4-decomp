#include "common.h"

extern "C" void FUN_0019ea00(void);
extern "C" void FUN_0019e5e0(u32 first, u32 second, u32 third, u32 fourth,
                               f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
                               f32 x2, f32 y2, f32 z2);
extern "C" void effectSubmitDefaultParameters(void);

/* Submit the effect's three vectors between the default begin/end parameter blocks. */
extern "C" void effectSubmitDefaultVectors(f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
                               f32 x2, f32 y2, f32 z2)
{
    FUN_0019ea00();
    FUN_0019e5e0(-1u, -1u, -1u, -1u, x0, y0, z0, x1, y1, z1, x2, y2, z2);
    effectSubmitDefaultParameters();
}
