#include "common.h"

extern "C" {

int FUN_002b8cc8(void);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x5A];
    /* 0x5A */ s16 count;
} Obj;

/* Runs FUN_002b8cc8 once per counted item, then clears the count. */
void FUN_00233854(Obj *obj)
{
    s32 i = 0;

    if (i < obj->count) {
        do {
            FUN_002b8cc8();
            i++;
        } while (i < obj->count);
    }
    obj->count = 0;
}

} /* extern "C" */
