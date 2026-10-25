#include "common.h"
#include "status/StatusCamera.h"

extern "C" {


/* Sets bit `bit` of the bitset at +0x51. */
void gameSetAuxiliaryProgressFlag(u32 bit)
{
    u8 *bitset = FUN_002a0d0c();

    bitset = bitset + (bit >> 3);
    bitset[0x51] = bitset[0x51] | (u8)(1 << (bit & 7));
}

} /* extern "C" */
