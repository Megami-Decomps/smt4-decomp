#include "common.h"

struct NamedTableEntry {
    u8 unk00[0x20];
    char name[0x4c]; // 0x20
};

extern "C" {
NamedTableEntry *dataTable8FindRecord(u16);
s32 libc_strcmp(const char *, const char *);
u32 FUN_00335660(u32, const char *, s32);

// Resolve a table entry by its name, excluding the string used for no entry.
u32 FUN_0037eecc(u32 selection, u16 id, s32 alternate)
{
    NamedTableEntry *entry = dataTable8FindRecord(id);
    if (entry == NULL) {
        return 0;
    }
    if (libc_strcmp(entry->name, "0") == 0) {
        return 0;
    }
    return FUN_00335660(selection, entry->name, alternate);
}
}
