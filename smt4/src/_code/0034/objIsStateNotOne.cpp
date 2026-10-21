#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ int state;
} Obj;

u8 objIsStateNotOne(Obj *obj)
{
    if (obj->state == 1) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
