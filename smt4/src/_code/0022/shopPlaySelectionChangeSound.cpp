#include "common.h"

extern "C" {

int eventQueueAddUnique(int id);

void shopPlaySelectionChangeSound(void)
{
    eventQueueAddUnique(0x100016f);
}

} /* extern "C" */
