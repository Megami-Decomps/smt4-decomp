#include "shard/Shard0034.h"

extern "C" {

extern ObjBRef DAT_00588fd0;

void objBSetWordByIndex(s32 which, u32 value)
{
    if (which == 0) {
        DAT_00588fd0.instance->unk205C = value;
    } else if (which == 1) {
        DAT_00588fd0.instance->unk2060 = value;
    } else if (which == 2) {
        DAT_00588fd0.instance->unk2064 = value;
    }
}

} /* extern "C" */
