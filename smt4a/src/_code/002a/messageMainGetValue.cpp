#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 value;
} Record;

typedef struct Global57f588 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Record *record;
} Global57f588;
extern Global57f588 g_messageMain;

/* Returns the word at 0x18 of the record at 0x57F588 + 8. */
u32 messageMainGetValue(void)
{
    return g_messageMain.record->value;
}

} /* extern "C" */
