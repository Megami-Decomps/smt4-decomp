#include "common.h"

extern "C" {

u32 refIsNullOrZero(int *obj)
{
    if ((obj != NULL) && (*obj != 0)) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
