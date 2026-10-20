/* NON_MATCHING: retail stores the last two words with one `stm` after the zero stores; armcc emits `str r1` first and a separate `str r2`. */
#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u32 words[10];
    /* 0x28 */ u8 flag;
    /* 0x29 */ u8 unk29[3];
    /* 0x2C */ u32 first;
    /* 0x30 */ u32 second;
} Record;

/* Clears the record and stores the two values into it. */
void FUN_00427c38(Record *record, u32 first, u32 second)
{
    s32 i;

    for (i = 0; i < 10; i++) {
        record->words[i] = 0;
    }
    record->flag = 0;
    record->first = first;
    record->second = second;
}

}
