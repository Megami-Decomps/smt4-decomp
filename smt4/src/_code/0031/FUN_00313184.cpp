/* NON_MATCHING: pair and category registers differ; the subtype comparison is compiled without retail signed halfword adjustment. */
#include "common.h"

struct CategorySourceRecord {
    u8 unk00[0x26];
    u16 entryId; // 0x26
};
struct CategoryEntryRecord {
    u8 unk00[0x2c];
    u16 subtype; // 0x2c
};
struct CategoryOperand {
    u32 id;
    u32 flags;
};
extern "C" {
CategorySourceRecord *FUN_002498ec(u32 id);
CategoryEntryRecord *dataTable40FindById(u32 id);
s32 idIsAbove400(u32 id);
s32 FUN_0024c52c(u32 id);
void FUN_002497f8(CategoryOperand *first, CategoryOperand *second);

// Apply the pair operation only when both resolved entries have the same category and subtype.
void FUN_00313184(const u16 *first, const u16 *second)
{
    CategorySourceRecord *firstRecord = FUN_002498ec(*first);
    CategorySourceRecord *secondRecord = FUN_002498ec(*second);
    CategoryOperand operands[2] = {{firstRecord->entryId, 0}, {secondRecord->entryId, 0}};
    s32 firstCategory;
    u16 firstSubtype;
    if (idIsAbove400(operands[0].id)) {
        firstCategory = 99;
        firstSubtype = 0;
    } else {
        firstCategory = FUN_0024c52c(operands[0].id);
        firstSubtype = dataTable40FindById(operands[0].id)->subtype;
    }
    s32 secondCategory;
    u16 secondSubtype;
    if (idIsAbove400(operands[1].id)) {
        secondCategory = 99;
        secondSubtype = 0;
    } else {
        secondCategory = FUN_0024c52c(operands[1].id);
        secondSubtype = dataTable40FindById(operands[1].id)->subtype;
    }
    if (firstCategory == secondCategory && firstSubtype == secondSubtype)
        FUN_002497f8(&operands[0], &operands[1]);
}
}
