#include "common.h"

extern "C" {

void listHolderBack(u8 *member);

typedef struct Inner {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ u8 member2C[1];
} Inner;

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ Inner *inner;
} Holder;

/* Calls listHolderBack on the member at 0x2C of the inner object. */
void FUN_00122486(Holder *object)
{
    listHolderBack(object->inner->member2C);
}

} /* extern "C" */
