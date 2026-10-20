#include "common.h"

extern "C" {

void FUN_002ea6ae(void *dest, void *source, u32 value);

typedef struct Source {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 value;
} Source;

/* Calls FUN_002ea6ae(dest, source, source's word at 0x10) and returns `dest`. */
void *FUN_002eb16e(void *dest, Source *source)
{
    FUN_002ea6ae(dest, source, source->value);
    return dest;
}

} /* extern "C" */
