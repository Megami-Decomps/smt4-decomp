#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

/* Counts the set bits among bits 1-500 of the bit array. */
int bitArrayCountSet1to500(const u8 *bits)
{
    int count = 0;
    int i;

    for (i = 1; i < 501; i++) {
        if ((bits[i / 8] & (1 << (i % 8))) != 0) {
            count++;
        }
    }
    return count;
}

} /* extern "C" */
