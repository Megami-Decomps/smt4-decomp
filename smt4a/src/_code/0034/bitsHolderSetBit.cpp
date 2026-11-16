#include "shard/Shard0034.h"
#include "event/2dEvent/2dEventTex.h"

extern "C" {


/* Sets bit `bit` in the bit array at +0x55 of the saveGetUserSettingsBlock object. */
void bitsHolderSetBit(u32 bit)
{
    BitsHolder *holder = reinterpret_cast<BitsHolder *>(saveGetUserSettingsBlock());

    holder->bits[bit >> 3] |= 1 << (bit & 7);
}

} /* extern "C" */
