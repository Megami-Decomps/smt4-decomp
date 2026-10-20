#include "common.h"

extern "C" {

extern int FUN_0029022c(void);
extern int FUN_002903f0(void);

int FUN_0027d968(void)
{
    int result = FUN_0029022c();

    if ((result == 0) || (result = FUN_002903f0(), result <= 0)) {
        result = -1;
    }
    return result;
}

} /* extern "C" */
