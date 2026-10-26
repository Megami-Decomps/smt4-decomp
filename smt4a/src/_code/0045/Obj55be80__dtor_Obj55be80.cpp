/* NON_MATCHING: Resource-owner reset is complete; base-vptr restoration and the parallel-array clear loop use a different register/prologue layout. */
#include "common.h"

struct ResourcePair {
    void *first;
    void *second;
};
struct ResettableResourceOwner {
    /* 0x000 */ const void *vtable;
    /* 0x004 */ u8 unk004[0x2c];
    /* 0x030 */ void *resource;
    /* 0x034 */ u8 unk034[0x10];
    /* 0x044 */ void *first[4];
    /* 0x054 */ void *second[4];
    /* 0x064 */ ResourcePair pairs[4];
    /* 0x084 */ void *last[4];
    /* 0x094 */ u8 unk094[0x79];
    /* 0x10D */ u8 count;
    /* 0x10E */ u8 active;
};
extern "C" const u32 DAT_0055be88[];

/* Restore the owner's base table and clear its active resource references. */
extern "C" ResettableResourceOwner *FUN_0045f1f0(ResettableResourceOwner *owner)
{
    owner->vtable = DAT_0055be88;
    if (owner->active != 0) {
        owner->active = 0;
        for (s32 i = 0; i < owner->count; ++i) {
            owner->first[i] = NULL;
            owner->second[i] = NULL;
            owner->pairs[i].first = NULL;
            owner->pairs[i].second = NULL;
            owner->last[i] = NULL;
        }
    }
    if (owner->resource != NULL) {
        owner->resource = NULL;
    }
    return owner;
}
