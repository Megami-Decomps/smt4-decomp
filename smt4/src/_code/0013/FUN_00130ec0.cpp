#include "common.h"

extern "C" {

int sndVoiceFree(s32 resource);

s32 *FUN_00130ec0(s32 *resources)
{
    s32 i = 0;

    do {
        if (resources[i] != 0) {
            sndVoiceFree(resources[i]);
        }
        i++;
    } while (i < 2);
    return resources;
}

} /* extern "C" */
