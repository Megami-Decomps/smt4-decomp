#include "common.h"
#include "code/Code002a_Smt4.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u16 unk4;
} Obj;

void FUN_002ae028(Obj *obj)
{
    obj->unk0 = 0;
    obj->unk4 = 0;
}

} /* extern "C" */
