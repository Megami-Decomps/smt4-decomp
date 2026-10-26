#include "common.h"
#include "code/Code0012_Smt4.h"

extern "C" {

typedef struct Obj48 {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ s16 unk48;
} Obj48;

u8 FUN_001247d0(Obj48 *obj)
{
    return obj->unk48 != 0;
}

} /* extern "C" */
