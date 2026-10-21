#include "common.h"

extern "C" {

extern u32 processRunQuery(u32 value);

u32 FUN_002cbe70(int mode)
{
    u32 value = 0xe7e3ffff;

    if (mode != 0) {
        if (mode == 1) {
            value = 0;
        }
        return value;
    }
    value = processRunQuery(0xe7e3ffff);
    return value;
}

} /* extern "C" */
