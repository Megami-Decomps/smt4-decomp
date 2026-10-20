#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 value;
} Entry;

Entry *FUN_002ecf28(void);

/* Returns the field at 0x0C of the entry FUN_002ecf28 returns. */
u32 FUN_00123a44(void)
{
    Entry *entry = FUN_002ecf28();
    return entry->value;
}

} /* extern "C" */
