#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 value;
} Entry;

Entry *clearWords4(void);

/* Clears the value field of the entry clearWords4 returns. */
void FUN_001127d8(void)
{
    Entry *entry = clearWords4();
    entry->value = 0;
}

} /* extern "C" */
