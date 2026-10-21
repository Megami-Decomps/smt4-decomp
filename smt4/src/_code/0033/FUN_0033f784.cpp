/* NON_MATCHING: compiler shrink-wraps the saved frame after the ready guard and swaps global-base/bound registers IP/R4; indexed loop and sort setup otherwise match. */
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

void FUN_0033f784(void)
{
    s32 count = DAT_0043e3b0.count;
    if (count != 0) {
        return;
    }
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
