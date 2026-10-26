#include "common.h"
#include "code/Code002c_Smt4.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x90];
    /* 0x90 */ u32 flags;
} Obj;

/* Flag bit 1 of the object's flags (0 for a NULL object). */
u32 FUN_002c1850(Obj *obj)
{
    u32 flag = 0;

    if (obj != NULL) {
        flag = (obj->flags & 2) >> 1;
    }
    return flag;
}

} /* extern "C" */
