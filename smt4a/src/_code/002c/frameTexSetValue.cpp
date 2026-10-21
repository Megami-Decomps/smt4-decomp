#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x25];
    /* 0x25 */ u8 value;
} Record;
extern Record *g_frameTex;

/* Stores `value` in the byte at 0x25 of the record at 0x57F65C. */
void frameTexSetValue(u8 value)
{
    g_frameTex->value = value;
}

} /* extern "C" */
