#include "common.h"

extern "C" {

int FUN_002bd430(s32 resource);

s32 *FUN_00130ec0(s32 *resources)
{
    s32 i = 0;

    do {
        if (resources[i] != 0) {
            FUN_002bd430(resources[i]);
        }
        i++;
    } while (i < 2);
    return resources;
}

} /* extern "C" */
