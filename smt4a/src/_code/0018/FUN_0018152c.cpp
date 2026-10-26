/* NON_MATCHING: the placeholder rectangle is stored with one stm (retail: four separate mov/str) and the constant/global registers are assigned differently (x in r9 vs sl). */
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "shard/W5_W5Match7_EntrySort.h"
#include "gamedata/Table00Lookup.h"

/* The icon sheet cell to draw: source x range, then y range. */
struct IconRect {
    s32 left;
    s32 right;
    s32 top;
    s32 bottom;
};

struct IconRecord {
    /* 0x00 */ u8 unk00[0x9C];
    /* 0x9C */ u16 icon;
};


struct SlotRecord {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u16 flags;
};

extern "C" {
extern u32 g_aocSystem;
s32 gameFlagIsSet(u32 flag);
void FUN_001835b4(s32 layer, s32 group, s32 image, s32 x, s32 y, s32 priority);
void FUN_001849bc(s32 layer, s32 group, s32 image, s32 x, s32 y, s32 priority, const IconRect *rect);
IconRecord *FUN_00184310(u16 id);
SlotRecord *slotRecordFindById(u16 id);
u32 markerKindGetColor(s32 kind);
void drawSetColorFromRGBA8(u32 color);
void FUN_00183bb0(void);

// Draw an item or status icon (id < 0: the placeholder), optionally tinted when the unit's slot is marked.
void FUN_0018152c(s32 id, s32 x, s32 y, s32 z, s32 tint)
{
    if (id < 0) {
        if (gameFlagIsSet(17) != 0) {
            FUN_001835b4(2, 27, 1000, x, y, z);
            return;
        }
        s32 placeholder = 0x25D;
        if (FUN_00191f18(g_aocSystem, placeholder) != 0) {
            FUN_00191ea8(g_aocSystem, placeholder, x, y, z);
            return;
        }
        IconRect rect;
        rect.left = 0x50;
        rect.right = 0x60;
        rect.top = 0x1A0;
        rect.bottom = 0x1C0;
        FUN_001849bc(2, 27, 3000, x, y, z, &rect);
        return;
    }
    IconRecord *record = FUN_00184310((u16)id);
    if ((dataTable00FindById((u16)id)->level & 0x8000) != 0) {
        FUN_001835b4(2, 27, 2000, x, y, z);
        return;
    }
    if (tint != 0) {
        SlotRecord *slot = slotRecordFindById((u16)id);
        if (slot != NULL && (slot->flags & 2) != 0) {
            drawSetColorFromRGBA8(markerKindGetColor(1));
        }
    }
    if (FUN_00191f18(g_aocSystem, record->icon) != 0) {
        FUN_00191ea8(g_aocSystem, record->icon, x, y, z);
    } else if (record->icon < 0x200) {
        s32 icon = record->icon;
        IconRect rect;
        rect.left = icon / 16 * 16;
        rect.right = rect.left + 16;
        rect.top = icon % 16 * 32;
        rect.bottom = rect.top + 32;
        FUN_001849bc(2, 27, 0, x, y, z, &rect);
    } else {
        s32 icon = record->icon - 0x200;
        IconRect rect;
        rect.left = icon / 16 * 16;
        rect.right = rect.left + 16;
        rect.top = icon % 16 * 32;
        rect.bottom = rect.top + 32;
        FUN_001849bc(2, 27, 3000, x, y, z, &rect);
    }
    if (tint != 0) {
        FUN_00183bb0();
    }
}

}
