#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x118];
    /* 0x118 */ u8 unk118;
    /* 0x119 */ u8 unk119;
    /* 0x11A */ u16 unk11A;
    /* 0x11C */ u8 unk11C;
    /* 0x11D */ u8 unk11D;
    /* 0x11E */ u16 unk11E;
    /* 0x120 */ u8 unk120;
    /* 0x121 */ u8 unk121;
    /* 0x122 */ u8 unk122[1];
    /* 0x123 */ u8 unk123[3];
    /* 0x126 */ u8 unk126[1];
    /* 0x127 */ u8 unk127[3];
    /* 0x12A */ u8 unk12A[1];
    /* 0x12B */ u8 unk12B[3];
    /* 0x12E */ u8 unk12E[1];
    /* 0x12F */ u8 unk12F[3];
    /* 0x132 */ u8 unk132;
    /* 0x133 */ u8 unk133;
    /* 0x134 */ u16 unk134;
    /* 0x136 */ u8 unk136;
    /* 0x137 */ u8 unk137;
    /* 0x138 */ s16 unk138;
    /* 0x13A */ s16 unk13A;
    /* 0x13C */ u8 unk13C[7];
    /* 0x143 */ u8 unk143;
    /* 0x144 */ u8 unk144[0x38];
    /* 0x17C */ u8 unk17C;
} Obj;

void FUN_003c8f58(Obj *obj)
{
    obj->unk11C = 0;
    obj->unk11E = 0;
    obj->unk118 = 0;
    obj->unk11A = 0;
    obj->unk143 = 0;
    obj->unk120 = 0;
    obj->unk121 = 0;
    *(u32 *)obj->unk122 = 0;
    *(u32 *)obj->unk126 = 0;
    *(u32 *)obj->unk12A = 0;
    *(u32 *)obj->unk12E = 0;
    obj->unk132 = 0;
    obj->unk134 = obj->unk134 & 0x3ff;
    obj->unk136 = 0;
    obj->unk138 = -1;
    obj->unk13A = -1;
    obj->unk17C = 0;
}

} /* extern "C" */
