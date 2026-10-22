/* NON_MATCHING: retail tests results with ands into r1 and keeps a zero in r5 across the calls, and lays the error path after the success path; nn::Result-style IsFailure check not reproduced. */
#include "common.h"

extern "C" {

typedef struct SaveStream {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
} SaveStream;

typedef struct SaveStreamOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ SaveStream stream;
} SaveStreamOwner;

void *FUN_00254884(u32 id, u8 *buffer, s32 flags);
u32 FUN_002ad888(void);
s32 FUN_002ad80c(u8 *buffer, u32 context, u32 size, s32 flags);
s32 FUN_002bb5a4(SaveStream *stream, u8 *buffer, s32 mode);
void FUN_002c3510(void);

static s32 saveStreamOpen(SaveStream *stream, u8 *buffer, s32 mode)
{
    stream->unk0C = 0;
    stream->unk10 = 0;
    stream->unk04 = 0;
    stream->unk08 = 0;
    return FUN_002bb5a4(stream, buffer, mode);
}

/* Create the record `id` with `size` bytes and open the owner's stream on it; returns an nn::Result. */
s32 FUN_002e1380(SaveStreamOwner *owner, u32 id, u32 size)
{
    u8 buffer[496];
    s32 result;

    if (FUN_00254884(id, buffer, 2) == NULL) {
        result = 0xE0E046BC;
        FUN_002c3510();
        return result;
    }
    result = FUN_002ad80c(buffer, FUN_002ad888(), size, 0);
    if (result & 0x80000000) {
        FUN_002c3510();
        return result;
    }
    result = saveStreamOpen(&owner->stream, buffer, 2);
    if (result & 0x80000000) {
        FUN_002c3510();
        return result;
    }
    FUN_002c3510();
    return 0;
}

} /* extern "C" */
