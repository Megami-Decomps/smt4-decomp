/* NON_MATCHING: C library code (built with a different armcc): retail addresses +0x101/+0x107 with separate register offsets (movs #255; adds #2; ldrb [r0, r3]); here armcc shares one adjusted base. Needs --cpu=5TE for movs register moves */
/* Converts a wide character to a single byte using the active locale's tables (single-byte locales only). */
#include "common.h"

extern "C" {
/* The active locale's character-set record: a 0x100-entry validity table, then converter state. */
struct LocaleCharset {
    /* 0x000 */ u8 table[0x107];      /* [0x00-0xFF] valid bytes, [0x101] nonzero 1 = use the converter routine */
    /* 0x107 */ s32 converterOffset;  /* offset of the conversion routine from this field (position independent) */
};
typedef s32 (*CharsetConverter)(u8 *out, u32 wide, u32 state);

LocaleCharset **FUN_002e2a98(void);

s32 FUN_002e3f88(u8 *out, u32 wide, u32 state)
{
    LocaleCharset *charset = *FUN_002e2a98();

    if (charset->table[0x101] == 1) {
        return ((CharsetConverter)((u8 *)&charset->converterOffset + charset->converterOffset))(out, wide, state);
    }
    if (wide < 0x100 && charset->table[wide] != 0) {
        *out = (u8)wide;
        return 1;
    }
    return -1;
}
}
