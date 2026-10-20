#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 value;
} Entry;

Entry *FUN_002ea4bc(void);

/* Returns the word at 0x10 of the entry FUN_002ea4bc returns. */
u32 FUN_002e9af4(void)
{
    Entry *entry = FUN_002ea4bc();
    return entry->value;
}

} /* extern "C" */
