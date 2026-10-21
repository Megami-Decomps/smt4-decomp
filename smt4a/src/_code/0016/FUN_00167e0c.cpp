/* NON_MATCHING: the clear value and loaded entry use r4/ip opposite to retail. */
#include "common.h"

extern "C" {

struct ResourceTable {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ void *entries[33];
    /* 0xEC */ s32 count;
    /* 0xF0 */ u32 unkF0;
    /* 0xF4 */ u32 flags;
};
void FUN_00167e0c(void *unused, ResourceTable *table)
{
    for (s32 index = 0; index < table->count; ++index) {
        if (table->entries[index] != NULL) {
            table->entries[index] = NULL;
        }
    }
    table->flags |= 0x400;
}

} /* extern "C" */
