#include "common.h"
#include "code/Code0023_Smt4.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ u8 valid;
    /* 0x13 */ u8 unk13;
    /* 0x14 */ s16 value;
} Obj;

/* The value, or -1 when the object isn't valid. */
int FUN_002333f0(Obj *obj)
{
    int result;

    if (obj->valid != 0) {
        result = obj->value;
    } else {
        result = -1;
    }
    return result;
}

} /* extern "C" */
