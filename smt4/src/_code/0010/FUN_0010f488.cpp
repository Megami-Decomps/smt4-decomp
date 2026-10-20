#include "common.h"

extern "C" {

typedef struct Obj520 {
    /* 0x000 */ u8 unk000[0x520];
    /* 0x520 */ u32 unk520;
    /* 0x524 */ u32 unk524;
} Obj520;

void FUN_0010f488(Obj520 *obj)
{
    obj->unk520 = 0;
    obj->unk524 = 0;
}

} /* extern "C" */
