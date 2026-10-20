/* NON_MATCHING: instruction-identical except the name-length test: retail compares with `cmp r0, #1; bhi`, built `cmp r0, #2; bcs` (same condition). */
#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x000 */ u8 unk000[0x138];
    /* 0x138 */ char name[15];
    /* 0x147 */ u8 flagIndex;
} Record;

typedef struct FlagBlock {
    /* 0x000 */ u8 unk000[0x202];
    /* 0x202 */ u8 flags[1];  /* four bytes per id */
} FlagBlock;

Record *dataTable1bOr1cGetRecord(u32 id);
FlagBlock *gameGetFlagBlock(u32 index);
u32 libc_strlen(const char *s);

/* Returns whether the record's flag is set: 0 for an empty "0" name, 1 without a flag index, else bit 2 of its flag byte. */
u32 FUN_00290248(u32 id)
{
    Record *record = dataTable1bOr1cGetRecord(id);
    u32 length = libc_strlen(record->name);

    u32 result;

    if (length < 2 && record->name[0] == '0') {
        result = 0;
    } else if (record->flagIndex == 0) {
        result = 1;
    } else {
        result = (gameGetFlagBlock(record->flagIndex)->flags[id * 4] & 4) >> 2;
    }
    return result;
}

} /* extern "C" */
