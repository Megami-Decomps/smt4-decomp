/* NON_MATCHING: scheduling only: the prologue moves of count/color come after the compare in retail, the last call stores its stack arguments with one stm, and the literal pool puts "%d" after the empty-slot string */
#include "skill/SkillSlotScreen.h"
#include "shard/S1ListPanel.h"

extern "C" {

void textFormatBuffer(char *buffer, const char *format, ...);
void FUN_00162790(u32 font, u32 color, const char *text, f32 x, f32 y, f32 z, f32 width, f32 height);
void FUN_00180310(u32 layer, s32 x, s32 y, u32 enabled, u32 flags, u32 mode, const void *table, s32 value);
const SpriteInfo *FUN_001834a4(u32 group, u32 sprite);
void FUN_001835b4(u32 flags, u32 group, s32 sprite, s32 x, s32 y, u32 layer);
void FUN_00185e84(s16 id, s32 x, s32 y, u32 layer, u32 a, u32 b);
void statDrawClampedDelta(u32 unit, s16 id, s32 x, s32 y, u32 layer, u32 a);
void FUN_004bd6b0(u32 unit, u16 id, s32 index);
const char *FUN_0014bd84(u16 id);
s32 recordContainsPairedId(u32 unit, u16 id);
u32 FUN_004bcbb4(u32 unit, u16 id);

/* Draws one skill row of the skill screen: the skill's name, icon and cost, or the empty-slot label. */
void FUN_003c33e8(SkillSlotScreen *screen, s32 index, u32 unit, s32 count, s32 x, s32 y, f32 effect)
{
    char text[64];
    u32 color = 0xffffffff;

    if (screen->slots[index] == 0) {
        textFormatBuffer(text, "\x81\x7c \x81\x7c \x81\x7c");
        const SpriteInfo *label = FUN_001834a4(0x1a, 0x178);
        FUN_00162790(2, 0xffffffff, text, label->x + x, label->y + y, 0.0f, 0.0f, effect);
        return;
    }
    FUN_001835b4(2, 0x1a, 0x174, x, y, 0x6a);
    FUN_001835b4(2, 0x1a, 0x175, x, y, 0x6a);
    FUN_001835b4(2, 0x1a, 0x176, x, y, 0x6f);
    if (index < count - screen->freedCount) {
        color = 0x9fe7ffff;
    }
    textFormatBuffer(text, "%s", FUN_0014bd84(screen->slots[index]));
    const SpriteInfo *label = FUN_001834a4(0x1a, 0x178);
    FUN_00162790(2, color, text, label->x + x, label->y + y, 0.0f, 0.0f, effect);
    const SpriteInfo *icon = FUN_001834a4(0x1a, 0x177);
    FUN_00185e84(screen->slots[index], icon->x + x, icon->y + y, 0x74, 0, 0);
    if (recordContainsPairedId(unit, screen->slots[index]) == 0) {
        FUN_004bd6b0(unit, screen->slots[index], index);
    }
    statDrawClampedDelta(unit, screen->slots[index], icon->x + x, icon->y + y, 0x74, 0);
    const SpriteInfo *cost = FUN_001834a4(0x1a, 0x17c);
    FUN_00180310(1, cost->x + x, cost->y + y, 1, 4, 0x79, "%d", FUN_004bcbb4(unit, screen->slots[index]));
}

} /* extern "C" */
