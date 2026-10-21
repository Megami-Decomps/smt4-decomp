#include "shard/Shard004F.h"

extern "C" {

extern void controllerApplyAtUnitScale(u32 handle, u8 *block, u32 value);

void obj4FStartSwitch(Obj4F *obj, u32 value)
{
    if (obj->unk658 != 0) {
        obj->unk6A4 = value;
        controllerApplyAtUnitScale(obj->unk658, obj->block660, value);
        obj->state = 3;
        obj->unk3C = 0;
    }
}

} /* extern "C" */
