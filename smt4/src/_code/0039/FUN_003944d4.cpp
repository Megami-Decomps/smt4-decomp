#include "common.h"

extern "C" {

extern struct {
    u8 unk00[0x54];
    u32 unk54;
} g_gameState; /* 0x49f91c */

typedef __packed struct Record {
    /* 0x00 */ u8 unk00[0x1A];
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

void FUN_003944d4(Record *record)
{
    record->unk1A = 0;
    record->unk1C = 0;
    record->unk1E = 0;
    record->unk22 = 0;
    record->unk26 = 0;
    record->unk2A = 0;
    record->unk2E = 0;
    record->unk32 = 0;
    g_gameState.unk54 = 0;
}

} /* extern "C" */
