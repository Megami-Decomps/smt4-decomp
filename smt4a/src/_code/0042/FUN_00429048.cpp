/* NON_MATCHING: result construction, staging and request calls are right (hidden-result WindowStatusResult returns); retail caches the resolved entry in r7 and shares one failure block with the token in r0, the scratch pair sits at sp+4 (armcc aligns it to sp+8), and the failure return is a bl rather than a tail call. */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

/* A registered request: a 0x44-byte payload at +0x54 and a "confirmed" flag at +0x98. */
struct WindowRequestEntry {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u8 payload[0x44];
    /* 0x98 */ u8 confirmed;
};

struct RequestScratch {
    u32 first;
    u32 second;
};

/* The payload, flag and name the next request is issued with. */
struct WindowRequestBuffer {
    /* 0x00 */ u8 payload[0x44];
    /* 0x44 */ u8 confirmed;
    /* 0x45 */ u8 unk45[3];
    /* 0x48 */ char name[0xF];
};

extern "C" {
void *__aeabi_memcpy4(void *dest, const void *src, u32 size);
void sysMemClear(void *block, u32 size);
void FUN_0019a46c(void *dest, const char *src, u32 size);
s32 FUN_00427e68(u32 token, u32 mode);
u32 FUN_0016ccfc(void);
s32 tokenResolveAddress(u32 context, WindowRequestEntry **entry, u32 token);
s32 FUN_00427e28(RequestScratch *scratch, u8 *request, u32 flags);
s32 appletIsExitRequested(void);
s32 FUN_0015a410(void);

extern u8 DAT_0061b000[];
extern WindowRequestBuffer DAT_0061b030;

/* Validates the token, stages its payload and name, and issues the asynchronous request. */
WindowStatusResult FUN_00429048(const u32 *token, const char *name)
{
    s32 status = FUN_00427e68(*token, 2);
    if (!nnResultIsFailure(status)) {
        WindowRequestEntry *entry;
        status = tokenResolveAddress(FUN_0016ccfc(), &entry, *token);
        if (!nnResultIsFailure(status)) {
            __aeabi_memcpy4(DAT_0061b030.payload, entry->payload, 0x44);
            DAT_0061b030.confirmed = entry->confirmed;
            if (name != NULL) {
                FUN_0019a46c(DAT_0061b030.name, name, 0xF);
            } else {
                sysMemClear(DAT_0061b030.name, 0xF);
            }
            RequestScratch scratch;
            status = FUN_00427e28(&scratch, DAT_0061b000, 0);
            if (!nnResultIsFailure(status)) {
                if (appletIsExitRequested() != 0 || FUN_0015a410() != 0) {
                    return WindowStatusResult(0xC9413891);
                }
                if (entry->confirmed == 0 && DAT_0061b030.confirmed != 0) {
                    entry->confirmed = 1;
                }
                return nnAsyncMapOperationResult(DAT_0061b000);
            }
        }
    }
    return WindowStatusResult(static_cast<u32>(status));
}
}
