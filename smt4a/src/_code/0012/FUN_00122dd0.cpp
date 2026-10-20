#include "common.h"

extern "C" {

void FUN_0010b47c(u32 value, s32 flag);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 value;
} Holder;

/* Calls FUN_0010b47c with the word at 0x0C and 1. */
void FUN_00122dd0(Holder *object)
{
    FUN_0010b47c(object->value, 1);
}

} /* extern "C" */
