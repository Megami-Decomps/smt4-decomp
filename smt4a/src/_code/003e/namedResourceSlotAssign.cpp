#include "common.h"
#include "code/Code001c.h"
#include <string.h>
#include "Model/MoriModelManager.h"

struct NamedResourceObject {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 flags;
};

struct NamedResourceHandle {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ NamedResourceObject *object;
};

/* A named resource slot. */
struct NamedResourceSlot {
    /* 0x00 */ s32 state;
    /* 0x04 */ u16 kind;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ NamedResourceHandle *handle;
    /* 0x0C */ u8 unk0c[0x10];
    /* 0x1C */ char name[0x40];
};

struct NamedResourceTable {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 busy;
    /* 0x08 */ NamedResourceHandle *handle;
    /* 0x0C */ u8 unk0c[0x10];
    /* 0x1C */ NamedResourceSlot slots[1];
};

extern "C" {
s32 moriModelContentIsLoaded(NamedResourceHandle *handle);
char *strncpy(char *destination, const char *source, u32 count);

/* resourceEntryMarkReleased's body (smt4a 0x3e5810, same file), inlined: releases slot `index`'s object (state 2). */
static __inline void releaseSlotObject(NamedResourceTable *table, s32 index)
{
    NamedResourceSlot *slot = &table->slots[index];
    NamedResourceObject *object = slot->handle->object;

    if (object != NULL) {
        slot->state = 2;
        object->flags |= 3;
        ptrListRemoveClearOwner(g_handleRegistry, object);
    }
}

/* Points slot `index` at the resource `name` of kind `kind`: an open slot showing another name
 * releases its object, an idle table opens it directly (state 4), otherwise it is queued (state 5). */
void namedResourceSlotAssign(NamedResourceTable *table, s32 index, const char *name, u16 kind)
{
    NamedResourceSlot *slot = &table->slots[index];

    slot->kind = kind;
    if (moriModelContentIsLoaded(slot->handle) != 0) {
        if (strcmp(slot->name, name) != 0) {
            releaseSlotObject(table, index);
            strncpy(slot->name, name, sizeof(slot->name));
        }
    } else if (table->busy == 0 && moriModelContentIsLoaded(table->handle) != 0) {
        modelLoadFileAsyncByName(slot->handle, name);
        slot->state = 4;
    } else {
        slot->state = 5;
        strncpy(slot->name, name, sizeof(slot->name));
    }
}

} /* extern "C" */
