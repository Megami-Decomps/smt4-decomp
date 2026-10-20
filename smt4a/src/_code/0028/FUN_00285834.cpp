#include "common.h"

extern "C" {

void FUN_0021a610(void *block);

typedef struct BlockHeader {
    /* 0x00 */ u8 data[0x34];
} BlockHeader;

/* Releases the memory block whose 0x34-byte header precedes `node` (when there is a node). */
void FUN_00285834(BlockHeader *node)
{
    if (node != NULL) {
        FUN_0021a610(node - 1);
        return;
    }
}

} /* extern "C" */
