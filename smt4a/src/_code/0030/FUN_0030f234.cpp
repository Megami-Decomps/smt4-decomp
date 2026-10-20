#include "common.h"

extern "C" {

void FUN_002e7888(u32 dest, u32 source);
void FUN_002eea94(void *string, s32 size);

typedef struct String {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 data;
} String;

String *constructObj0055affc(void);

/* Builds a string with room for `a + b` 16-bit characters plus a terminator: `first` is copied to its start and `second` after the first `a` characters. */
void FUN_0030f234(u32 unused, u32 first, s32 a, u32 second, s32 b)
{
    String *string;
    u32 data;

    string = constructObj0055affc();
    FUN_002eea94(string, a + b + 1);
    data = string->data;
    FUN_002e7888(data, first);
    FUN_002e7888(a * 2 + data, second);
}

} /* extern "C" */
