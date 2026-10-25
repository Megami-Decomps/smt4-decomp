#include "common.h"
#include "util/FUN_0027e3b8.h"

extern "C" {

u32 FUN_0027e3b8(int *obj)
{
    if (*obj == 0) {
        return 0;
    }
    if (*obj == 10 && obj[10] < 1) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
