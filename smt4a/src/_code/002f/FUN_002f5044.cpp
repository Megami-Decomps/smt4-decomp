#include "common.h"

extern "C" {

void *FUN_002e4e92(u32 object, u8 *callback);
void FUN_002e6e14(void *memory);

typedef struct Holder {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 object;
} Holder;

/* Clears `first`; releases the held object (running FUN_002e4e92 with the callback at 0x10724F first) and clears it. */
void FUN_002f5044(Holder *holder)
{
    holder->first = 0;
    if (holder->object != 0) {
        FUN_002e6e14(FUN_002e4e92(holder->object, (u8 *)0x10724F));
        holder->object = 0;
    }
}

} /* extern "C" */
