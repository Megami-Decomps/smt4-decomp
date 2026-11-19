#include "font/TextLayoutApi.h"

/* Draw/layout the whole text, forwarding all four floating-point inputs. */
extern "C" f32 FUN_002b0800(void *text, f32 x, f32 y, f32 depth, f32 opacity)
{
    return textLayoutDraw(text, x, y, 0, -1, depth, opacity);
}
