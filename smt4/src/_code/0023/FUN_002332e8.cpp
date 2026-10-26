#include "common.h"
#include "code/Code0023_Smt4.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u32 unk44;
} Obj;

void FUN_002332e8(Obj *obj, u32 a, u32 b)
{
    obj->unk40 = a;
    obj->unk44 = b;
}

} /* extern "C" */
