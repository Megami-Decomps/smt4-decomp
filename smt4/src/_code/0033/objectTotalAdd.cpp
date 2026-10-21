#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x22A4];
    /* 0x22A4 */ int total;
} Obj;

void objectTotalAdd(Obj *obj, int amount)
{
    obj->total = amount + obj->total;
}

} /* extern "C" */
