#include "common.h"

extern "C" {

extern s32 FUN_002eb6ae(u32 id, u32 mask);

/* Whether either of the two conditions 0x20 and 0x10 holds for `id`. */
s32 FUN_002f2c94(u32 id)
{
    return FUN_002eb6ae(id, 0x20) || FUN_002eb6ae(id, 0x10);
}

}
