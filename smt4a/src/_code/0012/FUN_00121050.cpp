#include "common.h"

extern "C" {

void FUN_002eb87c(u8 *member);

typedef struct Inner {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 member10[1];
} Inner;

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Inner *inner;
} Holder;

/* Calls FUN_002eb87c on the member at 0x10 of the inner object. */
void FUN_00121050(Holder *object)
{
    FUN_002eb87c(object->inner->member10);
}

} /* extern "C" */
