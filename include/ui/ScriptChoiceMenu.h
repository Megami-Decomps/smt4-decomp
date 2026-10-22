#ifndef UI_SCRIPTCHOICEMENU_H
#define UI_SCRIPTCHOICEMENU_H
#include "ui/MessageMain.h"
struct SevenChoiceTable {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 flags[7];
};
struct FiveChoiceTable { u32 flags[5]; };
struct ChoiceLabelTable {
    /* 0x00 */ u8 five[8];
    /* 0x08 */ u8 seven[8];
};
#endif
