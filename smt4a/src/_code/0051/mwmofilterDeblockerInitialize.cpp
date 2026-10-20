/* Stores the two words in the global pair (after a removed hook call). */
#include "common.h"

extern "C" {

struct PairFUN_00513638 {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
};

extern PairFUN_00513638 g_mwmofilterDeblocker;

__weak void FUN_00513638_hook(s32 zero, u32 code);

void mwmofilterDeblockerInitialize(u32 first, u32 second)
{
    FUN_00513638_hook(0, 0x0400008b);
    g_mwmofilterDeblocker.first = first;
    g_mwmofilterDeblocker.second = second;
}

}
