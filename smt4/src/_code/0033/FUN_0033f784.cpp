/* NON_MATCHING: the frame (r4/r5 pushed before the guard) and the loop match; retail reuses the loaded zero count (`ldreq` of the bound, `addeq` of the base) where the build re-zeroes it after the branch. */
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
    if (DAT_0043e3b0.count == 0) {
        NamedSortRecord* records = reinterpret_cast<NamedSortRecord*>(&DAT_0043e3b0 + 1);
        s32 count;
        for (count = 0; count < 2042; ++count) {
            if (records[count].key < 0) {
                break;
            }
            records[count].index = static_cast<u16>(count);
        }
        DAT_0043e3b0.count = count;
        FUN_0027f3dc(DAT_0043e3c8, count, sizeof(NamedSortRecord), keyedRecordCompareName);
    }
}
}
