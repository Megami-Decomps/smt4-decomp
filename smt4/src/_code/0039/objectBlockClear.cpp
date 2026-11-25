#include "common.h"
#include "runtime/String.h"

extern "C" {


typedef struct Obj {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u8 block[0x100];
} Obj;

void objectBlockClear(Obj *obj)
{
    rt_memclr(obj->block, 0x100);
}

} /* extern "C" */
