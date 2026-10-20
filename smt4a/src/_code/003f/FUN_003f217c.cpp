#include "common.h"

extern "C" {

s32 FUN_003e4a00(void);

/* Maps the state FUN_003e4a00 reports (2..7) to its id 201..206; anything else gives 200. */
u32 FUN_003f217c(void)
{
    switch ((s16)FUN_003e4a00()) {
    case 2:
        return 201;
    case 3:
        return 202;
    case 4:
        return 203;
    case 5:
        return 204;
    case 6:
        return 205;
    case 7:
        return 206;
    case 0:
        return 200;
    case 1:
        return 200;
    default:
        return 200;
    }
}

} /* extern "C" */
