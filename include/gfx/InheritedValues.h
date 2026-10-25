#ifndef GFX_INHERITED_VALUES_H
#define GFX_INHERITED_VALUES_H

#include "classes/AllocatorWordVector.h"
#include "classes/WordVector.h"
#include <stddef.h>

struct InheritedValueSource {
    /* 0x00 */ u8 unk00[0x5c];
    /* 0x5C */ WordRange defaults;
    /* 0x64 */ u8 unk64[0x18];
    /* 0x7C */ WordRange firstList;
    /* 0x84 */ u8 unk84[8];
    /* 0x8C */ WordRange secondList;
    /* 0x94 */ u8 unk94[8];
    /* 0x9C */ WordRange secondValue;
    /* 0xA4 */ u8 unkA4[8];
    /* 0xAC */ WordRange firstValue;
};
class InheritedValueCollection {
public:
    typedef void (InheritedValueCollection::*Appender)(u32 value);

    /* 0x00 */ u32 firstValue;
    /* 0x04 */ u32 secondValue;
    /* 0x08 */ AllocatorWordVector firstList;
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ AllocatorWordVector secondList;
    /* 0x30 */ u8 unk30[0x3c];
    /* 0x6C */ u32 *slots;
    /* 0x70 */ u8 unk70[0x10];
    /* 0x80 */ u32 *defaultValue;
    /* 0x84 */ u8 unk84[0x1c];
    /* 0xA0 */ u32 firstCount;
    /* 0xA4 */ u32 secondCount;

    u32 &slot(u32 index) { return slots[index]; }

    void appendRange(WordRange range, Appender appender)
    {
        for (u32 *entry = range.begin; entry != range.end; ++entry)
            (this->*appender)(*entry);
    }
};
struct InheritedValueDestination {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ InheritedValueCollection values;
};
struct InheritedValueSourceOwner {
    u32 unk00;
    InheritedValueSource *data;
};
struct InheritedValueDestinationOwner {
    u32 unk00;
    InheritedValueDestination *data;
};
typedef char InheritedValueLayoutCheck[
    offsetof(InheritedValueSource, firstList) == 0x7c &&
    offsetof(InheritedValueSource, firstValue) == 0xac &&
    offsetof(InheritedValueCollection, slots) == 0x6c &&
    offsetof(InheritedValueCollection, defaultValue) == 0x80 &&
    offsetof(InheritedValueCollection, firstCount) == 0xa0 &&
    sizeof(InheritedValueCollection) == 0xa8 ? 1 : -1];

#endif
