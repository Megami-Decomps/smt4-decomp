#include "common.h"

extern "C" {

typedef __packed struct Settings {
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
} Settings;

/* Clears every field. The record is packed: its words sit at unaligned offsets from 0x1E on. */
void FUN_0015f448(Settings *settings)
{
    settings->unk00 = 0;
    settings->unk04 = 0;
    settings->unk08 = 0;
    settings->unk0C = 0;
    settings->unk10 = 0;
    settings->unk14 = 0;
    settings->unk18 = 0;
    settings->unk19 = 0;
    settings->unk1A = 0;
    settings->unk1C = 0;
    settings->unk1E = 0;
    settings->unk22 = 0;
    settings->unk26 = 0;
    settings->unk2A = 0;
    settings->unk2E = 0;
    settings->unk32 = 0;
}

} /* extern "C" */
