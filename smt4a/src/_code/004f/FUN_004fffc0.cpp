/* NON_MATCHING: the division now calls ll_sdiv like retail; remaining: retail reloads the record once and tests the Result twice through the inlined failure-bool helper (lsrs/moveq/lsrs/movne), and keeps the 64-bit rounding in ip-based registers. */
#include "nn/Result.h"
#include "shard/W6_W6Match2_LongDivision.h"
#include "classes/WindowStatus.h"
#include "shard/S3IpcRequest.h"

struct SizeQueryHeader {
    u32 first;
    u32 second;
};

struct SizeQueryParameterFields {
    /* 0x00 */ SizeQueryHeader header;
    /* 0x08 */ u8 unk08[9];
    /* 0x11 */ u8 unk11;
    /* 0x12 */ u8 unk12[6];
};

union SizeQueryParameters {
    IpcParams6 raw;
    SizeQueryParameterFields fields;
};

struct SizeQueryRecord {
    /* 0x00 */ SizeQueryHeader header;
    /* 0x08 */ u8 unk08[0x1c];
    /* 0x24 */ u32 buffer;
    /* 0x28 */ u32 size;
};

struct SizeQueryOwner {
    /* 0x00 */ SizeQueryRecord *record;
};

extern "C" {
__value_in_regs LongDivisionResult ll_sdiv(s64 dividend, s64 divisor);
s32 FUN_00439be4(u64 *size, const IpcParams6 *params, u32 buffer, u32 length);

WindowStatusResult FUN_004fffc0(SizeQueryOwner *owner, u32 *blocks)
{
    SizeQueryParameters params;
    params.fields.unk11 = 1;
    params.fields.header = owner->record->header;
    u64 size;
    s32 status = FUN_00439be4(&size, &params.raw,
                             owner->record->buffer, owner->record->size);
    if (!nnResultIsFailure(status)) {
        u64 rounded = (size + 0x1ffff) & 0xfffe0000ULL;
        *blocks = (u32)ll_sdiv((s64)rounded, 0x20000).quotient;
        status = 0;
    }
    return WindowStatusResult(status);
}
}
