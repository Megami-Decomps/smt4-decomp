/* Queries FUN_0017f9f4 (its three results are unused), then stores the two words in the global pair. */
#include "common.h"

extern "C" {

struct Pair003f60ec {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
};

extern Pair003f60ec DAT_0044e960;

void FUN_0017f9f4(u8 *a, u8 *b, u8 *c);
__weak void FUN_003f60ec_hook(s32 zero, u32 code);

void FUN_003f60ec(u32 first, u32 second)
{
    u8 a[4];
    u8 b[4];
    u8 c[4];

    FUN_003f60ec_hook(0, 0x040000a9);
    FUN_0017f9f4(a, b, c);
    DAT_0044e960.first = first;
    DAT_0044e960.second = second;
}

}
