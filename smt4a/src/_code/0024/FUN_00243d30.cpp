#include "common.h"

extern "C" {
/* The scale factor of a category (1.0 for category 0 and any unknown one). */
f32 FUN_00243d30(u32 category)
{
    f32 scale = 1.0f;

    switch (category) {
    case 0:
        scale = 1.0f;
        break;
    case 1:
        scale = 1.8f;
        break;
    case 2:
        scale = 0.1f;
        break;
    case 3:
        scale = 2.5f;
        break;
    case 4:
        scale = 2.5f;
        break;
    case 5:
        scale = 1.4f;
        break;
    }
    return scale;
}
}
