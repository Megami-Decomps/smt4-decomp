#include "common.h"
struct ValueSlot { u32 value; u8 active; u8 unk05[3]; };
struct ModelRecord { u8 flags; u8 unk001[631]; };
struct ModelOwner { u8 unk00[16]; ModelRecord *models; u8 unk14[244]; ValueSlot *slots; };
static void modelMarkActive(ModelRecord *models, u16 index)
{
    ModelRecord *model = &models[index];

    model->flags |= 1;
}

/* Updates the value slot and marks both it and its model active. */
extern "C" void FUN_00406768(ModelOwner *owner, u32 index, u32 value)
{
    ValueSlot *slot = &owner->slots[index];

    slot->value = value;
    slot->active = 1;
    modelMarkActive(owner->models, index);
}
