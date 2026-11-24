#include "AsdSDK/Source/Gfx/Model/AsdModelSlot.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

/* An object holding the model slot it shows. */
typedef struct ModelSlotHolder {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ s32 slot;
} ModelSlotHolder;

extern s32 FUN_00359454(s32 mode);

/* Drops the holder's slot from the registered list of scene `mode`, clears that scene's flags and
 * then runs FUN_00359454. */
s32 modelRemoveFromSlotList(ModelSlotHolder *holder, s32 mode)
{
    ModelSlotListA *list = (ModelSlotListA *)asdModelGetSlotArray0(mode);
    s32 slot = holder->slot;
    bool removed = asdModelSlotErase(&list->slots, slot);
    if (removed) {
        ((ModelSlot *)slot)->attached = 0;
    }
    if (mode == 0) {
        settings5BClearFlags(1);
    } else if (mode == 1) {
        settings5BClearFlags(2);
    }
    return FUN_00359454(mode);
}

} /* extern "C" */
