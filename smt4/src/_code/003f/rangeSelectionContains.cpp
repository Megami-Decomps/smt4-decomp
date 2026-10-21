/* NON_MATCHING: loop entry/end-sentinel hoisting and interval-address registers differ (25 rows each). Nested dispatch and -Ospace also differ; canonical range/list types retained. */
#include "shard/W6_W6Match6_IntervalList.h"

struct RangeSelection {
    u32 unk00;
    u8 kind; // 0x04:2 = singleton,3 = interval list.
    u8 unk05;
    u16 value; // 0x06
    RangeSet ranges; // 0x08
};

extern "C" {
bool rangeSelectionContains(const RangeSelection *selection, u32 value)
{
    switch (selection->kind) {
    case 2:
        if (selection->value == value) {
            return true;
        }
        break;
    case 3:
        for (const RangeLink *link = selection->ranges.next;
             link != &selection->ranges; link = link->next) {
            const RangeNode *node = static_cast<const RangeNode *>(link);
            if (node->range.first <= value && value <= node->range.last) {
                return true;
            }
        }
        break;
    }
    return false;
}
}
