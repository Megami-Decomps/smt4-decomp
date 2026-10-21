#include "common.h"

extern "C" {

void strHolderAssignBuffer(u32 dest, u32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 value;
} Holder;

/* Passes the word at 8 of `holder` to strHolderAssignBuffer together with `dest`. */
void strHolderAssignHolderValue(u32 dest, Holder *holder)
{
    strHolderAssignBuffer(dest, holder->value);
}

} /* extern "C" */
