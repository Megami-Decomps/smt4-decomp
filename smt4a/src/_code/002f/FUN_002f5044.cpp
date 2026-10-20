#include "common.h"

extern "C" {

void *rt_vec_delete(u32 object, u8 *callback);
void asdOperatorDeleteArray(void *memory);

typedef struct Holder {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 object;
} Holder;

/* Clears `first`; releases the held object (running rt_vec_delete with the callback at 0x10724F first) and clears it. */
void FUN_002f5044(Holder *holder)
{
    holder->first = 0;
    if (holder->object != 0) {
        asdOperatorDeleteArray(rt_vec_delete(holder->object, (u8 *)0x10724F));
        holder->object = 0;
    }
}

} /* extern "C" */
