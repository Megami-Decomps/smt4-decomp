#include "common.h"

extern "C" {

s32 FUN_0018719c(u32 id);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x5A];
    /* 0x5A */ u16 ids[5];
} Holder;

/* Returns 1 when any of the five ids is nonzero and FUN_0018719c accepts it. */
u32 FUN_0021a410(Holder *object)
{
    u32 result;

    result = 0;
    if ((((((object->ids[0] != 0) && (FUN_0018719c(object->ids[0]) != 0)) ||
           ((object->ids[1] != 0 && (FUN_0018719c(object->ids[1]) != 0)))) ||
          ((object->ids[2] != 0 && (FUN_0018719c(object->ids[2]) != 0)))) ||
         ((object->ids[3] != 0 && (FUN_0018719c(object->ids[3]) != 0)))) ||
        ((object->ids[4] != 0 && (FUN_0018719c(object->ids[4]) != 0)))) {
        result = 1;
    }
    return result;
}

} /* extern "C" */
