#include "common.h"

struct SortRecord {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s16 key;
};

/* Compares records referenced by the two sort elements. */
extern "C" int FUN_0047e678(const SortRecord *const *left,
                           const SortRecord *const *right)
{
    int leftKey = (*left)->key;
    int rightKey = (*right)->key;
    return rightKey - leftKey;
}
