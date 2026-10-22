#include "common.h"

extern "C" {

/* Strips a leading "<scheme>:/" from the `size`-byte path buffer in place, zero-filling the freed
 * tail. */
void pathStripScheme(void *owner, char *path, s32 size)
{
    s32 start = 0;
    s32 rest;
    s32 i;

    for (i = 0; i < size - 2; i++) {
        if (path[i] == ':' && path[i + 1] == '/') {
            start = i + 2;
            break;
        }
    }
    if (start <= 0) {
        return;
    }
    rest = size - start;
    for (i = 0; i < rest; i++) {
        path[i] = path[start + i];
    }
    for (i = rest; i < size; i++) {
        path[i] = 0;
    }
}

} /* extern "C" */
