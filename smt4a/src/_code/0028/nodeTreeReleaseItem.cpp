#include "common.h"

extern "C" {

void nodeTreeRelease(void *block);

typedef struct BlockHeader {
    /* 0x00 */ u8 data[0x34];
} BlockHeader;

/* Releases the memory block whose 0x34-byte header precedes `node` (when there is a node). */
void nodeTreeReleaseItem(BlockHeader *node)
{
    if (node != NULL) {
        nodeTreeRelease(node - 1);
        return;
    }
}

} /* extern "C" */
