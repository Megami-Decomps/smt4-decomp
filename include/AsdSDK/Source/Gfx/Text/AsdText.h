/* AsdSDK/Source/Gfx/Text/AsdText.c: text objects. */
#ifndef ASDSDK_SOURCE_GFX_TEXT_ASDTEXT_H
#define ASDSDK_SOURCE_GFX_TEXT_ASDTEXT_H

#include "common.h"
#include "shard/S2NwFont.h"
#include <stddef.h>

struct FontRegisteredRecord;
struct AsdTextGlyphRecord {
    u16 code;
    u16 reserved;
    NwFontGlyph glyph;
    u32 textureIndex;
};
typedef char AsdTextGlyphRecordLayout[sizeof(AsdTextGlyphRecord) == 0x20 &&
    offsetof(AsdTextGlyphRecord, glyph) == 4 &&
    offsetof(AsdTextGlyphRecord, textureIndex) == 0x1C ? 1 : -1];
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* IV allocates this 0xB4-byte text owner. Apocalypse allocates 0xBC bytes,
 * with an eight-byte extension at 0xB4; this type describes its common prefix. */
typedef struct AsdText {
    /* 0x00 */ AsdTextGlyphRecord *records;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ s32 begin;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ FontRegisteredRecord *primaryOwner;
    /* 0x18 */ u8 unk18[0x1C];
    /* 0x34 */ u32 unk34;       /* 0x402 when created */
    /* 0x38 */ u32 color;       /* default color with the low byte cleared */
    /* 0x3C */ u8 unk3c[0x14];
    /* 0x50 */ s32 unk50;       /* -1 when created */
    /* 0x54 */ u32 unk54;       /* nonzero once the text can be drawn */
    /* 0x58 */ f32 scale;
    /* 0x5C */ char text[0x40];
    /* 0x9C */ s32 unk9c;       /* -1 when created */
    /* 0xA0 */ u8 unkA0[0xC];
    /* 0xAC */ u8 unkAC;
    /* 0xAD */ u8 unkAD[3];
    /* 0xB0 */ u32 unkB0;
} AsdText;

typedef char AsdTextTextOffsetCheck[sizeof(AsdText) == 0xB4 &&
    offsetof(AsdText, begin) == 0x0C &&
    offsetof(AsdText, primaryOwner) == 0x14 &&
    offsetof(AsdText, unkB0) == 0xB0 ? 1 : -1];

extern "C" {
unsigned int qcGetCenterSlotGroups(int param_1);
}

extern "C" {
u32 FUN_0014bd84(u32 index);
}

extern "C" {
u32 asdGxGetCommandCursor(void);
}

#endif
