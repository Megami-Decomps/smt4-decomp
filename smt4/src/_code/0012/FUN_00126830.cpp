#include "font/TextLayoutApi.h"

/* Measure a text prefix with mode 18; native returns the width in s0. */
extern "C" f32 FUN_00126830(void *text, s32 limit)
{
    return FUN_002b080c(text, 18, limit, 0.0f, 0.0f, 0.0f, 0.0f);
}
