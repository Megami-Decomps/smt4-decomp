/* NON_MATCHING: placement new stops armcc's unrolling (13 vs 12 rows); retail copies the loop index with `mov r2, r1` before incrementing while built indexes with `r1` directly. */
#include "common.h"

inline void *operator new(u32, void *storage) { return storage; }

struct FloatElement {
    FloatElement() : value(0.0f) {}
    f32 value;
};

struct FloatArray {
    FloatElement *values;
    u32 count;
};

/* Binds and zero-constructs the floating array; the caller provides a nonempty count. */
extern "C" void floatArrayConstruct(FloatArray *array, FloatElement *values, u32 count)
{
    array->values = values;
    array->count = count;
    for (u32 i = 0; i <= count - 1; ++i) {
        new (&array->values[i]) FloatElement();
    }
}
