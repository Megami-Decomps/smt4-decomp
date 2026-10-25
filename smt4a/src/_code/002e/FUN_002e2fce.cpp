/* NON_MATCHING: Retail movs r6, r0 differs from recovered mov r4, r1. */
#include "common.h"
#include "camp/CampCec/CampCecView.h"

// Private view of the record returned by FUN_002e2ec0.
struct RecordView002e2fce {
    u8* unk00;  // 0x00
    u32 unk04;  // 0x04
    u8* unk08;  // 0x08
    u32 unk0C;  // 0x0C
    u8* unk10;  // 0x10
};

extern "C" {
extern u8 DAT_00567078;

u32 FUN_00197c2c(u8* data, u32 value);
u32 FUN_001bc5ac(u8* data, u32 value);
void FUN_002e2ecc(u32 identifier, u32 flags);

// Populate the selected record fields, then forward the identifier and flags.
void FUN_002e2fce(u32 identifier, u32 flags, u32 value)
{
    if (flags & 2) {
        u32 result = FUN_00197c2c(&DAT_00567078, value);
        if (result == 0) {
            return;
        }
        reinterpret_cast<RecordView002e2fce*>(FUN_002e2ec0())->unk04 = result + 1;
    }

    if (flags & 1) {
        u8* data = &DAT_00567078;
        if (data == 0) {
            return;
        }
        reinterpret_cast<RecordView002e2fce*>(FUN_002e2ec0())->unk00 = data;
    }

    if (flags & 4) {
        u8* data = &DAT_00567078;
        if (data == 0) {
            return;
        }
        reinterpret_cast<RecordView002e2fce*>(FUN_002e2ec0())->unk08 = data;
    }

    if (flags & 8) {
        u32 result = FUN_001bc5ac(&DAT_00567078, value);
        if (result == 0) {
            return;
        }
        reinterpret_cast<RecordView002e2fce*>(FUN_002e2ec0())->unk0C = result;
    }

    if (flags & 16) {
        u8* data = &DAT_00567078;
        if (data == 0) {
            return;
        }
        reinterpret_cast<RecordView002e2fce*>(FUN_002e2ec0())->unk10 = data;
    }

    FUN_002e2ecc(identifier, flags);
}
}
