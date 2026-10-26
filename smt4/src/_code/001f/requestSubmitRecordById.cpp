#include "common.h"

extern "C" {

/* A request record at +8 of its owner; only the cleared words are named. */
typedef struct RequestOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
} RequestOwner;

void pathBuildWide(u32 id, u8 buffer[500], s32 kind);
void FUN_002bb5a4(u32 *request, u8 buffer[500], s32 mode);

/* Clears the owner's request words and submits the request record at +8 with `mode`. */
static __inline void requestClearAndSubmit(RequestOwner *owner, u8 *buffer, s32 mode)
{
    u32 *request = &owner->unk08;
    owner->unk14 = 0;
    owner->unk18 = 0;
    owner->unk0C = 0;
    owner->unk10 = 0;
    FUN_002bb5a4(request, buffer, mode);
}

/* Loads the id's record into a scratch buffer, clears the owner's request words and submits the record: mode 2 when `kind` is 1, else mode 1. */
void requestSubmitRecordById(RequestOwner *owner, u32 id, s32 kind)
{
    u8 buffer[500];

    pathBuildWide(id, buffer, 3);
    if (kind == 1)
        requestClearAndSubmit(owner, buffer, 2);
    else
        requestClearAndSubmit(owner, buffer, 1);
}

} /* extern "C" */
