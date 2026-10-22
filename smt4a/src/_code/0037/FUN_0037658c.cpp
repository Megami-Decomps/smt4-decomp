/* NON_MATCHING: Retail mov r5, r0 differs from recovered mov r5, r1. */
#include "common.h"

// Private views of the pool owner and its 0xc0-byte records.
namespace {

struct RecordView;

struct RecordOwnerView {
    u8 unk00[0x80];       // +0x00
    u32 unk80;           // +0x80
    u8 unk84[4];         // +0x84
    RecordView* unk88;   // +0x88
};

struct RecordView {
    u8 unk00[0x84];      // +0x00
    u32 unk84;           // +0x84
    u8 unk88;            // +0x88
    u8 unk89;            // +0x89
    u8 unk8A;            // +0x8a
    u8 unk8B[5];         // +0x8b
    u32 unk90;           // +0x90
    u8 unk94[4];         // +0x94
    u32 unk98;           // +0x98
    u8 unk9C[0x10];      // +0x9c
    RecordView* unkAC;   // +0xac
    RecordView* unkB0;   // +0xb0
    u8 unkB4[0x0c];      // +0xb4
};

}

extern "C" {
RecordView* FUN_003007a0(RecordOwnerView* owner);
void rt_memcpy_w(void* destination, const void* source, u32 size);
void sysMemClear(void* destination, u32 size);
void FUN_001b4ddc(RecordView* record);

// Allocate and initialize a copy, insert it before the source, and update the owner's count.
RecordView* FUN_0037658c(RecordOwnerView* owner, RecordView* source)
{
    RecordView* record = FUN_003007a0(owner);
    rt_memcpy_w(record, source, 0xc0);
    sysMemClear(record, 0x90);
    record->unk84 = 1;
    record->unk88 = 8;
    record->unk89 = 0;
    record->unk8A = 0;
    FUN_001b4ddc(record);
    record->unk98 |= 1;
    record->unk90 = source->unk90;

    if (source->unkAC != 0) {
        source->unkAC->unkB0 = record;
        record->unkAC = source->unkAC;
    } else {
        record->unkAC = 0;
        owner->unk88 = record;
    }
    source->unkAC = record;
    record->unkB0 = source;
    owner->unk80 += 1;
    return record;
}
}
