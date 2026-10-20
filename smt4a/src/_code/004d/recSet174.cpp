#include "shard/Shard004D.h"

extern "C" {

typedef struct Rec4DB288 {
    /* 0x000 */ u8 unk000[0x174];
    /* 0x174 */ u8 unk174;
    /* 0x175 */ u8 unk175[0x1];
    /* 0x176 */ u16 unk176;
    /* 0x178 */ u16 unk178;
} Rec4DB288;

void recSet174(Rec4DB288 *obj, u8 a, u16 b, u16 c)
{
    obj->unk174 = a;
    obj->unk176 = b;
    obj->unk178 = c;
}

} /* extern "C" */
