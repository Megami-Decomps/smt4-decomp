#include "shard/Shard004D.h"

extern "C" {

typedef struct Rec4DAAF4 {
    /* 0x000 */ u8 unk000[0x16e];
    /* 0x16e */ u8 unk16E;
    /* 0x16f */ u8 unk16F[0x1];
    /* 0x170 */ u16 unk170;
    /* 0x172 */ u16 unk172;
} Rec4DAAF4;

void recSet16E(Rec4DAAF4 *obj, u8 a, u16 b, u16 c)
{
    obj->unk16E = a;
    obj->unk170 = b;
    obj->unk172 = c;
}

} /* extern "C" */
