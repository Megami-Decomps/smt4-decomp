#include "common.h"

extern "C" {

void FUN_002ea928(u8 *member);

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 member08[1];
} Holder;

/* Calls FUN_002ea928 on the member at 8. */
void FUN_002eacbc(Holder *object)
{
    FUN_002ea928(object->member08);
}

} /* extern "C" */
