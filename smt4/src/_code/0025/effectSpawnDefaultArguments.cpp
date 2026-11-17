#include "font/TextLayoutApi.h"

/* Measure the text using mode 16 and an unlimited character count. */
extern "C" f32 effectSpawnDefaultArguments(void *text)
{
    return FUN_002b080c(text, 16, -1, 0.0f, 0.0f, 0.0f, 0.0f);
}
