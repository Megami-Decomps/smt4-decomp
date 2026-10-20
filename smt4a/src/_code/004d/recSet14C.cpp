#include "shard/Shard004D.h"

extern "C" {

typedef struct Rec4DB034 {
    /* 0x000 */ u8 unk000[0x14c];
    /* 0x14c */ u8 unk14C;
    /* 0x14d */ u8 unk14D[0x1];
    /* 0x14e */ u16 unk14E;
} Rec4DB034;

void recSet14C(Rec4DB034 *obj, u8 a, u16 b)
{
    obj->unk14C = a;
    obj->unk14E = b;
}

} /* extern "C" */
