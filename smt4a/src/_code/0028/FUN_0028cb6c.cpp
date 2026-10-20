#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 data[0x28];
} Entry;
extern Entry DAT_0057a6ec[];

s32 FUN_00213b5c(void);

/* Returns the address of entry `FUN_00213b5c()` (0x28 bytes each) of the table at 0x57A6EC. */
Entry *FUN_0028cb6c(void)
{
    s32 index;

    index = FUN_00213b5c();
    return &DAT_0057a6ec[index];
}

} /* extern "C" */
