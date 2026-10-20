#include "common.h"

extern "C" {

void FUN_002efe80(u8 *member);

typedef struct Inner {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u8 member14[1];
} Inner;

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Inner *inner;
} Holder;

/* Calls FUN_002efe80 on the member at 0x14 of the inner object. */
void FUN_002efcb8(Holder *object)
{
    FUN_002efe80(object->inner->member14);
}

} /* extern "C" */
