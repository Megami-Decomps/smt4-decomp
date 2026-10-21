#include "shard/W5_W5Match2_OwnedBuffers.h"
extern "C" {
void asdMemFree(void *buffer);
/* Release the active buffer pair and clear its secondary owner pointer. */
void bufferReleaseOwnedPair(OwnedBuffers *owner) { if (owner->active!=0) { asdMemFree(owner->first); if (owner->second!=NULL) { asdMemFree(owner->second); owner->second=NULL; } owner->active=0; } }
}
