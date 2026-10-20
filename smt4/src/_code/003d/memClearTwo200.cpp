#include "common.h"

extern "C" {

int memClear(void *ptr, int size);

void memClearTwo200(u8 *buffer)
{
    memClear(buffer, 200);
    memClear(buffer + 200, 200);
}

} /* extern "C" */
