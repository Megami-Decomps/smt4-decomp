#include "classes/Obj55a178.h"

/* Both connected states permit this operation. */
extern "C" s32 FUN_0010edbc(const Obj55a178StateView *object)
{
    switch (object->state) {
    case 4:
    case 8:
        return 1;
    default:
        return 0;
    }
}
