#include "common.h"

extern "C" {

int nodeTreeRelease(void *item);

void nodeTreeReleaseItem(u8 *item)
{
    if (item != NULL) {
        nodeTreeRelease(item - 0x34);
    }
}

} /* extern "C" */
