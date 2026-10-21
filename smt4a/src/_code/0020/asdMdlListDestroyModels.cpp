#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

struct ModelListEntry {
    u32 unk00[2]; // 0x00
    AsdMdlObject **model; // 0x08
    u32 unk0c[2]; // 0x0c
    ModelListEntry *previous; // 0x14
    ModelListEntry *next; // 0x18
};
struct ModelList {
    ModelListEntry *head; // 0x00
    ModelListEntry *tail; // 0x04
    s32 count; // 0x08
};
struct ModelListOwner {
    u8 unk00[0x0c];
    ModelList models; // 0x0c
};

extern "C" {
void asdMdlManagerDestroy(AsdMdlObject *model);
void dlistFreeAll(ModelList *list);

// Destroy each owned model before releasing the list entries.
void asdMdlListDestroyModels(ModelListOwner *owner)
{
    for (ModelListEntry *entry = owner->models.head; entry != NULL; entry = entry->next) {
        AsdMdlObject **model = entry->model;
        if (*model != NULL) {
            asdMdlManagerDestroy(*model);
            *model = NULL;
        }
    }
    dlistFreeAll(&owner->models);
}
}
