#include "common.h"

extern "C" {

void FUN_0010ab0c(u32 dest, void *entry, s32 value);

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 value;
} Entry;

/* Calls FUN_0010ab0c with the entry and its 16-bit value at 0x20. */
void FUN_0010aaf0(u32 dest, Entry *entry)
{
    FUN_0010ab0c(dest, entry, entry->value);
}

} /* extern "C" */
