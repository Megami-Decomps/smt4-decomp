/* Counts up the saturating byte counter `index` at +0x17c of `base` (indices below 21). */
#include "common.h"

extern "C" {

void counterIncrementSaturating(void *unused, u8 *base, s32 index)
{
    if (index < 21) {
        if (base[index + 0x17c] < 255) {
            base[index + 0x17c]++;
        }
    }
}

}
