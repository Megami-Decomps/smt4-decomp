#include "common.h"

extern "C" {

void FUN_002eb87c(u8 *member);

typedef struct Inner {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u8 member80[1];
} Inner;

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ Inner *inner;
} Holder;

/* Calls FUN_002eb87c on the member at 0x80 of the inner object. */
void FUN_001212c6(Holder *object)
{
    FUN_002eb87c(object->inner->member80);
}

} /* extern "C" */
