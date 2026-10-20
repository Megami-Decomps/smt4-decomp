#include "shard/Shard0033.h"

extern "C" {

extern ObjectE0 *DAT_0057f65c;

void objectE0ResetFlags1040(void)
{
    ObjectE0 *obj = DAT_0057f65c;

    obj->unk1040 = 1;
    obj->unk1043 = 0;
    obj->unk1044 = 0;
    obj->unk1045 = 0;
}

} /* extern "C" */
