#include "common.h"

extern "C" u32 FUN_00125d90(u32 checksum, const void *data, u32 size);
extern "C" u32 FUN_00125a94(u32 checksum, const void *data, u32 size);

// Select the CRC implementation for the host byte order.
extern "C" u32 crc32Dispatch(u32 checksum, const void *data, u32 size)
{
    u32 byteOrder;
    if (data == NULL)
        return 0;
    byteOrder = 1;
    if (*(const u8 *)&byteOrder != 0)
        return FUN_00125d90(checksum, data, size);
    else
        return FUN_00125a94(checksum, data, size);
}
