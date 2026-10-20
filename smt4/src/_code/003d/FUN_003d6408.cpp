#include "common.h"

extern "C" {

int modelSlotAttachChild(int value, int flag);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x730];
    /* 0x730 */ int value;
} Obj;

void FUN_003d6408(Obj *obj)
{
    if (obj->value != 0) {
        modelSlotAttachChild(obj->value, 0);
        return;
    }
}

} /* extern "C" */
