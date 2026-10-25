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
    if (owner->entries[index].effect != NULL) {
        delete owner->entries[index].effect;
        owner->entries[index].effect = NULL;
    }
    if (owner->entries[index].model != NULL) {
        if (owner->entries[index].model->node->unk0c >= 0) {
            asdMdlManagerMarkDestroy(owner->entries[index].model);
        }
        asdMdlManagerDestroy(owner->entries[index].model);
        owner->entries[index].model = NULL;
    }
    owner->entries[index].state = 0;
}
}
