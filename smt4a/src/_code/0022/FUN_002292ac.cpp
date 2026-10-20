#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u8 flagA;
    /* 0x31 */ u8 flagB;
} Record;

typedef struct Global57f588 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Record *record;
} Global57f588;
extern Global57f588 g_messageMain;

/* Sets both flags of the record at 0x57F588 + 8 (the first one only if it exists). */
void FUN_002292ac(void)
{
    Record *record;

    record = g_messageMain.record;
    if (g_messageMain.record != NULL) {
        g_messageMain.record->flagA = 1;
    }
    record->flagB = 1;
}

} /* extern "C" */
