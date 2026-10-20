#include "common.h"

extern "C" {

s32 gameFlagIsSet(u32 id);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x5A];
    /* 0x5A */ u16 ids[5];
} Holder;

/* Returns 1 when any of the five ids is nonzero and gameFlagIsSet accepts it. */
u32 idListAnyValid(Holder *object)
{
    u32 result;

    result = 0;
    if ((((((object->ids[0] != 0) && (gameFlagIsSet(object->ids[0]) != 0)) ||
           ((object->ids[1] != 0 && (gameFlagIsSet(object->ids[1]) != 0)))) ||
          ((object->ids[2] != 0 && (gameFlagIsSet(object->ids[2]) != 0)))) ||
         ((object->ids[3] != 0 && (gameFlagIsSet(object->ids[3]) != 0)))) ||
        ((object->ids[4] != 0 && (gameFlagIsSet(object->ids[4]) != 0)))) {
        result = 1;
    }
    return result;
}

} /* extern "C" */
