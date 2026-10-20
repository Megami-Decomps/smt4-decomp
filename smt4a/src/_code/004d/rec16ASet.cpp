#include "shard/Shard004D.h"

extern "C" {

typedef struct Rec16A {
    /* 0x000 */ u8 unk000[0x16A];
    /* 0x16A */ u8 unk16A;
    /* 0x16B */ u8 unk16B;
    /* 0x16C */ u16 unk16C;
} Rec16A;

void rec16ASet(Rec16A *obj, u8 value, u16 *extra)
{
    obj->unk16A = value;
    if (extra != NULL) {
        obj->unk16C = *extra;
    }
}

} /* extern "C" */
