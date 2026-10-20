#include "common.h"

extern "C" {

void FUN_002ef00c(u32 object, u8 *member);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u8 member40[1];
} Holder;

/* Calls FUN_002ef00c(object, member at 0x40 of `holder`). */
void FUN_002eb164(u32 object, Holder *holder)
{
    FUN_002ef00c(object, holder->member40);
}

} /* extern "C" */
