#include "common.h"
#include "code/Code0023_Smt4.h"

extern "C" {

int ifTouchRegionRemove(void);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ s16 count;
} Obj;

/* Runs ifTouchRegionRemove once per counted item, then clears the count. */
void FUN_00233818(Obj *obj)
{
    s32 i = 0;

    if (i < obj->count) {
        do {
            ifTouchRegionRemove();
            i++;
        } while (i < obj->count);
    }
    obj->count = 0;
}

} /* extern "C" */
