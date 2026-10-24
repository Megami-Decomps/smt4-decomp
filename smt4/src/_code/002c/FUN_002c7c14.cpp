#include "common.h"

struct Obj2c7c14 {
    u8 unk00[0x30];
    void *target;
};

extern "C" void FUN_001e19c4(void *target);

/* Hands the object's target on to FUN_001e19c4 when it has one. */
extern "C" void FUN_002c7c14(Obj2c7c14 *obj)
{
    if (obj->target != NULL) {
        FUN_001e19c4(obj->target);
    }
}
