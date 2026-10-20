#include "shard/Shard004D.h"

extern "C" {

extern void eventQueueAddUnique(s32 event);

void sendEvent100020D(void)
{
    eventQueueAddUnique(0x100020d);
}

} /* extern "C" */
