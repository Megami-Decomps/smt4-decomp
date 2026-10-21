#include "common.h"

struct NamedSortRecord {
    /* 0x00 */ char name[12];
    /* 0x0C */ s16 key;
};

extern "C" {

extern s32 libc_strcmp(const char *left, const char *right);

/* Orders records by key, breaking ties by name. */
s32 FUN_001e16cc(const NamedSortRecord *left, const NamedSortRecord *right)
{
    s32 difference = left->key - right->key;
    if (difference != 0) {
        return difference;
    }
    return libc_strcmp(left->name, right->name);
}

} /* extern "C" */
