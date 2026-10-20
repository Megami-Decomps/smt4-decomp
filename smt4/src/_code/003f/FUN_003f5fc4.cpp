/* Stores the two words in the global pair (after a removed hook call). */
#include "common.h"

extern "C" {

struct PairFUN_003f5fc4 {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
};

extern PairFUN_003f5fc4 DAT_0044e948;

__weak void FUN_003f5fc4_hook(s32 zero, u32 code);

void FUN_003f5fc4(u32 first, u32 second)
{
    FUN_003f5fc4_hook(0, 0x0400008a);
    DAT_0044e948.first = first;
    DAT_0044e948.second = second;
}

}
