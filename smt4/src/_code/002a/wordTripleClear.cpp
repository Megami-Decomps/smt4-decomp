#include "common.h"
#include "code/Code002a_Smt4.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u16 unk8;
} Obj;

void wordTripleClear(Obj *obj)
{
    obj->unk0 = 0;
    obj->unk4 = 0;
    obj->unk8 = 0;
}

} /* extern "C" */
