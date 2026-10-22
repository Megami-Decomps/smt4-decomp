/* NON_MATCHING: register allocation (retail keeps the slot list in ip and the loop temporaries in r5) and the removed flag is materialized in a register. */
#include <algorithm>
#include "shard/S1GfxModel.h"

extern "C" {

/* An object holding the model slot it shows. */
typedef struct ModelSlotHolder {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ ModelSlot *slot;
} ModelSlotHolder;

ModelSlotList *asdModelGetSlotArray0(s32 slot);
void settings5BClearFlags(s32 flags);
extern s32 FUN_00359454(s32 mode);

/* Drops the holder's slot from the registered list of scene `mode`, clears that scene's flags and
 * then runs FUN_00359454. */
s32 FUN_00359370(ModelSlotHolder *holder, s32 mode)
{
    ModelSlotList *list = asdModelGetSlotArray0(mode);
    ModelSlot *slot = holder->slot;
    ModelSlot **newEnd = std::remove(list->slots.begin, list->slots.end, slot);
    ModelSlot **oldEnd = list->slots.end;
    bool removed = oldEnd != newEnd;

    list->slots.end = newEnd;
    if (removed) {
        slot->attached = 0;
    }
    if (mode == 0) {
        settings5BClearFlags(1);
    } else if (mode == 1) {
        settings5BClearFlags(2);
    }
    return FUN_00359454(mode);
}

} /* extern "C" */
