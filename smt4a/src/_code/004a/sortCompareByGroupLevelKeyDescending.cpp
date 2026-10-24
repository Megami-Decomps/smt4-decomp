#include "common.h"

struct Obj004a72e0 {
    u16 key;
    u8 unk02[0xa];
    u16 level;
    u8 unk0e[0x6];
    u16 group;
};

/* Descending comparison by group, then level, then key. */
extern "C" s32 sortCompareByGroupLevelKeyDescending(const Obj004a72e0 *a, const Obj004a72e0 *b)
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
