#include "font/TextLayoutApi.h"
#include "shard/W6_W6Match7_DefaultTextureWork.h"

extern "C" {

/* Lays out the text in mode eighteen up to `limit` characters at the origin; returns the width. */
f32 FUN_00126830(const void *text, s32 limit)
{
    return textLayoutDraw(text, 0.0f, 0.0f, 18, limit, 0.0f, 0.0f);
}

} /* extern "C" */
