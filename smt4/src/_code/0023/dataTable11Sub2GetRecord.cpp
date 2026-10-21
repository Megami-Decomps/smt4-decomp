/* Finds a 12-byte table record by its leading 16-bit identifier. */
#include "common.h"

extern "C" {

s32 libc_bsearch(u16 *key, u32 entries, u32 count, s32 size, s32 (*compare)(const void *, const void *));
u32 dataTableGetCount(u32 id);
u32 dataTableGetEntries(void);
u32 dataTableGet(u32 category, u32 variant);
s32 dataTable11Sub2CompareIds(const void *, const void *);

void dataTable11Sub2GetRecord(u16 character)
{
    u32 id;
    u32 arg1;
    u32 arg2;
    u16 buffer[6];

    if (character == 0) return;
    id = dataTableGet(0x11, 2);
    arg1 = dataTableGetEntries();
    arg2 = dataTableGetCount(id);
    buffer[0] = character;
    libc_bsearch(buffer, arg1, arg2, 12, dataTable11Sub2CompareIds);
}

} /* extern "C" */
