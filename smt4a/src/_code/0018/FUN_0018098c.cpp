#include "common.h"
#include "code/Code0018_Smt4a.h"

extern "C" {

/* Draws/lays out the whole text, forwarding all four floating-point inputs (smt4 FUN_002b0800). */
f32 FUN_0018098c(const void *text, f32 x, f32 y, f32 depth, f32 opacity)
{
    return textLayoutDraw(text, x, y, 0, -1, depth, opacity);
}

} /* extern "C" */
