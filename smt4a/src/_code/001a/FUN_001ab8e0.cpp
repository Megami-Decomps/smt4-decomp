#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u32 c;
    /* 0x0C */ u32 d;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u8 unk1C[0x10];
    /* 0x2C */ u16 half2C;
    /* 0x2E */ u16 half2E;
} Record;

/* Initialises the record from four values: the three words at 0x10..0x18 cleared and both halfwords set to 1. */
void FUN_001ab8e0(Record *record, u32 a, u32 b, u32 c, u32 d)
{
    record->unk10 = 0;
    record->unk14 = 0;
    record->unk18 = 0;
    record->half2C = 1;
    record->half2E = 1;
    record->a = a;
    record->b = b;
    record->c = c;
    record->d = d;
}

} /* extern "C" */
