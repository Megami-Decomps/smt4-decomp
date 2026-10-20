/* Returns the result of the following function for 1 << n, or an error code if n is out of range. */
#include "common.h"

extern "C" {

u32 FUN_0035adb8(u32 mask);

u32 FUN_0035ae74(u32 n)
{
    if (n >= 4) {
        return 0xd8e06bed;
    }
    return FUN_0035adb8(1 << n);
}

}
