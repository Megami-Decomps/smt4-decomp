#include "common.h"
#include "shard/W6_W6Match2_GeometryResources.h"
extern "C" {
void asdMemFree(void *block);
/* Forward memory release to the shared allocator. */
void asdMemoryFreeLocked(void *block) { asdMemFree(block); }
}
