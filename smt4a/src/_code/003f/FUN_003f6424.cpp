/* NON_MATCHING: one operand differs (retail `movlt r0, fp` using hoisted 0 vs built `movlt r0, #0`). */
#include "common.h"
#include <stdio.h>
#include "gamedata/NkmBaseRecordA.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "code/Code0019.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* Demon/skill record shown in the panel: only the fields used here. */
struct PanelRecord {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 kindWord;       /* high byte = category */
    /* 0x04 */ u8 unk04[4];
};

extern "C" {

void efctSetSpeed(f32 speed);
void FUN_00169a1c(s32 sprite, s32 x, s32 y, s32 z);
const char* FUN_003f74a8(u32 id, PanelRecord* record);
void FUN_003f533c(u32 id, s32 x, s32 y, s32 z, u32 flags, s32 a, s32 b, s32 c, s32 d, s32 e, f32 scale);

/* Message group id for a record category, or -1 when it has none (same table as FUN_003f74a8). */
static __inline s32 elementMessageGroup(u32 kind)
{
    s32 id;
    switch (kind) {
    case 0: id = 0xae; break;
    case 1: id = 0xb2; break;
    case 2: id = 0xb0; break;
    case 3: id = 0xb1; break;
    case 4: id = 0xb3; break;
    case 5: id = 5; break;
    case 6: id = 0xba; break;
    case 7: id = 0xb9; break;
    case 8: id = 0xaf; break;
    case 9: id = 0xbb; break;
    default: id = -1; break;
    }
    return id;
}

/* The icon sprite of a record category, or 0 when it has none. */
static __inline s32 panelIconSprite(PanelRecord* record)
{
    if ((record->kindWord >> 8) == 10) {
        return 0;
    }
    u32 category = record->kindWord >> 8;
    s32 slot = elementMessageGroup(category);
    NkmBaseRecordA *icon = nkmBaseGetRecord(slot < 0 ? 0 : category == 9 ? 0x29d : dataTable10FindValue((u16)slot));
    if (icon == NULL) {
        return 0;
    }
    return icon->model;
}

/* Draws the panel row for one record at (x, y, z): frame, category icon, name and value. */
void FUN_003f6424(f32 scale, u32 id, PanelRecord* record, u32 flags, s32 x, s32 y, s32 z)
{
    efctSetSpeed(scale);
    texDrawTableEntryAtStoredOrigin(2, 0x31, 0x7b, x, y, z);
    texDrawTableEntryAtStoredOrigin(2, 0x31, 0x7c, x, y, z);
    TextureTableEntryIV* frame = asdTMTexTableEntryAt(0x31, 0x7d);
    s32 iconX = frame->x + x;
    s32 iconY = frame->y + y;

    s32 sprite = panelIconSprite(record);
    if (sprite == 0) {
        texDrawTableEntryAtStoredOrigin(2, 0x31, 4, iconX, iconY, z + 5);
    } else {
        FUN_00169a1c((u16)sprite, iconX, iconY, z + 5);
    }

    TextureTableEntryIV* nameBox = asdTMTexTableEntryAt(0x31, 0x7e);
    s32 nameX = nameBox->x + x;
    s32 nameY = nameBox->y + y;
    char text[64];
    sprintf(text, "%s", FUN_003f74a8(id, record));
    textDrawString((f32)nameX, (f32)nameY, (f32)(0xfb - z) * 0.00390625f, 2, 0.0f, 0xffffffff, scale, text);

    TextureTableEntryIV* valueBox = asdTMTexTableEntryAt(0x31, 0x83);
    s32 valueX = valueBox->x + x;
    s32 valueY = valueBox->y + y;
    textDrawString((f32)valueX, (f32)valueY, (f32)(0xfb - z) * 0.00390625f, 2, 0.0f,
                 0xff, scale, (const char*)record + 4);
    FUN_003f533c(id, x, y, z + 5, flags, 0x84, 0x85, 0x86, 0xff, 0, scale);
}

} /* extern "C" */
