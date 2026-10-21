#include "shard/Shard004F.h"

extern "C" {

extern void asdLoadFileAsyncSimple(u32 value, u32 *slot, s32 flag);

void FUN_004f2abc(Obj4F *obj, u32 value)
{
    if (obj->unk65C == 0) {
        asdLoadFileAsyncSimple(value, &obj->unk65C, 1);
    }
}

} /* extern "C" */
