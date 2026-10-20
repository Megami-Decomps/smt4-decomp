#include "shard/Shard0048.h"

extern "C" {

typedef struct Params95 {
    /* 0x00 */ u8 unk00[0x95];
    /* 0x95 */ u8 unk95;
    /* 0x96 */ u8 unk96[2];
    /* 0x98 */ u32 unk98;
    /* 0x9C */ u32 unk9C;
    /* 0xA0 */ u32 unkA0;
    /* 0xA4 */ u32 unkA4;
    /* 0xA8 */ u32 unkA8;
    /* 0xAC */ u32 unkAC;
} Params95;

void params95Set(Params95 *obj, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f)
{
    obj->unk98 = a;
    obj->unk95 = 1;
    obj->unk9C = b;
    obj->unkA0 = c;
    obj->unkA4 = d;
    obj->unkA8 = e;
    obj->unkAC = f;
}

} /* extern "C" */
