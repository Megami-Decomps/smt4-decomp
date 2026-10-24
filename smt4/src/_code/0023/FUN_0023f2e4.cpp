/* NON_MATCHING: retail 54 vs built 55 rows; model-slot pointer addressing and destruction branch layout differ. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {
void asdMdlManagerMarkDestroy(void *);
void asdLoadFileAsyncSimple(const char *, void **, s32);
s32 libc_strcmp(const char *, const char *);
char *strncpy(char *, const char *, u32);

void FUN_0023f2e4(void *owner, s32 index, const char *name, u16 id)
{
    struct ModelSlot {
        u32 state;
        u16 id;
        u16 unk06;
        AsdMdlObject *model;
        void *request;
        char name[0x40];
    };
    struct ModelSlotsView {
        u32 unk00;
        u32 blocked;
        u32 asyncEnabled;
        u32 unk0C;
        ModelSlot slots[1];
    };
    ModelSlotsView *state = static_cast<ModelSlotsView *>(owner);
    ModelSlot *slot = &state->slots[index];
    slot->id = id;
    if (slot->model != NULL) {
        if (libc_strcmp(slot->name, name) == 0)
            return;
        if (slot->model != NULL) {
            slot->state = 2;
            slot->model->flags |= 2;
            AsdMdlNode *node = slot->model->node;
            node->resource->positionFollowed = 0;
            if (node->unk0c >= 0) {
                asdMdlManagerMarkDestroy(slot->model->node);
                return;
            }
        }
    } else {
        if (state->blocked == 0 && state->asyncEnabled != 0) {
            asdLoadFileAsyncSimple(name, &slot->request, 1);
            slot->state = 4;
            return;
        }
        slot->state = 5;
    }
    strncpy(slot->name, name, sizeof(slot->name));
}
}
