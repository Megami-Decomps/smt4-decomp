#include "shard/S1ListPanel.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/UiSpriteApi.h"

/* A list screen whose rows draw data-table entries (observed fields). */
struct EntryListScreen {
    /* 0x000 */ u8 unk000[0x13C];
    /* 0x13C */ u8 rowPosition[0x24]; /* a position object; its speed scales the row's icons */
    /* 0x160 */ u8 unk160[0x911C];
    /* 0x927C */ u32 entries[1];
};

extern "C" {
u32 dataTableGetEntry24Byte0(u32 id);
const char *dataTableGetEntry24Member(u32 id);
s32 selectionGetValidatedField(void);
void efctSetSpeed(f32 speed);
void texDrawCompositeSprite(u32 layer, u32 group, s32 sprite, s32 x, s32 y, u32 priority);
void contentFormatEntryName(EntryListScreen *screen, u32 entry, s32 field, char *text);

/* Draws one row of the list: its frame and icons, the entry's name and its detail text. */
void uiDrawDataEntryRow(EntryListScreen *screen, s32 index, s32 x, s32 y, f32 baseSpeed, f32 speed, s32 selected)
{
    char detail[64];
    u32 entry = dataTableGetEntry24Byte0(screen->entries[index]);
    s32 field = selectionGetValidatedField();
    u32 nameColor;
    u32 detailColor;

    efctSetSpeed(speed);
    if (selected != 0) {
        texDrawCompositeSprite(2, 0x1a, 0x12, x, y, 0x65);
        texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x95, x, y, 0x6a);
        if (field >= 0) {
            efctSetSpeed(vec2GetSpeed((const UiSpriteState *)screen->rowPosition));
            texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x97, x, y, 0x6d);
            efctSetSpeed(baseSpeed);
            texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x91, x, y, 0x6f);
        } else {
            efctSetSpeed(vec2GetSpeed((const UiSpriteState *)screen->rowPosition));
            texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x96, x, y, 0x6f);
            efctSetSpeed(baseSpeed);
        }
        nameColor = 0xff;
        detailColor = 0x9fe7ffff;
    } else {
        texDrawCompositeSprite(2, 0x1a, 0x11, x, y, 0x65);
        texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x90, x, y, 0x6a);
        if (field >= 0) {
            texDrawTableEntryAtStoredOrigin(2, 0x1a, 0x91, x, y, 0x6f);
        }
        nameColor = 0xffffffff;
        detailColor = 0xffffffff;
    }
    const char *name = dataTableGetEntry24Member(screen->entries[index]);
    const TextureTableEntryIV *namePos = asdTMTexTableEntryAt(0x1a, 0xa4);
    textDrawString(2, nameColor, name, namePos->x + x, namePos->y + y, 0.55f, 0.0f, baseSpeed * speed);
    const TextureTableEntryIV *detailPos = asdTMTexTableEntryAt(0x1a, 0xa6);
    contentFormatEntryName(screen, entry, field, detail);
    textDrawString(2, detailColor, detail, detailPos->x + x, detailPos->y + y, 0.55f, 0.0f, baseSpeed * speed);
}
}
