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
void FUN_001883b0(u32 *request, u8 buffer[500], s32 mode);

/* Clears the request's pending words and submits it with the loaded record. */
static void requestSubmit(u32 *request, u8 *buffer, s32 mode)
{
    request[3] = 0;
    request[4] = 0;
    request[1] = 0;
    request[2] = 0;
    FUN_001883b0(request, buffer, mode);
}

/* Loads the id's record into a scratch buffer, clears the owner's request words and submits the record: mode 2 when `kind` is 1, else mode 1. */
void FUN_002befc0(RequestOwner *owner, u32 id, s32 kind)
{
    u8 buffer[500];

    pathBuildWide(id, buffer, 3);
    if (kind == 1) {
        requestSubmit(&owner->unk08, buffer, 2);
    } else {
        requestSubmit(&owner->unk08, buffer, 1);
    }
}

} /* extern "C" */
