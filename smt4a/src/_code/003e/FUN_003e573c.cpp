/* NON_MATCHING: retail keeps both `table + index * 0x5c` (r6) and the slot address (r4 = r6 + 0x1c) live and addresses some fields from each; branch layout differs accordingly. */
#include "common.h"

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
extern void *g_handleRegistry;
s32 FUN_0040ab8c(NamedResourceHandle *handle);
s32 libc_strcmp(const char *a, const char *b);
char *strncpy(char *destination, const char *source, u32 count);
void ptrListRemoveClearOwner(void *list, NamedResourceObject *object);
void FUN_001cd3ec(NamedResourceHandle *handle, const char *name);

/* Points slot `index` at the resource `name` of kind `kind`: an open slot showing another name
 * releases its object, an idle table opens it directly (state 4), otherwise it is queued (state 5). */
void FUN_003e573c(NamedResourceTable *table, s32 index, const char *name, u16 kind)
{
    NamedResourceSlot *slot = &table->slots[index];

    slot->kind = kind;
    if (FUN_0040ab8c(slot->handle) != 0) {
        NamedResourceObject *object;

        if (libc_strcmp(slot->name, name) == 0) {
            return;
        }
        object = slot->handle->object;
        if (object != NULL) {
            slot->state = 2;
            object->flags |= 3;
            ptrListRemoveClearOwner(g_handleRegistry, object);
        }
    } else if (table->busy == 0 && FUN_0040ab8c(table->handle) != 0) {
        FUN_001cd3ec(slot->handle, name);
        slot->state = 4;
        return;
    } else {
        slot->state = 5;
    }
    strncpy(slot->name, name, sizeof(slot->name));
}

} /* extern "C" */
