/* NON_MATCHING: retail builds the wait timeout and handle in one 16-byte frame whose first word is also the key buffer for FUN_00129684; armcc keeps a separate outgoing-argument area, and the registry walk is scheduled differently. */
#include "nn/Result.h"
#include "common.h"

struct ModelRegistryLink {
    ModelRegistryLink *next;     // 0x00
    ModelRegistryLink *previous; // 0x04
};

struct ModelRegistryEntry {
    virtual void FUN_0011cd24_dispatch(void) = 0;
    ModelRegistryLink link; // 0x04
    u32 parameter;          // 0x0c
};

static __inline ModelRegistryEntry *modelRegistryGetEntry(ModelRegistryLink *link)
{
    return link != NULL ? (ModelRegistryEntry *)((u8 *)link - 4) : NULL;
}

static __inline ModelRegistryLink *modelRegistryGetLink(ModelRegistryEntry *entry)
{
    return entry != NULL ? &entry->link : NULL;
}

extern "C" {

extern u32 *DAT_00471b94;
extern ModelRegistryLink *DAT_00471b98;

s32 FUN_002c40f8(s32 *index, u32 *handles, s32 count, s32 waitAll, u32 timeoutLow, u32 timeoutHigh);
s32 FUN_00129684(u32 *key);
void FUN_002c526c(void);
void asdFatalError(void);

/* Model registry worker thread: waits for a request, then runs the registered entry it names. */
__declspec(noreturn) void FUN_0011cd24(void)
{
    for (;;) {
        u32 key;
        s32 index;
        u32 handle = *DAT_00471b94;
        if ((u32)FUN_002c40f8(&index, &handle, 1, 0, 0xffffffff, 0xffffffff) >> 31) {
            FUN_002c526c();
        }
        s32 result = FUN_00129684(&key);
        if (nnResultIsSuccess(result)) {
            ModelRegistryEntry *entry = NULL;
            if (DAT_00471b98 != NULL) {
                ModelRegistryEntry *end = modelRegistryGetEntry(DAT_00471b98->next);
                entry = modelRegistryGetEntry(DAT_00471b98);
                while (entry != NULL && entry->parameter != key) {
                    if (entry == end) {
                        entry = NULL;
                        break;
                    }
                    entry = modelRegistryGetEntry(modelRegistryGetLink(entry)->previous);
                }
            }
            if (entry != NULL) {
                entry->FUN_0011cd24_dispatch();
            }
            result = 0;
        }
        if ((u32)result >> 31) {
            asdFatalError();
        }
    }
}

} /* extern "C" */
