/* NON_MATCHING: readable rebuild of the loaded-resource release; retail jumps from the kind switch into the shared release body (LAB_00141864) and keeps the slot address strength-reduced across the loop, which armcc here builds from a helper predicate and indexed slots. */
#include "shard/W8X15_PackageList.h"

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

struct ResourceImage {
    /* 0x00 */ void *pixels;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u32 texture;
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
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01[0x3F];
};

extern "C" {
void asdMemFree(void *block);
void asdTextureRelease(u32 texture);

/* Whether the kind stays loaded when only the unlocked resources are released. */
static bool isKeptKind(u8 kind)
{
    switch (kind) {
    case 3: case 5: case 6: case 0xB: case 0x13: case 0x15: case 0x17: case 0x18: case 0x19:
    case 0x1A: case 0x1B: case 0x1C: case 0x21: case 0x22: case 0x23: case 0x24: case 0x25:
    case 0x26: case 0x27: case 0x28: case 0x29: case 0x2A: case 0x2D: case 0x2E: case 0x2F:
        return true;
    }
    return false;
}

/* Frees the object a slot loaded for a kind that owns an image and a buffer list. */
static void releaseImageObject(ResourceSlot *slot, u8 kind)
{
    ResourceObject *object = slot->object;
    if (object == NULL)
        return;
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
    if (kind == 0x1A && object->image->pixels != NULL)
        asdTextureRelease(object->image->texture);
    if (object->image->pixels != NULL) {
        asdMemFree(object->image->pixels);
        object->image->pixels = NULL;
    }
    asdMemFree(object->image);
    if (slot->object != NULL) {
        asdMemFree(slot->object);
        slot->object = NULL;
    }
}

/* Releases the loaded resources of the owner; when `all` is 0 the kept kinds stay loaded. */
void FUN_00141710(ResourceOwner *owner, s32 all)
{
    if (owner->fileId == 0 || owner->slots == NULL || !owner->active)
        return;
    void *table = dataTableFileGetTable(owner->fileId, 0);
    ResourceEntry *entries = (ResourceEntry *)dataTableGetEntries(table);
    if (entries == NULL || !owner->active || owner->fileId == 0)
        return;
    u32 count = dataTableGetCount(dataTableFileGetTable(owner->fileId, 0));
    for (u32 i = 0; i < count; i++) {
        u8 kind = entries[i].kind;
        if (all == 0 && isKeptKind(kind))
            continue;
        ResourceSlot *slot = &owner->slots[i];
        if (!slot->loaded || !slot->ready)
            continue;
        if (kind == 0x15 || kind == 0x17 || kind == 0x1A) {
            releaseImageObject(slot, kind);
        } else if (slot->object != NULL) {
            asdMemFree(slot->object);
            slot->object = NULL;
        }
        if (slot->data != NULL) {
            asdMemFree(slot->data);
            slot->data = NULL;
        }
        slot->loaded = 0;
        slot->ready = 0;
    }
}

} /* extern "C" */
