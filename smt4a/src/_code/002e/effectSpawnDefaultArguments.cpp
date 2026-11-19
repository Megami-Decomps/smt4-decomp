#include "common.h"
#include "code/Code0018_Smt4a.h"

/* Measures the text using mode 16 and an unlimited character count. */
extern "C" f32 effectSpawnDefaultArguments(const void *text)
{
    return textLayoutDraw(text, 0.0f, 0.0f, 16, -1, 0.0f, 0.0f);
}
