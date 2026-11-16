#include "common.h"
#include "code/Code003b_Smt4.h"

extern "C" {

int ARM_common_memcpy4_6(int block);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 flags;
} Obj;

/* Runs ARM_common_memcpy4_6 on the block at +0x42 and sets flag 0x10. */
void FUN_003ba734(Obj *obj)
{
    ARM_common_memcpy4_6((int)obj + 0x42);
    obj->flags = obj->flags | 0x10;
}

} /* extern "C" */
