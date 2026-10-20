#include "shard/Shard0031.h"

extern "C" {

extern ObjectE0 *DAT_0057f65c;

void objectE0Reset(u32 value)
{
    ObjectE0 *obj = DAT_0057f65c;

    obj->unk144E = 1;
    obj->unk1450 = 0;
    obj->unk1451 = 0;
    obj->unk1452 = 0;
    obj->unk1484 = 0;
    obj->unk1488 = value;
}

} /* extern "C" */
