#include "common.h"

extern "C" {

struct ModelObject {
    virtual void vfunc0();
    virtual void destroy();
};

typedef struct ModelInfo {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 loadState;
} ModelInfo;

typedef struct ModelHandle {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ModelInfo *info;
} ModelHandle;

typedef struct ModelSlot {
    /* 0x00 */ ModelHandle *model;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 unk08;
    /* 0x0C */ u8 unk0C[0x10];
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ ModelObject *object;
    /* 0x24 */ u32 unk24;
} ModelSlot;                           /* 0x28 bytes */

typedef struct ModelSet {
    /* 0x000 */ u8 unk000[0x190];
    /* 0x190 */ ModelSlot slots[50];
} ModelSet;

extern void asdMdlManagerMarkDestroy(ModelHandle *model);
extern int asdMdlManagerDestroy(ModelHandle *model);

/* Resets all 50 model slots: destroys each slot's object and model (marking the model for destruction first when it is loaded). */
void modelSetResetSlots(ModelSet *set)
{
    int i;

    for (i = 0; i < 50; i++) {
        ModelSlot *slot = &set->slots[i];

        slot->unk04 = -1;
        slot->unk08 = -1;
        slot->unk24 = 0;
        slot->unk1C = 0;
        if (slot->object != NULL) {
            slot->object->destroy();
            slot->object = NULL;
        }
        if (slot->model != NULL) {
            if (slot->model->info->loadState >= 0) {
                asdMdlManagerMarkDestroy(slot->model);
            }
            asdMdlManagerDestroy(slot->model);
            slot->model = NULL;
        }
    }
}

} /* extern "C" */
