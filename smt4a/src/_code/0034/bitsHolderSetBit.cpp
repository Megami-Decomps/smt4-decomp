#include "shard/Shard0034.h"
#include "event/2dEvent/2dEventTex.h"

extern "C" {


/* Sets bit `bit` in the bit array at +0x55 of the FUN_0026140c object. */
void bitsHolderSetBit(u32 bit)
{
    BitsHolder *holder = reinterpret_cast<BitsHolder *>(FUN_0026140c());

    holder->bits[bit >> 3] |= 1 << (bit & 7);
}

} /* extern "C" */
