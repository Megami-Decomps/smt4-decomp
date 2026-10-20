#include "shard/Shard004D.h"

extern "C" {

extern void eventQueueAddUnique(s32 event);

void sendEvent1000210(void)
{
    eventQueueAddUnique(0x1000210);
}

} /* extern "C" */
