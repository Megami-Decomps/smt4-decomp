/* NON_MATCHING: readable rewrite of the BCH section binder; the frame layout (retail keeps the lookup result at sp+40 above the two ranges), the sign test (asr/cmn) and the reuse of the copied request words in VFP registers for the later arguments differ. */
/* Validates a BCH section request against its file header and, when it is acceptable, binds the
 * request into `out` and flags the parts of the bound object. Returns 0 or a status mask whose top
 * bit marks a hard failure. */
#include "common.h"

struct BchHeader {
    /* 0x00 */ u32 magic;
    /* 0x04 */ u8 versionMajor;
    /* 0x05 */ u8 versionMinor;
    /* 0x06 */ u8 unk06[0x2E];
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u32 unk3C;
    /* 0x40 */ u8 flags;
};

struct BchPart {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 flags;
};

struct BchObject {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ BchPart **parts;
    /* 0x10 */ u16 partCount;
};

struct BchSectionRequest {
    /* 0x00 */ BchObject *object;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08; /* 16-aligned */
    /* 0x0C */ u32 unk0C; /* 128-aligned */
    /* 0x10 */ u32 unk10; /* 128-aligned */
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 start;
    /* 0x1C */ u32 unk1C; /* 16-aligned */
    /* 0x20 */ u32 deferred;
    /* 0x24 */ u32 unk24;
};

struct BchSectionBinding {
    /* 0x00 */ BchSectionRequest request;
    /* 0x28 */ u32 handle;
    /* 0x2C */ BchHeader *header;
    /* 0x30 */ BchObject *object;
};

struct BchRange {
    s32 start;
    s32 end;
};

struct BchLookupResult {
    u32 handle;
    s32 status;
};

extern "C" {
BchLookupResult FUN_001b8bb4(BchSectionBinding *out, u32 argument, u32 words, const BchSectionRequest *request,
                             const BchHeader *header, BchRange *ranges);
void FUN_001b8798(BchSectionBinding *out, const BchRange *first, const BchRange *second, u32 unk24, u32 unk1C);

u32 FUN_001b15d0(BchSectionBinding *out, BchHeader *header, const BchSectionRequest *request)
{
    u32 status = 0;
    if ((request->unk08 & 0xF) != 0 || (request->unk0C & 0x7F) != 0 || (request->unk10 & 0x7F) != 0 ||
        (request->start & 3) != 0 || (request->unk1C & 0xF) != 0) {
        status = 0x80000020;
    }
    if (header->magic != 0x484342) {
        status |= 0x80000040;
    }
    if (header->versionMajor > 0x22) {
        status |= 0x80000002;
    }
    if (header->versionMinor < 0x23) {
        status |= 0x80000004;
    }
    if ((header->flags & 2) != 0) {
        status |= 0x80000008;
    }
    if ((s32)(status & 0x80000000) < 0) {
        return status;
    }

    BchRange first;
    first.start = request->start;
    first.end = first.start + header->unk38;
    BchRange second;
    second.start = request->unk24;
    if (second.start == 0) {
        second.start = request->unk1C;
    }
    second.end = second.start + header->unk3C;
    BchLookupResult found = FUN_001b8bb4(out, request->unk14, header->unk34 >> 2, request, header, &first);
    if (found.status < 0) {
        return found.status | status;
    }
    out->request = *request;
    out->handle = found.handle;
    out->header = header;
    out->object = request->object;
    FUN_001b8798(out, &first, &second, request->unk24, request->unk1C);
    if (request->deferred == 0) {
        u32 index = 0;
        if (out->object->partCount != 0) {
            do {
                out->object->parts[index++]->flags |= 0x40;
            } while (index < out->object->partCount);
        }
    }
    header->flags |= 2;
    return status;
}
}
