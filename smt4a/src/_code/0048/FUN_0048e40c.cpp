#include "common.h"

extern "C" {

int FUN_0018719c(u32 id);
int FUN_003e46f4(u32 id);

/* True when conditions 0x49a, 0x400 and 0x76 hold and either 0xc is clear or 0x10 holds. */
u32 FUN_0048e40c(void)
{
    if (FUN_0018719c(0x49a) == 0) {
        return 0;
    }
    if (FUN_0018719c(0x400) == 0) {
        return 0;
    }
    if (FUN_003e46f4(0x76) == 0) {
        return 0;
    }
    if (FUN_0018719c(0xc) != 0) {
        if (FUN_0018719c(0x10) == 0) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
