#include "shard/W5_W5Match2_OwnedBuffers.h"
extern "C" {
void asdMemFree(void *buffer);
/* Release the active buffer pair and return its owner. */
OwnedBuffers *bufferDestroyOwnedPair(OwnedBuffers *owner) { if (owner->active!=0) { asdMemFree(owner->first); if (owner->second!=NULL) { asdMemFree(owner->second); owner->second=NULL; } owner->active=0; } return owner; }
}
