#include "common.h"
#include "shard/messageGetChoiceResult.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u32 value;
} Record;

typedef struct Global57f588 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Record *record;
} Global57f588;
extern Global57f588 g_messageMain;

/* Returns the word at 0x1C of the record at 0x57F588 + 8. */
u32 messageGetChoiceResult(void)
{
    return g_messageMain.record->value;
}

} /* extern "C" */
