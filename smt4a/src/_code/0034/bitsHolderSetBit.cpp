#include "shard/Shard0034.h"

extern "C" {

extern BitsHolder *FUN_0026140c(void);

/* Sets bit `bit` in the bit array at +0x55 of the FUN_0026140c object. */
void bitsHolderSetBit(u32 bit)
{
    BitsHolder *holder = FUN_0026140c();

    holder->bits[bit >> 3] |= 1 << (bit & 7);
}

} /* extern "C" */
