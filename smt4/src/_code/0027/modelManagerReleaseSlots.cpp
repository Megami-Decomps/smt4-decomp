#include "common.h"
#include <stddef.h>

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

struct ModelSlot {
    /* 0x00 */ ModelHandle *model;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ SlotObject *object;
    /* 0x0C */ u32 state;
};

struct ModelSlotManager {
    /* 0x000 */ u8 unk000[0x960];
    /* 0x960 */ ModelSlot slots[109];
};

typedef char ModelSlotLayoutCheck[sizeof(ModelSlot) == 0x10 &&
    offsetof(ModelSlotManager, slots) == 0x960 ? 1 : -1];

void asdMdlManagerMarkDestroy(ModelHandle *model);
void asdMdlManagerDestroy(ModelHandle *model);

/* Releases every slot's object and model and clears the slot. */
void modelManagerReleaseSlots(ModelSlotManager *manager)
{
    for (u32 i = 0; i < 109; i++) {
        if (manager->slots[i].object != NULL) {
            delete manager->slots[i].object;
            manager->slots[i].object = NULL;
        }
        if (manager->slots[i].model != NULL) {
            if (manager->slots[i].model->resource->state >= 0) {
                asdMdlManagerMarkDestroy(manager->slots[i].model);
            }
            asdMdlManagerDestroy(manager->slots[i].model);
            manager->slots[i].model = NULL;
        }
        manager->slots[i].state = 0;
    }
}

} /* extern "C" */
