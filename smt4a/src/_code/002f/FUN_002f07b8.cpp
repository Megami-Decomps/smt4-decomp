#include "common.h"

extern "C" {

void FUN_002ef00c(u32 object, u8 *member);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u8 member48[1];
} Holder;

/* Calls FUN_002ef00c(object, member at 0x48 of `holder`). */
void FUN_002f07b8(u32 object, Holder *holder)
{
    FUN_002ef00c(object, holder->member48);
}

} /* extern "C" */
