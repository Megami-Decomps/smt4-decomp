#include "common.h"

extern "C" {

extern int gameFlagIsSet(void);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x5A];
    /* 0x5A */ s16 ids[5];
} Obj;

/* 1 when any of the five ids is set and gameFlagIsSet reports nonzero. */
u32 idListAnyValid(Obj *obj)
{
    u32 found = 0;

    if ((obj->ids[0] != 0 && gameFlagIsSet() != 0) ||
        (obj->ids[1] != 0 && gameFlagIsSet() != 0) ||
        (obj->ids[2] != 0 && gameFlagIsSet() != 0) ||
        (obj->ids[3] != 0 && gameFlagIsSet() != 0) ||
        (obj->ids[4] != 0 && gameFlagIsSet() != 0)) {
        found = 1;
    }
    return found;
}

} /* extern "C" */
