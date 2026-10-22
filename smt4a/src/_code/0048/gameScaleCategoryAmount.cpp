#include "common.h"

extern "C" {
/* Converts an amount using the factor selected by categories one through five. */
s32 gameScaleCategoryAmount(u32 category, s32 amount)
{
    f32 value;
    switch (category) {
    case 1:
        value = static_cast<f32>(amount) * 70.4f;
        break;
    case 2:
        value = static_cast<f32>(amount) * 300.8f;
        break;
    case 3:
        value = static_cast<f32>(amount * 800);
        break;
    case 4:
        value = static_cast<f32>(amount) * 2120.0f;
        break;
    case 5:
        value = static_cast<f32>(amount) * 5600.0f;
        break;
    }
    return static_cast<s32>(value);
}
}
