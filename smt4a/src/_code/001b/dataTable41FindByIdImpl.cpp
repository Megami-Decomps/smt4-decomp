#include "common.h"
#include "util/BinarySearch.h"

struct Table41Record {
    u8 unk00[0x20];
    u16 id;
    u8 unk22[0x26];
};
typedef char Table41RecordSizeCheck[sizeof(Table41Record) == 0x48 ? 1 : -1];

struct Table41Header {
    u32 count;
    const Table41Record *entries;
};

struct Table41Owner {
    u8 unk000[0x43C];
    Table41Header table;
};

extern "C" {
s32 FUN_001b9fc4(const void *lhs, const void *rhs);

/* Looks up a record by ID in table 41 via binary search, returning NULL if the table is empty. */
void *dataTable41FindByIdImpl(const Table41Owner *owner, u16 id)
{
    if (owner->table.count == 0) {
        return NULL;
    }
    Table41Record key;
    key.id = id;
    return libc_bsearch(&key, owner->table.entries, owner->table.count, sizeof(Table41Record), FUN_001b9fc4);
}
}
