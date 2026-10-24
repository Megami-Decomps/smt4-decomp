/* NON_MATCHING: atlas-region address hoisting, top-field reload elimination and coordinate-store scheduling differ by three rows; -O2 may preserve the retail shape. */
#include "shard/W6_W6Match5_DevilSort.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "addon/aocMain.h"

struct DemonIconRecord {
    DevilSortRecord key;
    u8 unk04[0x8c];
    u16 image;
    u16 unk92;
};

struct DemonIconDefinition {
    u16 id;
    u8 unk02;
    u8 flags;
};

struct DemonIconPartyUnit {
    union {
        BtlUnitLink link;
        struct {
            u8 unk00[0x44];
            u16 flags;
        } state;
    };
};

struct DemonIconRect {
    s32 left;
    s32 right;
    s32 top;
    s32 bottom;
};

extern "C" {
extern AocSystem* g_aocSystem;
const DemonIconDefinition* dataTable00FindById(u16 id);
BtlUnitLink* partyMemberFindById(u32 id);
u32 categoryGetColor(s32 category);
void drawSetColorFromRGBA8(u32 color);
u32 FUN_0014143c(AocSystem* system, u32 image);
void effectSubmitPackageRequest(AocSystem* system, u32 image, s32 x, s32 y, u32 style);
void FUN_002bf288(s32 layer, u32 group, u32 image, s32 x, s32 y, u32 style);
void FUN_002b04e8(s32 layer, u32 group, u32 image, s32 x, s32 y, u32 style,
                  const DemonIconRect* region);
void FUN_002bed3c(void);

void uiDrawDemonIcon(u32 demon, s32 x, s32 y, u32 style, s32 highlight)
{
    if ((s32)demon < 0) {
        FUN_002bf288(2, 0x25, 1000, x, y, style);
        return;
    }

    const DemonIconRecord* record = (const DemonIconRecord*)devilGetRecord((u16)demon);
    const DemonIconDefinition* definition = dataTable00FindById((u16)demon);
    if ((definition->flags & 1) != 0) {
        FUN_002bf288(2, 0x25, 2000, x, y, style);
        return;
    }

    if (highlight != 0) {
        const DemonIconPartyUnit* unit = (const DemonIconPartyUnit*)partyMemberFindById(demon & 0xffff);
        if (unit != NULL && (unit->state.flags & 2) != 0) {
            drawSetColorFromRGBA8(categoryGetColor(1));
        }
    }

    if (FUN_0014143c(g_aocSystem, record->image) != 0) {
        effectSubmitPackageRequest(g_aocSystem, record->image, x, y, style);
    } else {
        const s32 image = record->image;
        DemonIconRect region;
        if (image < 0x200) {
            region.left = (image / 16) * 16;
            region.right = region.left + 16;
            region.top = (image % 16) * 32;
            region.bottom = region.top + 32;
            FUN_002b04e8(2, 0x25, 0, x, y, style, &region);
        } else {
            const s32 index = image - 0x200;
            region.left = (index / 16) * 16;
            region.right = region.left + 16;
            region.top = (index % 16) * 32;
            region.bottom = region.top + 32;
            FUN_002b04e8(2, 0x25, 3000, x, y, style, &region);
        }
    }
    if (highlight != 0) {
        FUN_002bed3c();
    }
}
}
