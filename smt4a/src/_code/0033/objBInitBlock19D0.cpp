#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef DAT_00588fd0;
extern void FUN_0026fd50(u8 *block, u32 a, s32 b, u32 c);

void objBInitBlock19D0(u32 a, s32 copyPair, u32 c)
{
    ObjB *obj = DAT_00588fd0.instance;

    FUN_0026fd50(obj->block19D0, a, 0, c);
    if (copyPair != 0) {
        obj->unk19D8 = obj->unk19E0;
        obj->unk19DC = obj->unk19E4;
    }
}

} /* extern "C" */
