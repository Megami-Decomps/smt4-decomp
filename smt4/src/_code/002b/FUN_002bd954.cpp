/* NON_MATCHING: Retail push {r4, r5, r6, r7, r8, r9, sl, lr} differs from recovered push {r4, r5, r6, r7, r8, lr}. */
#include "common.h"

// Private views of the records accessed by this initializer.
struct InitSourceView {
    u8 unk00[0x0c];             // 0x00
    u32 unk0C;                 // 0x0c
    u32 unk10;                 // 0x10
    u32 unk14;                 // 0x14
    u32 unk18;                 // 0x18
    u32 unk1C;                 // 0x1c
};

struct InitRecordView {
    u32 unk00;                 // 0x00
    u32 unk04;                 // 0x04
    s32 unk08;                 // 0x08
    u8 unk0C[0x14];            // 0x0c
    f32 unk20;                 // 0x20
    f32 unk24;                 // 0x24
    f32 unk28;                 // 0x28
    f32 unk2C;                 // 0x2c
    u8 unk30[8];               // 0x30
    u16 unk38;                 // 0x38
    u8 unk3A[0x0e];            // 0x3a
    const InitSourceView* unk48; // 0x48
    u32 unk4C;                 // 0x4c
    u8 unk50[8];               // 0x50
    u32 unk58;                 // 0x58
    u8 unk5C[8];               // 0x5c
    u32 unk64;                 // 0x64
    u8 unk68[8];               // 0x68
    u32 unk70;                 // 0x70
    u8 unk74[4];               // 0x74
    u32 unk78;                 // 0x78
    u8 unk7C[0x0a];            // 0x7c
    u8 unk86;                  // 0x86
    u8 unk87;                  // 0x87
    u8 unk88;                  // 0x88
    u8 unk89;                  // 0x89
    u8 unk8A;                  // 0x8a
    u8 unk8B;                  // 0x8b
};

extern "C" int memClear(u32* destination, int byteCount);

// Clear the record, install its initial values, and copy fields from the source.
extern "C" void FUN_002bd954(InitRecordView* record, u32 value0,
                              u32 value4, const InitSourceView* source,
                              u16 value38, f32 value20)
{
    memClear(reinterpret_cast<u32*>(record), 0x8c);
    record->unk00 = value0;
    record->unk04 = value4;
    record->unk08 = -1;
    record->unk20 = value20;
    record->unk38 = value38;
    record->unk24 = 1.0f;
    record->unk28 = 1.0f;
    record->unk2C = 1.0f;
    record->unk48 = source;
    record->unk4C = source->unk0C;
    record->unk58 = source->unk10;
    record->unk64 = source->unk14;
    record->unk70 = source->unk18;
    record->unk78 = source->unk1C;
    record->unk86 = 1;
    record->unk87 = 1;
    record->unk88 = 1;
    record->unk89 = 1;
    record->unk8A = 1;
}
