#include "common.h"

extern "C" {

s32 scrGetArg(s32 index);
void FUN_002452a8(s32 kind);

/* Script command: runs FUN_002452a8 for kinds 3, 4 and 5 when args 0, 1 and 2 are set (arg 3 is read and ignored). */
u32 scrCommEnableKinds(void)
{
    bool first = scrGetArg(0) != 0;
    bool second = scrGetArg(1) != 0;
    bool third = scrGetArg(2) != 0;

    scrGetArg(3);
    if (first) {
        FUN_002452a8(3);
    }
    if (second) {
        FUN_002452a8(4);
    }
    if (third) {
        FUN_002452a8(5);
    }
    return 1;
}

} /* extern "C" */
