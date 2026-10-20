#include "shard/Shard004D.h"

extern "C" {

typedef struct Rec4DA900 {
    /* 0x000 */ u8 unk000[0x148];
    /* 0x148 */ u8 unk148;
    /* 0x149 */ u8 unk149[0x1];
    /* 0x14a */ u16 unk14A;
} Rec4DA900;

void recSet148(Rec4DA900 *obj, u8 a, u16 b)
{
    obj->unk148 = a;
    obj->unk14A = b;
}

} /* extern "C" */
