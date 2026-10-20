#include "common.h"

extern "C" {

int fileSlotLoad(int id);

void dataTable27Load(void)
{
    fileSlotLoad(0x27);
}

} /* extern "C" */
