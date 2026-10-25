#include "common.h"
#include "shard/W6_W6Match7_SoundInit.h"

extern "C" {

int FUN_0011bba0(const char *prefix, u32 a, u32 b, u32 c, u32 d, u32 e);

/* Forwards its five arguments after the "rom:" prefix. */
void romPathForward(u32 a, u32 b, u32 c, u32 d, u32 e)
{
    FUN_0011bba0("rom:", a, b, c, d, e);
}

} /* extern "C" */
