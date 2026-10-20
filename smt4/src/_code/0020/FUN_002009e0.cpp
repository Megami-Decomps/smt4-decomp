#include "common.h"

extern "C" {

int FUN_0030a530(void);
int FUN_0031c0e4(void);
extern int FUN_002893d8(void);
extern int FUN_002cd9e4(void);

u8 FUN_002009e0(void)
{
    int result;

    if (FUN_002893d8() != 0) {
        result = FUN_002cd9e4();
        if (result != 0) {
            FUN_0031c0e4();
        }
        return result != 0;
    }
    FUN_0030a530();
    return 0;
}

} /* extern "C" */
