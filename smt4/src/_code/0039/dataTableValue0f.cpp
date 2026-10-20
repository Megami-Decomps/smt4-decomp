#include "common.h"

extern "C" {

int fileSlotGetBuffer(int id);

void dataTableValue0f(void)
{
    fileSlotGetBuffer(0xf);
}

} /* extern "C" */
