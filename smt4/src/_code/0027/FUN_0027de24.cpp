/* NON_MATCHING: loop counter and slot pointer swap callee-saved registers (r4/r5); otherwise identical. */
#include "common.h"

extern "C" {

/* A polymorphic object owned by a slot; destroyed through its deleting destructor. */
class SlotObject {
public:
    virtual ~SlotObject();
};

/* A model handle: its resource (at +8) records a signed state at +0xC. */
struct ModelResource {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 state;
};
struct ModelHandle {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ModelResource *resource;
};

/* The manager viewed from slot i: the slot's fields sit at 0x960 + 0x10 * i. */
struct ModelSlotManager {
    /* 0x000 */ u8 unk000[0x960];
    /* 0x960 */ ModelHandle *model;
    /* 0x964 */ u32 unk964;
    /* 0x968 */ SlotObject *object;
    /* 0x96C */ u32 unk96C;
};

void asdMdlManagerMarkDestroy(ModelHandle *model);
void asdMdlManagerDestroy(ModelHandle *model);

/* Releases every slot's object and model and clears the slot. */
void FUN_0027de24(ModelSlotManager *manager)
{
    for (u32 i = 0; i < 109; i++) {
        ModelSlotManager *slot = (ModelSlotManager *)((u8 *)manager + i * 0x10);
        if (slot->object != NULL) {
            delete slot->object;
            slot->object = NULL;
        }
        if (slot->model != NULL) {
            if (slot->model->resource->state >= 0) {
                asdMdlManagerMarkDestroy(slot->model);
            }
            asdMdlManagerDestroy(slot->model);
            slot->model = NULL;
        }
        slot->unk96C = 0;
    }
}

} /* extern "C" */
