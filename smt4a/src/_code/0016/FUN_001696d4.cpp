#include "common.h"
#include "code/Code0018_Smt4a.h"

extern "C" {

/* Lays out the text in mode eighteen up to `limit` characters at the origin; returns the width. */
f32 FUN_001696d4(const void *text, s32 limit)
{
    return textLayoutDraw(text, 0.0f, 0.0f, 18, limit, 0.0f, 0.0f);
}

} /* extern "C" */
