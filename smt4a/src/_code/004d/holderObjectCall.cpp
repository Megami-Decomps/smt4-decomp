/* Passes the object's field at +4 on (a tail call), or returns 1 if there is no object. */
#include "common.h"

extern "C" {

struct Obj004d8530 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *field4;
};

u32 FUN_004ffa14(void *arg);

u32 holderObjectCall(Obj004d8530 **holder)
{
    Obj004d8530 *obj = *holder;

    if (obj == NULL) {
        return 1;
    }
    return FUN_004ffa14(obj->field4);
}

}
