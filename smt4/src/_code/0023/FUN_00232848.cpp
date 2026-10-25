#include "common.h"
#include "shard/FUN_00232848.h"

extern "C" {

int eventQueueAddUnique(int id);

void FUN_00232848(void)
{
    eventQueueAddUnique(0x100016e);
}

} /* extern "C" */
