/* NON_MATCHING: 513 lines, a complete rewrite: the earlier draft scored 490 but built only 104 of retail's 388 rows, so
 * this replaced it (wave 77 review: correctness before score). The same operations in retail's order (the weight vectors' integer zero w and the reloads after it
 * included), but retail forms the scratch slots' addresses in r2/r3/ip/r4 again and again (about 35 more register moves
 * and adds) where the build addresses every slot from the one base, keeps the first tangent in s11/s7-s9 and t cubed in
 * s10, and so copies the later points as three floats and one where the build copies four. */
#include "gfx/VectorScratch.h"

static __inline void vector4Copy(const Vector4 *source, Vector4 *destination)
{
    *destination = *source;
}

/* Sets the three axes to one value and clears w. */
static __inline void vector4SetAxes(Vector4 *v, f32 value)
{
    Vector4 axes = { value, value, value, 0.0f };
    *v = axes;
}

static __inline void vector4Add(Vector4 *sum, const Vector4 *addend)
{
    sum->x += addend->x;
    sum->y += addend->y;
    sum->z += addend->z;
    sum->w += addend->w;
}

static __inline void vector4Subtract(Vector4 *minuend, const Vector4 *subtrahend)
{
    minuend->x -= subtrahend->x;
    minuend->y -= subtrahend->y;
    minuend->z -= subtrahend->z;
    minuend->w -= subtrahend->w;
}

static __inline void vector4Multiply(Vector4 *product, const Vector4 *factor)
{
    product->x *= factor->x;
    product->y *= factor->y;
    product->z *= factor->z;
    product->w *= factor->w;
}

extern "C" {

/* Evaluates the Catmull-Rom spline through four control points at `t` (between points[1] and
 * points[2]) and leaves the position in the first scratch slot. */
void vectorScratchCatmullRom(const Vector4 *points, f32 t)
{
    VectorScratch *scratch = &g_vectorScratch;
    Vector4 half;
    half.x = 0.5f;
    half.y = 0.5f;
    half.z = 0.5f;
    half.w = 0.0f;
    f32 t2 = t * t;
    f32 t3 = t2 * t;

    vector4Copy(&points[1], &scratch->first.vector);
    vector4Copy(&points[0], &scratch->second.vector);
    vector4Subtract(&scratch->first.vector, &scratch->second.vector);
    vector4Copy(&scratch->first.vector, &scratch->third.vector);
    vector4Copy(&points[2], &scratch->first.vector);
    vector4Copy(&points[1], &scratch->second.vector);
    vector4Subtract(&scratch->first.vector, &scratch->second.vector);
    vector4Add(&scratch->first.vector, &scratch->third.vector);
    vector4Copy(&half, &scratch->second.vector);
    vector4Multiply(&scratch->first.vector, &scratch->second.vector);
    Vector4 startTangent = scratch->first.vector;

    vector4Copy(&points[2], &scratch->first.vector);
    vector4Copy(&points[1], &scratch->second.vector);
    vector4Subtract(&scratch->first.vector, &scratch->second.vector);
    vector4Copy(&scratch->first.vector, &scratch->third.vector);
    vector4Copy(&points[3], &scratch->first.vector);
    vector4Copy(&points[2], &scratch->second.vector);
    vector4Subtract(&scratch->first.vector, &scratch->second.vector);
    vector4Add(&scratch->first.vector, &scratch->third.vector);
    vector4Copy(&half, &scratch->second.vector);
    vector4Multiply(&scratch->first.vector, &scratch->second.vector);
    Vector4 endTangent = scratch->first.vector;

    f32 startWeight = 2.0f * t3 - 3.0f * t2 + 1.0f;
    f32 startTangentWeight = t3 - 2.0f * t2 + t;
    f32 endTangentWeight = t3 - t2;
    f32 endWeight = -2.0f * t3 + 3.0f * t2;

    vector4SetAxes(&scratch->first.vector, startWeight);
    vector4Copy(&points[1], &scratch->second.vector);
    vector4Multiply(&scratch->first.vector, &scratch->second.vector);
    vector4Copy(&scratch->first.vector, &scratch->third.vector);

    vector4SetAxes(&scratch->first.vector, startTangentWeight);
    vector4Copy(&startTangent, &scratch->second.vector);
    vector4Multiply(&scratch->first.vector, &scratch->second.vector);
    vector4Add(&scratch->third.vector, &scratch->first.vector);

    vector4SetAxes(&scratch->first.vector, endTangentWeight);
    vector4Copy(&endTangent, &scratch->second.vector);
    vector4Multiply(&scratch->first.vector, &scratch->second.vector);
    vector4Add(&scratch->third.vector, &scratch->first.vector);

    vector4SetAxes(&scratch->first.vector, endWeight);
    vector4Copy(&points[2], &scratch->second.vector);
    vector4Multiply(&scratch->first.vector, &scratch->second.vector);
    vector4Add(&scratch->first.vector, &scratch->third.vector);
}

} /* extern "C" */
