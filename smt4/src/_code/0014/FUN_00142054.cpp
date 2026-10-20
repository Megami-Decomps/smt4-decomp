/* Copies the 7 halfword fields of the record for the inner object's key into `out`; returns 1 if the record exists. */
#include "common.h"

extern "C" {

extern u16 *FUN_0014d360(u32);

struct Inner0014204c {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ u32 key;
};

u8 FUN_00142054(Inner0014204c *inner, u32 *out)
{
    u16 *src = FUN_0014d360(inner->key);

    if (src != NULL) {
        out[0] = src[0];
        out[1] = src[1];
        out[2] = src[2];
        out[3] = src[3];
        out[4] = src[4];
        out[5] = src[5];
        out[6] = src[6];
    }
    return src != NULL;
}

}
