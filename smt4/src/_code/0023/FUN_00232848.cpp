#include "common.h"
#include "code/Code0020.h"
#include "code/Code0023.h"

extern "C" {

int eventQueueAddUnique(int id);

void FUN_00232848(void)
{
    eventQueueAddUnique(0x100016e);
}

} /* extern "C" */
