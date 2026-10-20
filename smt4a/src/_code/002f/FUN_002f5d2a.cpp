#include "common.h"

extern "C" {

void FUN_002f5fb0(u8 *member, u32 source, u32 length, u32 flags);

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 member08[1];
} Holder;

/* Calls FUN_002f5fb0 on the member at 8 with `source`, `length` and -1. */
void FUN_002f5d2a(Holder *object, u32 source, u32 length)
{
    FUN_002f5fb0(object->member08, source, length, 0xFFFFFFFF);
}

} /* extern "C" */
