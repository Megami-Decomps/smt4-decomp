#include "common.h"

extern "C" {

struct FloatKeyRecord {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ f32 key;
};

/* Compare float keys using their difference truncated toward zero. */
s32 recordCompareFloatKey(const FloatKeyRecord *left, const FloatKeyRecord *right)
{
    return (s32)(left->key - right->key);
}

}
