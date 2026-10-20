#include "common.h"

extern "C" {

typedef __packed struct Record {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u8 unk18;
    /* 0x19 */ u8 unk19;
    /* 0x1A */ u8 unk1A;
    /* 0x1B */ u8 unk1B;
    /* 0x1C */ u16 unk1C;
    /* 0x1E */ u32 unk1E;
    /* 0x22 */ u32 unk22;
    /* 0x26 */ u32 unk26;
    /* 0x2A */ u32 unk2A;
    /* 0x2E */ u32 unk2E;
    /* 0x32 */ u32 unk32;
} Record;

void FUN_00121fb4(Record *record)
{
    record->unk00 = 0;
    record->unk04 = 0;
    record->unk08 = 0;
    record->unk0C = 0;
    record->unk10 = 0;
    record->unk14 = 0;
    record->unk18 = 0;
    record->unk19 = 0;
    record->unk1A = 0;
    record->unk1C = 0;
    record->unk1E = 0;
    record->unk22 = 0;
    record->unk26 = 0;
    record->unk2A = 0;
    record->unk2E = 0;
    record->unk32 = 0;
}

} /* extern "C" */
