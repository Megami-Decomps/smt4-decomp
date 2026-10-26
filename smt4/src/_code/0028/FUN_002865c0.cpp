#include "common.h"
#include "code/Code0028.h"

extern "C" {
/* Packs a kind, an enabled flag (0 for kind 1) and a 0-255 alpha into one word. */
u32 FUN_002865c0(u32 kind, f32 value)
{
    u32 flag = 1;
    if (kind == 1)
        flag = 0;
    u32 alpha = (u32)(value * 255.0f + 0.5f);
    return flag | (kind << 4) | ((alpha & 0xff) << 8);
}
}
