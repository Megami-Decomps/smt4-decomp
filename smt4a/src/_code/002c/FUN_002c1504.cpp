#include "common.h"

extern "C" {

int FUN_002c2138(void);
int FUN_002deb84(void);
int FUN_0031cb5c(void);
int FUN_0036fad8(int arg);
int FUN_0039b8ac(void);

/* Two-way availability check: succeeds (1) after FUN_0039b8ac when FUN_002c2138 passes, or when FUN_0031cb5c passes. */
u32 FUN_002c1504(void)
{
    if (FUN_002deb84() != 0) {
        if (FUN_002c2138() == 0) {
            return 0;
        }
        FUN_0039b8ac();
        return 1;
    }
    if (FUN_0031cb5c() != 0) {
        return 1;
    }
    FUN_0036fad8(0);
    return 0;
}

} /* extern "C" */
