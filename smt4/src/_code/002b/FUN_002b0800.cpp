#include "font/TextLayoutApi.h"

/* Draw/layout the whole text, forwarding all four floating-point inputs. */
extern "C" f32 FUN_002b0800(void *text, f32 x, f32 y, f32 depth, f32 opacity)
{
    return FUN_002b080c(text, 0, -1, x, y, depth, opacity);
}
