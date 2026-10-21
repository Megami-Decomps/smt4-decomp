#include "shard/W6_W6Match5_NamedLookup.h"

extern "C" {

extern s32 libc_strcmp(const char *left, const char *right);

/* Orders records by key, breaking ties by name. */
s32 keyedRecordCompareName(const NamedSortRecord *left, const NamedSortRecord *right)
{
    s32 difference = left->key - right->key;
    if (difference != 0) {
        return difference;
    }
    return libc_strcmp(left->name.text, right->name.text);
}

} /* extern "C" */
