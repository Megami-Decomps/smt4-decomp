#ifndef UI_MASKED_CHOICE_ROWS_H
#define UI_MASKED_CHOICE_ROWS_H
#include "common.h"
#include <stddef.h>

struct MaskedChoiceDefinition {
    /* 0x00 */ u32 value;
    /* 0x04 */ u8 enabled;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ s32 group;
    /* 0x0C */ s32 index;
    /* 0x10 */ u16 mask;
    /* 0x12 */ u16 unk12;
    /* 0x14 */ u32 unk14;
};
struct MaskedChoiceRow {
    /* 0x00 */ u32 choices[11];
    /* 0x2C */ s32 count;
    /* 0x30 */ s32 selection;
    /* 0x34 */ f32 frame;
    /* 0x38 */ u8 active;
    /* 0x39 */ u8 unk39[3];
    /* 0x3C */ MaskedChoiceDefinition definition;
};
struct MaskedChoiceRows {
    MaskedChoiceRow rows[9];
    /* 0x2F4 */ s32 count;
    /* 0x2F8 */ s32 firstGroupCount;
    /* 0x2FC */ s32 otherGroupCount;
};
typedef char MaskedChoiceRowsLayoutCheck[
    sizeof(MaskedChoiceDefinition) == 0x18 && sizeof(MaskedChoiceRow) == 0x54 &&
    offsetof(MaskedChoiceRow, definition) == 0x3C &&
    offsetof(MaskedChoiceRows, count) == 0x2F4 && sizeof(MaskedChoiceRows) == 0x300 ? 1 : -1];
#endif
