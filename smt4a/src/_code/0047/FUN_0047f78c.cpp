#include "common.h"
extern "C" {
s32 lcgRandomRange(s32 limit);
/* Returns true on the low ten outcomes of a 99-value draw. */
bool FUN_0047f78c()
{
    bool result = false;

    if (lcgRandomRange(99) < 10) {
        result = true;
    }
    return result;
}
}
