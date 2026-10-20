#include "common.h"

extern "C" {

int FUN_002b4e74(void *obj);

typedef struct Holder {
    /* 0x000 */ u8 unk000[0xB4];
    /* 0x0B4 */ u8 sub[0xD9];
    /* 0x18D */ u8 active;
} Holder;

void FUN_00121970(Holder *holder)
{
    FUN_002b4e74(holder);
    FUN_002b4e74(holder->sub);
    holder->active = 0;
}

} /* extern "C" */
