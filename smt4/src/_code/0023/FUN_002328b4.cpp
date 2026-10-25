#include "common.h"
#include "shard/FUN_002328b4.h"

extern "C" {

int eventQueueAddUnique(int id);

void FUN_002328b4(void)
{
    eventQueueAddUnique(0x100016d);
}

} /* extern "C" */
