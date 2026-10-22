#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 value;
} Record;

typedef struct Global57f25c {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Record *record;
} Global57f25c;
extern Global57f25c g_callbackOwnerSlots;

/* Returns whether the word at 8 of the record at 0x57F25C + 4 is 0. */
u8 recordValueIsZero(void)
{
    return g_callbackOwnerSlots.record->value == 0;
}

} /* extern "C" */
