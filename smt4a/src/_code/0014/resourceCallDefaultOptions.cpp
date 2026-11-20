#include "common.h"

extern "C" {

extern s32 fileSystemOpenFileDirectly(u32 first, u32 second, u32 third, const u32 *options);

/* Forwards a request with cleared default options. */
s32 resourceCallDefaultOptions(u32 first, u32 second, u32 third)
{
    u32 options[3] = {0, 0, 0};
    return fileSystemOpenFileDirectly(first, second, third, options);
}

} /* extern "C" */
