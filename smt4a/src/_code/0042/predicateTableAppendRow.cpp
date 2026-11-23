/* NON_MATCHING: list/table owner locals restore their retail allocation; third/fourth string arguments still use swapped r7/r8.
 * Both twins are IDENTICAL only under -O2 -Otime --fpu=softvfp (diagnostic, not set without config review). */
#include "common.h"

namespace {
struct TextRowList {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 count;
};

// One row of five 64-byte strings.
struct TextRow {
    /* 0x000 */ char columns[5][0x40];
};
}

extern "C" {

extern TextRowList DAT_005c0a8c;
extern TextRow DAT_00642b80[];
void stringCopyTruncated(char *dst, const char *src, u32 size);

/* Append a row of five strings to the text table. */
void predicateTableAppendRow(const char *first, const char *second, const char *third, const char *fourth, const char *fifth)
{
    TextRowList *list = &DAT_005c0a8c;
    TextRow *rows = DAT_00642b80;
    stringCopyTruncated(rows[list->count].columns[0], first, 0x40);
    stringCopyTruncated(rows[list->count].columns[1], second, 0x40);
    stringCopyTruncated(rows[list->count].columns[2], third, 0x40);
    stringCopyTruncated(rows[list->count].columns[3], fourth, 0x40);
    stringCopyTruncated(rows[list->count].columns[4], fifth, 0x40);
    list->count++;
}

} /* extern "C" */
