#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u16 a;
    /* 0x02 */ u16 b;
    /* 0x04 */ u16 c;
    /* 0x06 */ u16 d;
} Entry;

Entry *FUN_002613f0(s32 index);

/* Clears the 0x18 four-halfword entries. */
void FUN_002a2cbc(void)
{
    Entry *entry;
    s32 i;

    i = 0;
    do {
        entry = FUN_002613f0(i);
        entry->a = 0;
        entry->b = 0;
        i = i + 1;
        entry->c = 0;
        entry->d = 0;
    } while (i < 0x18);
}

} /* extern "C" */
