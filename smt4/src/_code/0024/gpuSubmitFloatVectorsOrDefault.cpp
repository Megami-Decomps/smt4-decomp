#include "common.h"

struct GpuFloatVector4 { f32 x, y, z, w; };

extern "C" {

extern const GpuFloatVector4 *g_defaultDrawColor;
void gpuSubmitFloat24Vectors(const GpuFloatVector4 *second, f32 x, f32 y, f32 z, f32 u, f32 v);

/* Submits the float24 vectors, using the default vector when none is given. */
void gpuSubmitFloatVectorsOrDefault(const GpuFloatVector4 *second, f32 x, f32 y, f32 z, f32 u, f32 v)
{
    if (second == NULL) {
        second = g_defaultDrawColor;
    }
    gpuSubmitFloat24Vectors(second, x, y, z, u, v);
}

} /* extern "C" */
