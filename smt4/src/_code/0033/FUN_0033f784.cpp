/* NON_MATCHING: armcc shrink-wraps the frame after the guard; retail pushes r4/r5 before it and keeps the table base in r4 with the bound loaded in the guarded block. */
#include "shard/W6_W6Match5_NamedLookup.h"

struct NamedRecordCatalog {
    s32 count;
    u8 unk04[0x14];
};

extern "C" {
extern NamedRecordCatalog DAT_0043e3b0;
extern NamedSortRecord DAT_0043e3c8[];
void FUN_0027f3dc(void* records, u32 count, u32 stride,
                  s32 (*compare)(const NamedSortRecord*, const NamedSortRecord*));

/* Numbers the named records up to the first free key and sorts them by name; does nothing once counted. */
void FUN_0033f784(void)
{
    s32 count = DAT_0043e3b0.count;
    if (count == 0) {
        NamedSortRecord* records = reinterpret_cast<NamedSortRecord*>(&DAT_0043e3b0 + 1);
        do {
            NamedSortRecord* record = &records[count];
            if (record->key < 0) {
                break;
            }
            record->index = static_cast<u16>(count);
            ++count;
        } while (count < 2042);
        DAT_0043e3b0.count = count;
        FUN_0027f3dc(DAT_0043e3c8, count, sizeof(NamedSortRecord), keyedRecordCompareName);
    }
}
}
