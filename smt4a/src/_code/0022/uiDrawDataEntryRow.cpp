#include "shard/S1ListPanel.h"
#include "shard/TextureDrawCall.h"

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
f32 vec2GetSpeed(const void *position);
void FUN_00164b5c(u32 layer, u32 group, s32 sprite, s32 x, s32 y, u32 priority);
const SpriteInfo *FUN_001834a4(u32 group, u32 sprite);
void FUN_0021b390(EntryListScreen *screen, u32 entry, s32 field, char *text);
void FUN_00162790(u32 font, u32 color, const char *text, f32 x, f32 y, f32 z, f32 width, f32 height);

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
        FUN_00164b5c(2, 0x1a, 0x12, x, y, 0x65);
        FUN_001835b4(2, 0x1a, 0x95, x, y, 0x6a);
        if (field >= 0) {
            efctSetSpeed(vec2GetSpeed(screen->rowPosition));
            FUN_001835b4(2, 0x1a, 0x97, x, y, 0x6d);
            efctSetSpeed(baseSpeed);
            FUN_001835b4(2, 0x1a, 0x91, x, y, 0x6f);
        } else {
            efctSetSpeed(vec2GetSpeed(screen->rowPosition));
            FUN_001835b4(2, 0x1a, 0x96, x, y, 0x6f);
            efctSetSpeed(baseSpeed);
        }
        nameColor = 0xff;
        detailColor = 0x9fe7ffff;
    } else {
        FUN_00164b5c(2, 0x1a, 0x11, x, y, 0x65);
        FUN_001835b4(2, 0x1a, 0x90, x, y, 0x6a);
        if (field >= 0) {
            FUN_001835b4(2, 0x1a, 0x91, x, y, 0x6f);
        }
        nameColor = 0xffffffff;
        detailColor = 0xffffffff;
    }
    const char *name = dataTableGetEntry24Member(screen->entries[index]);
    const SpriteInfo *namePos = FUN_001834a4(0x1a, 0xa4);
    FUN_00162790(2, nameColor, name, namePos->x + x, namePos->y + y, 0.55f, 0.0f, baseSpeed * speed);
    const SpriteInfo *detailPos = FUN_001834a4(0x1a, 0xa6);
    FUN_0021b390(screen, entry, field, detail);
    FUN_00162790(2, detailColor, detail, detailPos->x + x, detailPos->y + y, 0.55f, 0.0f, baseSpeed * speed);
}
}
