#include "common.h"

extern "C" {
void asdMemFree(void *memory);

/* Releases a list-box item allocation. */
void asdListBoxFreeItem(void *item)
{
    asdMemFree(item);
}
}
