#ifndef UI_FORMATTED_NUMERIC_ENTRY_H
#define UI_FORMATTED_NUMERIC_ENTRY_H
#include "common.h"
#include <stddef.h>

struct FormattedNumericEntry {
    /* 0x00 */ char prefix[32];
    /* 0x20 */ char value[64];
    /* 0x60 */ char suffix[32];
};
struct NumericEntryFormat {
    /* 0x00 */ char prefix[32];
    /* 0x20 */ char suffix[32];
    /* 0x40 */ u8 format;
};
struct NumericFractionDefaults {
    char padding[4];
    char empty[4];
};
typedef char FormattedNumericEntryLayout[sizeof(FormattedNumericEntry) == 128 &&
    offsetof(FormattedNumericEntry, value) == 32 && offsetof(FormattedNumericEntry, suffix) == 96 &&
    offsetof(NumericEntryFormat, format) == 64 && offsetof(NumericFractionDefaults, empty) == 4 ? 1 : -1];
#endif
