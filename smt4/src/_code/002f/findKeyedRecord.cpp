/* Finds the record whose two keys match, scanning the table until its -1 terminator (at most 999 records). */
#include "common.h"

extern "C" {
/* A table record (0x5C bytes); the first key is -1 in the terminator. */
struct KeyedRecord {
    /* 0x00 */ s32 firstKey;
    /* 0x04 */ s32 secondKey;
    /* 0x08 */ u8 unk08[0x54];
};

extern KeyedRecord g_textEntryTable[999];

KeyedRecord *findKeyedRecord(s32 firstKey, s32 secondKey)
{
    for (s32 i = 0; i < 999; i++) {
        if (g_textEntryTable[i].firstKey == -1) {
            break;
        }
        if (g_textEntryTable[i].firstKey == firstKey && g_textEntryTable[i].secondKey == secondKey) {
            return &g_textEntryTable[i];
        }
    }
    return NULL;
}
}
