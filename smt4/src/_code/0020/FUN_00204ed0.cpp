/* NON_MATCHING: sprite coordinate loads/adds and initial VFP frame setup remain scheduled differently. */
#include "shard/S1ListPanel.h"
#include "text/TextDraw.h"
#include "addon/AocSystem_Smt4.h"

extern "C" {

const SpriteInfo *asdTMTexTableEntryAt(u32 group, u32 sprite);
void FUN_002bf380(s32 layer, s32 group, s32 id, s32 x, s32 y, s32 size);
void FUN_002bdf94(u32 layer, s32 x, s32 y, u32 enabled, u32 flags, u32 mode, const char *text);
void FUN_002b6c34(s16 id, s32 x, s32 y, s32 size, s32 a, s32 b);
void textFormatBuffer(char *buffer, const char *format, ...);

/* Draws one registration entry: its frame, name, icon and number, or the empty-entry labels when
 * `id` is 0. */
void FUN_00204ed0(s32 x, s32 y, s32 id, u32 frame, u32 color)
{
    char text[64];
    const SpriteInfo *base = asdTMTexTableEntryAt(0x1a, frame);

    FUN_002bf380(2, 0x1a, 0x19, base->x + x, base->y + y, 0xb5);
    if (id != 0) {
        const SpriteInfo *namePos = asdTMTexTableEntryAt(0x1a, 0x40f);
        textFormatBuffer(text, "%s", aocIndexValueOrDefault(id));
        textDrawString(2, color, text, namePos->x + base->x + x, base->y + namePos->y + y, 0.29296875f, 0.0f, 1.0f);
        const SpriteInfo *iconPos = asdTMTexTableEntryAt(0x1a, 0x40e);
        FUN_002b6c34(id, iconPos->x + base->x + x, base->y + iconPos->y + y, 0xb5, 0, 0);
        const SpriteInfo *numberPos = asdTMTexTableEntryAt(0x1a, 0x521);
        textFormatBuffer(text, "%d", FUN_0028d1f4(id));
        FUN_002bdf94(0, base->x + numberPos->x + x, base->y + numberPos->y + y, 1, 8, 0xb5, text);
        return;
    }
    const SpriteInfo *namePos = asdTMTexTableEntryAt(0x1a, 0x40f);
    textFormatBuffer(text, "\x82m\x82\x85\x82\x97\x81@\x82\x92\x82\x85\x82\x87\x82\x89\x82\x93\x82\x94\x82\x92\x82\x81\x82\x94\x82\x89\x82\x8f\x82\x8e\x81@\x82\x90\x82\x8f\x82\x93\x82\x93\x82\x89\x82\x82\x82\x8c\x82\x85\x81I");
    textDrawString(2, 0x5a5a5aff, text, namePos->x + base->x + x, base->y + namePos->y + y, 0.29296875f, 0.0f, 1.0f);
    const SpriteInfo *numberPos = asdTMTexTableEntryAt(0x1a, 0x521);
    textFormatBuffer(text, "---");
    FUN_002bdf94(0, base->x + numberPos->x + x, base->y + numberPos->y + y, 1, 8, 0xb5, text);
}

}
