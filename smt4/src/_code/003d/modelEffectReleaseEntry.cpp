/* NON_MATCHING: native virtual delete matches, but compiler keeps the entry-base pointer early instead of retail's separate owner/index and model-slot bases; -O2 also omits the retail alignment NOP. */
#include "classes/Obj4208f8.h"

struct ModelEffectEntry {
    AsdMdlObject *model;
    u32 id;
    Obj4208f8 *effect;
    u32 state;
};
struct ModelEffectOwner {
    u8 unk000[0x960];
    ModelEffectEntry entries[0x6d];
};

extern "C" {
void asdMdlManagerMarkDestroy(AsdMdlObject *model);
void asdMdlManagerDestroy(AsdMdlObject *model);

void modelEffectReleaseEntry(ModelEffectOwner *owner, u32 index)
{
    ModelEffectEntry *entry = &owner->entries[index];
    if (entry->effect != NULL) {
        delete entry->effect;
        entry->effect = NULL;
    }
    if (entry->model != NULL) {
        if (entry->model->node->unk0c >= 0) {
            asdMdlManagerMarkDestroy(entry->model);
        }
        asdMdlManagerDestroy(entry->model);
        entry->model = NULL;
    }
    entry->state = 0;
}
}
