#ifndef MAP_POPUPCHOICES_H
#define MAP_POPUPCHOICES_H
#include "common.h"
#include <stddef.h>
struct PopupWeightedChoice { s16 message; s16 weight; };
struct PopupChoiceRecord {
    /* 0x00 */ s32 id;
    /* 0x04 */ s32 category;
    /* 0x08 */ s16 requiredFlag;
    /* 0x0A */ s16 excludedFlag;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ PopupWeightedChoice choices[4];
};
struct PopupMessageRecord {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 data[0x20];
    /* 0x24 */ char text[1];
};
typedef char PopupChoiceRecordLayoutCheck[(sizeof(PopupChoiceRecord) == 0x20 && offsetof(PopupMessageRecord, text) == 0x24) ? 1 : -1];
#endif
