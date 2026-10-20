#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 value;
} Entry;

Entry *FUN_002f8236(void);

/* Clears the value field of the entry FUN_002f8236 returns. */
void FUN_001127d8(void)
{
    Entry *entry = FUN_002f8236();
    entry->value = 0;
}

} /* extern "C" */
