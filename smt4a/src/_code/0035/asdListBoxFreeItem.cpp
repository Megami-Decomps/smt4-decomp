#include "common.h"

extern "C" {

void asdMemFree(void *block);

void asdListBoxFreeItem(void *block)
{
    asdMemFree(block);
}

} /* extern "C" */
