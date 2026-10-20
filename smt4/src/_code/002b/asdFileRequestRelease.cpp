#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ int count;
} Obj;

void asdFileRequestRelease(Obj *obj)
{
    obj->count = obj->count + 1;
}

} /* extern "C" */
