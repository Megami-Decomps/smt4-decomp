/* Passes the object's field at +0x20 and the argument on to FUN_001ba5bc when `flag` is set (a tail call); otherwise returns the argument. */
#include "common.h"

extern "C" {

struct Obj001b36b8 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ void *target;
};

u32 FUN_001ba5bc(void *target, u32 arg, u32 mode);

u32 FUN_001b36b8(Obj001b36b8 *obj, u32 arg, u32 flag)
{
    u32 result = arg;

    if (flag != 0) {
        result = FUN_001ba5bc(obj->target, arg, 1);
    }
    return result;
}

}
