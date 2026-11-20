#include "common.h"
#include "util/BinarySearch.h"

struct AocIndexedRecord {
    u16 id;
    u8 payload[0x1E];
};
typedef char AocIndexedRecordSizeCheck[sizeof(AocIndexedRecord) == 0x20 ? 1 : -1];

struct AocIndexedTableHeader {
    u32 count;
    const AocIndexedRecord *entries;
};

struct AocIndexedTableOwner {
    u8 unk000[0x42C];
    AocIndexedTableHeader table;
};

extern "C" {
s32 FUN_00191f58(const void *lhs, const void *rhs);

/* Looks up an AOC indexed record by ID via binary search and returns a pointer to its payload, or NULL. */
void *aocIndexedTableFindImpl(const AocIndexedTableOwner *owner, u16 id)
{
    if (owner->table.count == 0) {
        return NULL;
    }
    AocIndexedRecord key;
    key.id = id;
    AocIndexedRecord *found = (AocIndexedRecord *)libc_bsearch(
        &key, owner->table.entries, owner->table.count, sizeof(AocIndexedRecord), FUN_00191f58);
    if (found != NULL) {
        return found->payload;
    }
    return NULL;
}
}
