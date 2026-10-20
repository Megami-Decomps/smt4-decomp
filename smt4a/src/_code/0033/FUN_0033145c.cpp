#include "common.h"

extern "C" {

/* Object with a halfword table at 0xd4. */
typedef struct {
    u8 unk00[0xd4];
    u16 table[1];       /* 0xd4 */
} Lookup;

u32 scrGetArg(int index);
Lookup *FUN_001ad9b4(u16 key);
int scrSetResult(u32 value);

/* Looks up entry (index 1) in the table of the object selected by entry 0; always reports success. */
u32 FUN_0033145c(void)
{
    u16 key = scrGetArg(0);
    int index = scrGetArg(1);
    Lookup *lookup = FUN_001ad9b4(key);

    scrSetResult(lookup->table[index]);
    return 1;
}

} /* extern "C" */
