#include "common.h"

extern "C" {

typedef struct Settings {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 first;
    /* 0x0C */ u32 second;
} Settings;

/* Copies the kind and the two words from `source` into `dest`. */
void FUN_00110b28(Settings *dest, const Settings *source)
{
    dest->kind = source->kind;
    dest->first = source->first;
    dest->second = source->second;
}

} /* extern "C" */
