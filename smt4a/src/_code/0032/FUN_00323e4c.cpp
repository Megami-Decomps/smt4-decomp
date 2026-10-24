#include "common.h"

struct Obj2c7c14 {
    u8 unk00[0x30];
    void *target;
};

extern "C" void FUN_00290c10(void *target);

/* Hands the object's target on to FUN_00290c10 when it has one. */
extern "C" void FUN_00323e4c(Obj2c7c14 *obj)
{
    if (obj->target != NULL) {
        FUN_00290c10(obj->target);
    }
}
