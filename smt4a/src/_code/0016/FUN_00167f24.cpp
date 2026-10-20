#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x0000 */ u8 unk0000[0x19C5];
    /* 0x19C5 */ u8 mode;
} Record;

typedef struct Global57f588 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Record *record;
} Global57f588;
extern Global57f588 g_messageMain;

/* Sets the mode byte at 0x19C5 of the record to `value`, if there is one. */
void FUN_00167f24(u8 value)
{
    if (g_messageMain.record != NULL) {
        g_messageMain.record->mode = value;
    }
}

} /* extern "C" */
