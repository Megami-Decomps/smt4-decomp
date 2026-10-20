#include "common.h"

extern "C" {

u32 dataTableGetCount(u32 value);
u32 dataTableGetEntries(void);
u32 dataTableGet(u32 first, u32 second);
int FUN_00100854(u8 *args, u32 first, u32 second, int count, u8 *table);

/* Packs `value` into a 12-byte argument block and submits it with the data at 0x34f45c. */
void FUN_003f39ac(u8 value)
{
    u32 first;
    u32 second;
    u8 args[12];

    first = dataTableGet(0x14, 0);
    second = dataTableGetEntries();
    first = dataTableGetCount(first);
    args[0] = value;
    FUN_00100854(args, second, first, 6, (u8 *)0x34f45c);
}

} /* extern "C" */
