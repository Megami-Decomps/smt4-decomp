#include "common.h"

extern "C" {

void FUN_00110790(s32 source, u32 dest, s32 length);
void FUN_002eea94(void *string, s32 size);

typedef struct DataRange {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 base;
    /* 0x10 */ s32 length;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s32 offset;
} DataRange;

typedef struct String {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 data;
} String;

String *_ZN9Obj55aff4C1Ev(void);

/* Builds a string with room for `length` 16-bit characters plus a terminator and copies the range's data into it. */
void FUN_002f7b9c(u32 unused, DataRange *range)
{
    String *string;
    u32 data;

    string = _ZN9Obj55aff4C1Ev();
    FUN_002eea94(string, range->length * 2 + 1);
    data = string->data;
    FUN_00110790(range->base + range->offset, data, range->length);
}

} /* extern "C" */
