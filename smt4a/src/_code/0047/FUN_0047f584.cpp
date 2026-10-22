#include "common.h"

extern "C" {
u32 FUN_0014af98(void);
u32 FUN_001628c0(const char *voice, u32 object, u32 kind, u32 flags, f32 leftVolume, f32 rightVolume);
}

/* Play the fixed voice resource at equal left and right volume. */
extern "C" u32 FUN_0047f584(void)
{
    u32 object = FUN_0014af98();
    return FUN_001628c0("I001027", object, 2, 0, 0.707f, 0.707f);
}
