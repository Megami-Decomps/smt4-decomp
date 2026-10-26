/* NON_MATCHING: category switch case order and shared high-ID/highlight branch placement differ from retail. */
#include "common.h"
#include "code/Code001b.h"
#include "shard/W5_W5Match7_DataRecord.h"

struct PartyCategoryRecord {
    u8 unk00[6];
    u8 category;
};

extern "C" {
s32 partyEntryFlagsBit3(s32 id);
s32 idIsAtLeast350(s32 id);
void drawSetColorFromRGBA8(u32 color);
void FUN_0017ffa8(s32 layer, u32 group, u32 sprite, u32 x, u32 y, u32 flags);
void FUN_00183bb0();

// Select a party member's category icon, using its highlighted variant when flag 3 is set.
void partyDrawCategorySelectionIcon(s32 id, u32 x, u32 y, u32 flags)
{
    u32 sprite = 0;
    s32 highlighted = partyEntryFlagsBit3(id);
    if (FUN_001bd100(id)) {
        sprite = highlighted ? 0x40f : 0x408;
    } else if (idIsAtLeast350(id)) {
        sprite = highlighted ? 0x41b : 0x41a;
    } else {
        switch (reinterpret_cast<PartyCategoryRecord *>(FUN_001ad9b4(id))->category) {
        case 0:
            sprite = highlighted ? 0x40a : 0x403;
            break;
        case 1:
        case 6:
            sprite = highlighted ? 0x40b : 0x404;
            break;
        case 2:
        case 3:
            sprite = highlighted ? 0x40d : 0x406;
            break;
        case 4:
        case 5:
            sprite = highlighted ? 0x40c : 0x405;
            break;
        case 8:
        case 9:
        case 11:
            sprite = highlighted ? 0x41b : 0x41a;
            break;
        case 10:
            sprite = highlighted ? 0x41d : 0x41c;
            break;
        case 12:
            return;
        }
    }
    if (highlighted) {
        drawSetColorFromRGBA8(0x57d8ffff);
    }
    FUN_0017ffa8(2, 0xb, sprite, x, y, flags);
    FUN_00183bb0();
}
}
