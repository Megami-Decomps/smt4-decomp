#include "common.h"
#include "shard/asdMemoryFreeLocked.h"
extern "C" {
void asdMemFree(void *block);
/* Forward memory release to the shared allocator. */
void asdMemoryFreeLocked(void *block) { asdMemFree(block); }
}
