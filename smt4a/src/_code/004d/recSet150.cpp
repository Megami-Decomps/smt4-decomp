#include "shard/Shard004D.h"

extern "C" {

typedef struct Rec4DA914 {
    /* 0x000 */ u8 unk000[0x150];
    /* 0x150 */ u8 unk150;
    /* 0x151 */ u8 unk151[0x3];
    /* 0x154 */ u32 unk154;
} Rec4DA914;

void recSet150(Rec4DA914 *obj, u8 a, u32 b)
{
    obj->unk150 = a;
    obj->unk154 = b;
}

} /* extern "C" */
