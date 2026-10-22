/* NON_MATCHING: retail loads the error result into r0 and copies it to r4 (ldr r0; mov r4, r0); the build loads r4 directly, shifting the tail by one instruction. */
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

/* Open the owner's stream on the record `id` (mode 1 opens it in mode 2); returns an nn::Result. */
s32 FUN_001ff93c(SaveStreamOwner *owner, u32 id, s32 mode)
{
    u8 buffer[500];
    s32 result;

    if (FUN_00254884(id, buffer, 1) == NULL) {
        result = 0xE0E046BC;
        FUN_002c3510();
        return result;
    }
    if (mode == 1) {
        result = saveStreamOpen(&owner->stream, buffer, 2);
    } else {
        result = saveStreamOpen(&owner->stream, buffer, 1);
    }
    FUN_002c3510();
    return result;
}

} /* extern "C" */
