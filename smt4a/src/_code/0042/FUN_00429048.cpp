/* NON_MATCHING: all 76 instructions match retail (including stack layout, struct copy, non-tail failure returns and lsrs r2 after FUN_00427e28); only the callee-saved register rotation (r6/r7/r5 vs r7/r5/r6) differs. */
#include "classes/WindowStatus.h"
#include "code/Code0042.h"
#include "nn/Result.h"

struct WindowRequestPayload {
    u32 words[17];
};

/* A registered request: a 0x44-byte payload at +0x54 and a "confirmed" flag at +0x98. */
struct WindowRequestEntry {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ WindowRequestPayload payload;
    /* 0x98 */ u8 confirmed;
};

/* The payload, flag and name the next request is issued with. */
struct WindowRequestBuffer {
    /* 0x00 */ WindowRequestPayload payload;
    /* 0x44 */ u8 confirmed;
    /* 0x45 */ u8 unk45[3];
    /* 0x48 */ char name[0xF];
};

extern "C" {
void sysMemClear(void *block, u32 size);
void stringCopyTruncated(void *dest, const char *src, u32 size);
nn::Result resourceApplyProgramDescriptor(u32 token, u32 mode);
u32 tokenTableGet(void);
nn::Result tokenResolveAddress(u32 context, WindowRequestEntry **entry, u32 token);
s32 appletIsExitRequested(void);
s32 FUN_0015a410(void);

extern u8 DAT_0061b000[];
extern WindowRequestBuffer DAT_0061b030;

/* Validates the token, stages its payload and name, and issues the asynchronous request. */
WindowStatusResult FUN_00429048(const u32 *token, const char *name)
{
    WindowRequestEntry *entry;
    u32 scratch;
    nn::Result status = resourceApplyProgramDescriptor(*token, 2);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    WindowRequestBuffer *buf = &DAT_0061b030;
    status = tokenResolveAddress(tokenTableGet(), &entry, *token);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    buf->payload = entry->payload;
    buf->confirmed = entry->confirmed;
    if (name != NULL) {
        stringCopyTruncated(buf->name, name, 0xF);
    } else {
        sysMemClear(buf->name, 0xF);
    }
    status = FUN_00427e28(&scratch, DAT_0061b000, 0);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    if (appletIsExitRequested() != 0 || FUN_0015a410() != 0) {
        return WindowStatusResult(0xC9413891);
    }
    if (entry->confirmed == 0 && buf->confirmed != 0) {
        entry->confirmed = 1;
    }
    return nnAsyncMapOperationResult(DAT_0061b000);
}
}
