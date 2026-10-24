#include "common.h"

struct Object004ffce8 {
    /* 0x00 */ u8 unk00[0x7c];
    /* 0x7c */ u8 member[4];
};

extern "C" {

/* Returns the address of the member at 0x7c. */
void *FUN_004ffce8(Object004ffce8 *object)
{
    return object->member;
}

} /* extern "C" */
