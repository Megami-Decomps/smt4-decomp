#include "common.h"

extern "C" {

extern u8 *packageFindFileRefByName(u32 a, u32 b, u32 c);

void aocPackageClearFileRefFlagType0C(u32 a, u32 b)
{
    u8 *entry = packageFindFileRefByName(a, 0xc, b);

    if (entry != NULL) {
        entry[0xd] = 0;
    }
}

} /* extern "C" */
