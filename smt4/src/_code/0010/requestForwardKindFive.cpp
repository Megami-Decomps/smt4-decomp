#include "common.h"

extern "C" {

extern s32 fileSystemOpenFileDirectly(u32 first, u32 second, u32 third, const u32 *options);

/* Forwards a request with option kind five. */
s32 requestForwardKindFive(u32 first, u32 second, u32 third)
{
    u32 options[3];
    options[0] = 5;
    for (s32 i = 1; i < 3; ++i)
        options[i] = 0;
    return fileSystemOpenFileDirectly(first, second, third, options);
}

} /* extern "C" */
