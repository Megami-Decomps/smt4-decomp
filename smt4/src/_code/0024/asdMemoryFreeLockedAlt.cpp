#include "common.h"
extern "C" {
void asdMemFree(void *block);
/* Forward memory release to the shared allocator. */
void asdMemoryFreeLockedAlt(void *block) { asdMemFree(block); }
}
