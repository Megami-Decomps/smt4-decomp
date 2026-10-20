#include "common.h"

extern "C" {

/* Counter block: a signed use count at +1. */
typedef struct {
    u8 unk00;
    s8 count;           /* 0x01 */
} UseCounter;

extern UseCounter g_useCounter;

int FUN_00297410(int id);
int FUN_002b7bca(u32 first, u32 second, int size, u8 *table);
int asdTMTexTableLoadSprites(int id);
int FUN_002c58c8(int id, int arg);
u32 dataTableGetCount(u32 value);
u32 dataTableGetEntries(void);
u32 dataTableGet(u32 first, u32 second);

/* On the first use (count <= 0) sets up entry 0x1e/0x38 and submits the 0x72-byte table at 0x1f62dc; always bumps the count. */
void FUN_001ddb40(void)
{
    if (g_useCounter.count <= 0) {
        u32 first;
        u32 second;

        asdTMTexTableLoadSprites(0x1e);
        FUN_002c58c8(0x1e, 0);
        FUN_00297410(0x38);
        first = dataTableGet(0x38, 0);
        second = dataTableGetEntries();
        first = dataTableGetCount(first);
        FUN_002b7bca(second, first, 0x72, (u8 *)0x1f62dc);
    }
    g_useCounter.count = g_useCounter.count + 1;
}

} /* extern "C" */
