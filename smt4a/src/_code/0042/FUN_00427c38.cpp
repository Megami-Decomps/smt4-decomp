#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u32 words[10];
    /* 0x28 */ u8 flag;
    /* 0x29 */ u8 unk29[3];
    /* 0x2C */ u32 first;
    /* 0x30 */ u32 second;
} Record;

static __inline void storePair(u32 *destination, u32 first, u32 second)
{
    destination[0] = first;
    destination[1] = second;
}

/* Clears the record, stores the two values into it and returns it. */
Record *FUN_00427c38(Record *record, u32 first, u32 second)
{
    s32 i;

    for (i = 0; i < 10; i++) {
        record->words[i] = 0;
    }
    record->flag = 0;
    storePair(&record->first, first, second);
    return record;
}

}
