/* NON_MATCHING: retail repeats the four clearing stores in each branch of the kind test (the compare comes first, then separate store/call sequences); the build clears once before the compare. */
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

void FUN_001883b0(u32 id, u8 buffer[500], s32 kind);
void FUN_002e0e04(u32 *request, u8 buffer[500], s32 mode);

/* Loads the id's record into a scratch buffer, clears the owner's request words and submits the record: mode 2 when `kind` is 1, else mode 1. */
void FUN_002befc0(RequestOwner *owner, u32 id, s32 kind)
{
    u8 buffer[500];

    FUN_001883b0(id, buffer, 3);
    owner->unk14 = 0;
    owner->unk18 = 0;
    owner->unk0C = 0;
    owner->unk10 = 0;
    FUN_002e0e04(&owner->unk08, buffer, kind == 1 ? 2 : 1);
}

} /* extern "C" */
