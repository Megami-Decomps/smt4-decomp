#include "common.h"
#include "sys/RuntimeObjects_Smt4.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u16 unk18;
    /* 0x1A */ u16 unk1A;
} Obj;

void pairSetHalves(Obj *obj, u16 a, u16 b)
{
    obj->unk18 = a;
    obj->unk1A = b;
}

} /* extern "C" */
