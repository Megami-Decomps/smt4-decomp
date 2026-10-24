#include "common.h"

struct Obj003aca7c {
    u16 key;
    u8 unk02[0xa];
    u8 level;
    u8 unk0d[0x1];
    u16 group;
};

/* Descending comparison by group, then level, then key. */
extern "C" s32 sortCompareByGroupLevelKeyDescending(const Obj003aca7c *a, const Obj003aca7c *b)
{
    s32 result = b->group - a->group;
    if (result == 0) {
        result = b->level - a->level;
    }
    if (result == 0) {
        result = b->key - a->key;
    }
    return result;
}
