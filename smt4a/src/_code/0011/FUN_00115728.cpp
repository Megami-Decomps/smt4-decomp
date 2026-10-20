#include "common.h"

extern "C" {

void FUN_002e9e60(const wchar_t *file, s32 line, u32 code, s32 flag);

/* Retail keeps the file name as UTF-16 (DAT_0053813c). */
static const wchar_t s_InstantiationContext_h[] = L"D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstantiationContext.h";

typedef struct SlotTable {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 entries[14];
} SlotTable;

/* Returns entry `index`; an index past the 14 entries is reported (with the source file and line 0x52) and yields -1. */
u32 FUN_00115728(SlotTable *table, u32 index)
{
    if (index >= 14) {
        FUN_002e9e60(s_InstantiationContext_h, 0x52, 0xE0000003, 0);
        return 0xFFFFFFFF;
    }
    return table->entries[index];
}

} /* extern "C" */
