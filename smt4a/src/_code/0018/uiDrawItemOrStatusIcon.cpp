/* NON_MATCHING: the placeholder cell is derived from its icon id like the record cells (retail's four separate mov/str now match); only register assignment differs (x in r9 vs sl, placeholder id loaded predicated after the flag test in retail). */
#include "common.h"
#include "gamedata/NkmBaseRecordA.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "shard/W5_W5Match7_EntrySort.h"
#include "gamedata/NkmEnemyLookup.h"

/* The icon sheet cell to draw: source x range, then y range. */
struct IconRect {
    s32 left;
    s32 right;
    s32 top;
    s32 bottom;
};

struct SlotRecord {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u16 flags;
};

extern "C" {
extern u32 g_aocSystem;
s32 gameFlagIsSet(u32 flag);
void texDrawTableEntryAtStoredOrigin(s32 layer, s32 group, s32 image, s32 x, s32 y, s32 priority);
void FUN_001849bc(s32 layer, s32 group, s32 image, s32 x, s32 y, s32 priority, const IconRect *rect);
SlotRecord *slotRecordFindById(u16 id);
u32 markerKindGetColor(s32 kind);
void drawSetColorFromRGBA8(u32 color);
void gxResetColorQuadToWhite(void);

// Draw an item or status icon (id < 0: the placeholder), optionally tinted when the unit's slot is marked.
void uiDrawItemOrStatusIcon(s32 id, s32 x, s32 y, s32 z, s32 tint)
{
    if (id < 0) {
        if (gameFlagIsSet(17) != 0) {
            texDrawTableEntryAtStoredOrigin(2, 27, 1000, x, y, z);
            return;
        }
        s32 placeholder = 0x25D;
        if (FUN_00191f18(g_aocSystem, placeholder) != 0) {
            FUN_00191ea8(g_aocSystem, placeholder, x, y, z);
            return;
        }
        s32 icon = placeholder - 0x200;
        IconRect rect;
        rect.left = icon / 16 * 16;
        rect.right = rect.left + 16;
        rect.top = icon % 16 * 32;
        rect.bottom = rect.top + 32;
        FUN_001849bc(2, 27, 3000, x, y, z, &rect);
        return;
    }
    NkmBaseRecordA *record = nkmBaseGetRecord((u16)id);
    if ((nkmEnemyFindById((u16)id)->level & 0x8000) != 0) {
        texDrawTableEntryAtStoredOrigin(2, 27, 2000, x, y, z);
        return;
    }
    if (tint != 0) {
        SlotRecord *slot = slotRecordFindById((u16)id);
        if (slot != NULL && (slot->flags & 2) != 0) {
            drawSetColorFromRGBA8(markerKindGetColor(1));
        }
    }
    if (FUN_00191f18(g_aocSystem, record->model) != 0) {
        FUN_00191ea8(g_aocSystem, record->model, x, y, z);
    } else {
        const s32 image = record->model;
        if (image < 0x200) {
            IconRect rect;
            rect.left = image / 16 * 16;
            rect.right = rect.left + 16;
            rect.top = image % 16 * 32;
            rect.bottom = rect.top + 32;
            FUN_001849bc(2, 27, 0, x, y, z, &rect);
        } else {
            s32 icon = image - 0x200;
            IconRect rect;
            rect.left = icon / 16 * 16;
            rect.right = rect.left + 16;
            rect.top = icon % 16 * 32;
            rect.bottom = rect.top + 32;
            FUN_001849bc(2, 27, 3000, x, y, z, &rect);
        }
    }
    if (tint != 0) {
        gxResetColorQuadToWhite();
    }
}

}
