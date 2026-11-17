/* NON_MATCHING: retail does not predicate the name test (`cmp r0,#1; bhi` skips the ldrb); armcc emits ldrbls/cmpls for every && / nested / early-return form tried (smt4a twin predicates). */
#include "common.h"
#include "quest_center/QuestRecord.h"

extern "C" {

typedef struct FlagBlock {
    /* 0x000 */ u8 unk000[0x202];
    /* 0x202 */ u8 flags[1];  /* four bytes per id */
} FlagBlock;

FlagBlock *gameGetFlagBlock(u32 index);
u32 libc_strlen(const char *s);

/* Returns whether the record's flag is set: 0 for an empty "0" name, 1 without a flag index, else bit 2 of its flag byte. */
u32 FUN_00290248(u32 id)
{
    QuestRecord *record = dataTable1bOr1cGetRecord(id);
    u32 length = libc_strlen(record->token);

    u32 result;

    if (length <= 1) {
        if (record->token[0] == '0') {
            return 0;
        }
    }
    if (record->flagIndex == 0) {
        result = 1;
    } else {
        result = (gameGetFlagBlock(record->flagIndex)->flags[id * 4] & 4) >> 2;
    }
    return result;
}

} /* extern "C" */
