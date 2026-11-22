/* NON_MATCHING: register allocation only: retail spills the image-kind object pointer to the stack and keeps the slot ready-flag offset (13 + i * 16) in fp; this build does the reverse (2 extra instructions). */
#include "shard/W8X15_PackageList.h"
#include "gamedata/DataTableAccess_VariantA.h"
#include "shard/W6_W6Match2_TextureHolder.h"

/* A chained buffer in a loaded resource's list. */
struct ResourceNode {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ void *data;
    /* 0x10 */ ResourceNode *next;
};

struct ResourceList {
    /* 0x00 */ void *head;
    /* 0x04 */ ResourceNode *first;
};

/* The texture record an image holds; kind 0x1A images also own a texture reference. */
struct ResourceTextureRecord {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ AsdTexture *texture;
};

struct ResourceImage {
    /* 0x00 */ ResourceTextureRecord *record;
};

struct ResourceObject {
    /* 0x00 */ ResourceImage *image;
    /* 0x04 */ ResourceList *list;
};

/* One loaded resource of the owner (16 bytes per table entry). */
struct ResourceSlot {
    /* 0x00 */ void *data;
    /* 0x04 */ ResourceObject *object;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u8 loaded;
    /* 0x0D */ u8 ready;
    /* 0x0E */ u8 unk0E[2];
};

struct ResourceOwner {
    /* 0x00 */ u8 unk00[0x45];
    /* 0x45 */ u8 active;
    /* 0x46 */ u8 unk46[2];
    /* 0x48 */ u32 fileId;
    /* 0x4C */ ResourceSlot *slots;
};

struct ResourceEntry {
    /* 0x00 */ s8 kind;
    /* 0x01 */ u8 unk01[0x3F];
};

extern "C" {
void asdMemFree(void *block);

/* Releases the loaded resources of the owner; when `all` is 0 the kept kinds stay loaded. */
void resourceOwnerReleaseLoaded(ResourceOwner *owner, s32 all)
{
    if (owner->fileId == 0 || owner->slots == NULL || !owner->active)
        return;
    void *table = dataTableFileGetTable(owner->fileId, 0);
    ResourceEntry *entries = (ResourceEntry *)dataTableGetEntries(table);
    if (entries == NULL || !owner->active || owner->fileId == 0)
        return;
    u32 count = dataTableGetCount(dataTableFileGetTable(owner->fileId, 0));
    for (u32 i = 0; i < count; i++) {
        bool release = false;
        if (all != 0) {
            release = true;
        } else {
            switch (entries[i].kind) {
            case 3: case 5: case 6: case 0xB: case 0x13: case 0x15: case 0x17: case 0x18: case 0x19:
            case 0x1A: case 0x1B: case 0x1C: case 0x21: case 0x22: case 0x23: case 0x24: case 0x25:
            case 0x26: case 0x27: case 0x28: case 0x29: case 0x2A: case 0x2D: case 0x2E: case 0x2F:
                break;
            default:
                release = true;
                break;
            }
        }
        if (!release)
            continue;
        if (!owner->slots[i].loaded || !owner->slots[i].ready)
            continue;
        if (entries[i].kind == 0x15 || entries[i].kind == 0x17 || entries[i].kind == 0x1A) {
            ResourceObject *object = owner->slots[i].object;
            if (object != NULL) {
                if (object->list != NULL) {
                    ResourceNode *node = object->list->first;
                    while (node != NULL) {
                        ResourceNode *next = node->next;
                        asdMemFree(node->data);
                        asdMemFree(node);
                        node = next;
                    }
                    asdMemFree(object->list->head);
                    asdMemFree(object->list);
                    object->list = NULL;
                }
                if (entries[i].kind == 0x1A && object->image->record != NULL)
                    asdTextureRelease(object->image->record->texture);
                ResourceImage *image = object->image;
                if (image->record != NULL) {
                    asdMemFree(image->record);
                    image->record = NULL;
                }
                asdMemFree(object->image);
                if (owner->slots[i].object != NULL) {
                    asdMemFree(owner->slots[i].object);
                    owner->slots[i].object = NULL;
                }
            }
        } else if (owner->slots[i].object != NULL) {
            asdMemFree(owner->slots[i].object);
            owner->slots[i].object = NULL;
        }
        if (owner->slots[i].data != NULL) {
            asdMemFree(owner->slots[i].data);
            owner->slots[i].data = NULL;
        }
        owner->slots[i].loaded = 0;
        owner->slots[i].ready = 0;
    }
}

} /* extern "C" */
