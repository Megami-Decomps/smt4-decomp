#include "common.h"

struct Obj3acb78 {
    u16 key;
    u8 unk02[0xc];
    u16 group;
};

/* Compares two records by group, then by key. */
extern "C" s32 sortCompareByGroupThenKey(const Obj3acb78 *a, const Obj3acb78 *b)
{
    s32 result = a->group - b->group;
    if (result == 0) {
        result = a->key - b->key;
    }
    return result;
}
