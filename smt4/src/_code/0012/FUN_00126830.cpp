#include "font/TextLayoutApi.h"

/* Measure the selected text line with flags 16 | 2; native returns the width in s0. */
extern "C" f32 FUN_00126830(void *text, s32 selectedLine)
{
    return FUN_002b080c(text, 18, selectedLine, 0.0f, 0.0f, 0.0f, 0.0f);
}
