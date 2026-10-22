#ifndef GAMEDATA_SELECTIONVALUERECORD_H
#define GAMEDATA_SELECTIONVALUERECORD_H
#include "common.h"
#include <stddef.h>

struct SelectionValuePayload {
    s16 slot; // 0x00
    s16 alternateSlot; // 0x02
    u8 unk04[4]; // 0x04
    s16 positiveValue; // 0x08
    u16 firstId; // 0x0A
    u16 secondId; // 0x0C
    s16 value; // 0x0E
    u8 unk10[5]; // 0x10
    s8 mode; // 0x15
    u8 unk16[0xD]; // 0x16
    s8 positiveMode; // 0x23
};
struct SelectionValueRecord {
    union {
        u8 unk00[0x20]; // 0x00
        struct {
            u8 unk00[0xC];
            u8 flags; // 0x0C
        } variant;
    };
    SelectionValuePayload values; // 0x20
};
typedef char SelectionValueRecordLayoutCheck[sizeof(SelectionValuePayload) == 0x24 &&
    offsetof(SelectionValueRecord, values) == 0x20 ? 1 : -1];
typedef char SelectionValueRecordVariantOffsetCheck[
    offsetof(SelectionValueRecord, variant.flags) == 0xC &&
    sizeof(SelectionValueRecord) == 0x44 ? 1 : -1];
#endif
