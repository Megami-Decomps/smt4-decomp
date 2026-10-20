#include "common.h"

extern "C" {

u32 dataTableGetCount(u32 value);
u32 dataTableGetEntries(void);
u32 dataTableGet(u32 first, u32 second);
u8 *FUN_002b46f8(u8 *args, u32 first, u32 second, int size, u8 *table);

/* Submits a 96-byte argument block (`value` in byte 0) with the data at 0x32c6c8; a non-null result is advanced by 3. */
u8 *FUN_002e38c0(u8 value, int alternate)
{
    u32 first;
    u32 second;
    u8 args[96];
    u8 *result;

    if (alternate != 0) {
        first = dataTableGet(0x16, 0);
    } else {
        first = dataTableGet(0x16, 1);
    }
    second = dataTableGetEntries();
    first = dataTableGetCount(first);
    args[0] = value;
    result = FUN_002b46f8(args, second, first, 0x60, (u8 *)0x32c6c8);
    if (result != NULL) {
        result += 3;
    }
    return result;
}

} /* extern "C" */
