#include "shard/Shard004D.h"

extern "C" {

extern void eventQueueAddUnique(s32 event);

void sendEvent100020F(void)
{
    eventQueueAddUnique(0x100020f);
}

} /* extern "C" */
