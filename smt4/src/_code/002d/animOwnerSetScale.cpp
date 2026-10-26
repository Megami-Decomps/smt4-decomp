/* Applies `scale` to the owner's model: FUN_0029bb14, nodeSetPropertyScale, then modelSetFirstScalarChannelValue
 * (placed right after, so the last call is a linker NOP). */
#include "common.h"
#include "code/Code002d_Smt4.h"

struct ModelOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *model;
};

extern "C" {
void FUN_0029bb14(void *model, f32 scale);
void nodeSetPropertyScale(void *model, f32 scale);
void modelSetFirstScalarChannelValue(void *model, f32 scale);

void animOwnerSetScale(ModelOwner *owner, f32 scale)
{
    FUN_0029bb14(owner->model, scale);
    nodeSetPropertyScale(owner->model, scale);
    modelSetFirstScalarChannelValue(owner->model, scale);
}
}
