#include "shard/Shard004F.h"

extern "C" {

extern void sysMemClear(u8 *ptr, u32 size);

void clearTwo200Buffers(u8 *buffer)
{
    sysMemClear(buffer, 200);
    sysMemClear(buffer + 200, 200);
}

} /* extern "C" */
