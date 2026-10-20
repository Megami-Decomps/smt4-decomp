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
extern Global57f588 DAT_0057f588;

/* Sets the mode byte at 0x19C5 of the record to 0x15, if there is one. */
void FUN_001695a0(void)
{
    if (DAT_0057f588.record != NULL) {
        DAT_0057f588.record->mode = 0x15;
    }
}

} /* extern "C" */
