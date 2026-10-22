#include "common.h"

struct PairEqualityState {
    /* 0x00 */ void *vtable;
    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
};

/* Compare the two stored values, ignoring the virtual table. */
extern "C" s32 _ZNK9Obj4225406equalsEPK20SelectionValueRecord(const PairEqualityState *left, const PairEqualityState *right)
{
    return right->first == left->first && right->second == left->second;
}
