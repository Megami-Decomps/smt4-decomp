#include "common.h"

extern "C" {

struct SortRecord {
    /* 0x00 */ s32 value;
    /* 0x04 */ s32 primary;
    /* 0x08 */ u16 secondary;
};
s32 FUN_0019d4a4(const SortRecord *left, const SortRecord *right)
{
    s32 difference = left->primary - right->primary;
    if (difference == 0) {
        difference = left->secondary - right->secondary;
        if (difference == 0) {
            difference = left->value - right->value;
        }
    }
    return difference;
}

} /* extern "C" */
