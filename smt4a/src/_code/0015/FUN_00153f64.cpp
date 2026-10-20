#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 value;
} Entry;

Entry *FUN_001861c4(void);

/* Returns the word at 0x8 of the entry FUN_001861c4 returns. */
u32 FUN_00153f64(void)
{
    Entry *entry = FUN_001861c4();
    return entry->value;
}

} /* extern "C" */
