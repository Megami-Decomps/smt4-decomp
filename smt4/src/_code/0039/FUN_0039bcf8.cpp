#include "common.h"

extern "C" {

int rt_memclr(void *block, int size);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u8 block[0x100];
} Obj;

void FUN_0039bcf8(Obj *obj)
{
    rt_memclr(obj->block, 0x100);
}

} /* extern "C" */
