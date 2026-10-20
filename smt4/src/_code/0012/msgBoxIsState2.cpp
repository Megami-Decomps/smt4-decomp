#include "common.h"

extern "C" {

typedef struct Obj44 {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ s8 unk44;
} Obj44;

u8 msgBoxIsState2(Obj44 *obj)
{
    return obj->unk44 == 2;
}

} /* extern "C" */
