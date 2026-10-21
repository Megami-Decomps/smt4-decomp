#include "common.h"

extern "C" {

int gfxObjectDestroy(u32 value);
int FUN_0029c2cc(int value, int flag);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x730];
    /* 0x730 */ int value;
    /* 0x734 */ u32 unk734;
} Obj;

void objectDestroyGfx(Obj *obj)
{
    if (obj->value != 0) {
        FUN_0029c2cc(obj->value, 0);
        gfxObjectDestroy(obj->value);
        obj->value = 0;
        obj->unk734 = 0;
    }
}

} /* extern "C" */
