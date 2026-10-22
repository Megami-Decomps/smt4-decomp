#include "common.h"

extern "C" {

typedef struct HandleBody {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 flags;
} HandleBody;

typedef struct Handle {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ HandleBody *body;
} Handle;

typedef struct Entry {
    /* 0x00 */ u32 state;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ Handle *handle;
    /* 0x0C */ u8 unk0C[0x50];
} Entry; /* 0x5C */

typedef struct EntryList {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ Entry entries[1];
} EntryList;

extern u32 g_handleRegistry;

extern void ptrListRemoveClearOwner(u32 registry, HandleBody *body);

/* Marks entry `index` as released (state 2), flags its handle body and unregisters the body. */
void resourceEntryMarkReleased(EntryList *list, s32 index)
{
    Entry *entry = &list->entries[index];
    HandleBody *body = entry->handle->body;

    if (body != NULL) {
        entry->state = 2;
        body->flags |= 3;
        ptrListRemoveClearOwner(g_handleRegistry, body);
    }
}

} /* extern "C" */
