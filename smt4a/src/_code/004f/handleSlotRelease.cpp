#include "common.h"
#include "shard/W4_Match1b_RegisteredHandle.h"
#include "code/Code004f_Smt4a.h"

extern "C" {

typedef struct HandleOwner {
    /* 0x000 */ u8 unk000[0x960];
    /* 0x960 */ RegisteredHandle *registered;
    /* 0x964 */ u32 unk964;
    /* 0x968 */ RegisteredHandle *plain;
    /* 0x96C */ u32 unk96c;
} HandleOwner;

extern u32 g_handleRegistry;

extern void ptrListRemoveClearOwner(u32 list, u32 id);

/* Releases the handles of slot `index`: the plain one is deleted, the registered one is first removed from the registry. */
void handleSlotRelease(HandleOwner *owner, s32 index)
{
    HandleOwner *slot = (HandleOwner *)((u8 *)owner + index * 0x10);

    if (slot->plain != NULL) {
        delete slot->plain;
        slot->plain = NULL;
    }
    if (slot->registered != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, slot->registered->id);
        if (slot->registered != NULL) {
            delete slot->registered;
            slot->registered = NULL;
        }
    }
    slot->unk96c = 0;
}

} /* extern "C" */
