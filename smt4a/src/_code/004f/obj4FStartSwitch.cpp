#include "shard/Shard004F.h"
#include "gfx/CameraAnimationApply.h"

extern "C" {


void obj4FStartSwitch(Obj4F *obj, u32 value)
{
    if (obj->unk658 != 0) {
        obj->unk6A4 = value;
        controllerApplyAtUnitScale(reinterpret_cast<void *>(obj->unk658), obj->block660, value);
        obj->state = 3;
        obj->unk3C = 0;
    }
}

} /* extern "C" */
