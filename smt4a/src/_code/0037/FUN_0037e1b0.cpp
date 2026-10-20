#include "shard/Shard0037.h"

extern "C" {

extern ObjBRef DAT_00588fd0;

/* Stores the value; a negative value also clears the companion byte at +0x1384, else sets it to `flag`. */
void FUN_0037e1b0(s32 value, u8 flag)
{
    ObjB *obj = DAT_00588fd0.instance;

    obj->unk137F = value;
    if (value < 0) {
        obj->unk1384 = 0;
    } else {
        obj->unk1384 = flag;
    }
}

} /* extern "C" */
