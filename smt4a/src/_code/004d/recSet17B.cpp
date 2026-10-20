#include "shard/Shard004D.h"

extern "C" {

typedef struct Rec4DBDE8 {
    /* 0x000 */ u8 unk000[0x17b];
    /* 0x17b */ u8 unk17B;
    /* 0x17c */ u16 unk17C;
} Rec4DBDE8;

void recSet17B(Rec4DBDE8 *obj, u8 a, u16 b)
{
    obj->unk17B = a;
    obj->unk17C = b;
}

} /* extern "C" */
