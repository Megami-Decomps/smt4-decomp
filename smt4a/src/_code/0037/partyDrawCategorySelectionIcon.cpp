#include "shard/W6_W6Match5_RecordCallParameters.h"
#include "common.h"
#include "code/Code001b.h"
#include "quest_center/QuestRecordA.h"

struct PartyCategoryRecord {
    u8 unk00[6];
    u8 category;
};

extern "C" {
s32 questIsCompleted(s32 id);
s32 idIsAtLeast350(s32 id);
void drawSetColorFromRGBA8(u32 color);

void gxResetColorQuadToWhite();

// Select a party member's category icon, using its highlighted variant when flag 3 is set.
void partyDrawCategorySelectionIcon(s32 id, u32 x, u32 y, u32 flags)
{
    u32 sprite = 0;
    s32 highlighted = questIsCompleted(id);
    if (dataTable1bOr1cRecordHasFlag1(id)) {
        sprite = highlighted ? 0x40f : 0x408;
    } else if (!idIsAtLeast350(id)) {
        switch (reinterpret_cast<PartyCategoryRecord *>(questDataGetRecord(id))->category) {
        case 0:
            sprite = highlighted ? 0x40a : 0x403;
            break;
        case 1:
        case 6:
            sprite = highlighted ? 0x40b : 0x404;
            break;
        case 4:
        case 5:
            sprite = highlighted ? 0x40c : 0x405;
            break;
        case 2:
        case 3:
            sprite = highlighted ? 0x40d : 0x406;
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
    } else {
        sprite = highlighted ? 0x41b : 0x41a;
    }
    if (highlighted) {
        drawSetColorFromRGBA8(0x57d8ffff);
    }
    texTableRecordCallWithParams(2, 0xb, sprite, x, y, flags);
    gxResetColorQuadToWhite();
}
}
