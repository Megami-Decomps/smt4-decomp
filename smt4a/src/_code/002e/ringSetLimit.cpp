/* Moves the read position (+0x10) by the change of the limit (+0x18) to `limit`. */
#include "common.h"

extern "C" {

struct Obj002ed294 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 position;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s32 limit;
};

void ringSetLimit(Obj002ed294 *o, s32 limit)
{
    s32 delta = o->limit - limit;

    o->position += delta;
    o->limit = limit;
}

}
