#include "common.h"

extern "C" {

int FUN_00297468(u32 a, void *slot, int b);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x730];
    /* 0x730 */ int value;
    /* 0x734 */ u8 slot[1];
} Obj;

void FUN_003d6fd4(Obj *obj, u32 a)
{
    if (obj->value == 0) {
        FUN_00297468(a, obj->slot, 0);
        return;
    }
}

} /* extern "C" */
