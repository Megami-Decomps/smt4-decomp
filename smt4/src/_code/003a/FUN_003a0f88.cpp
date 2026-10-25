/* NON_MATCHING: register allocation only (retail keeps the y offset in r7 and the constant 1 in r9, ours the other way round, so the two stack-argument stores use strd instead of stm; the frame setup order differs likewise) */
#include "camp/RenderCtx.h"

/* The position record the sprite table returns for an id. */
struct SpritePosition {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

/* One 0x74-byte choice entry of the panel (observed prefix only). */
struct ChoicePanelEntry {
    /* 0x00 */ u8 unk00[0x74];
};

/* A choice panel with its draw context at +0x394 (observed fields). */
struct ChoicePanel {
    /* 0x000 */ u8 unk000[0x37C];
    /* 0x37C */ s32 baseDepth;
    /* 0x380 */ u8 unk380[0x14];
    /* 0x394 */ u8 sprites[0x4CC];
    /* 0x860 */ s32 kind;
    /* 0x864 */ u8 unk864[4];
    /* 0x868 */ s32 value;
    /* 0x86C */ s32 selected;
    /* 0x870 */ u8 unk870[8];
    /* 0x878 */ u8 showFirstMark;
    /* 0x879 */ u8 showSecondMark;
    /* 0x87A */ u8 unk87A[6];
    /* 0x880 */ ChoicePanelEntry entries[1];
};

extern "C" {

extern RenderCtx *g_titleScene;

u32 flaggedEntryGetValueByState(const ChoicePanelEntry *entry);
const SpritePosition *FUN_002bf4f0(void *sprites, u32 id);
void uiRectDrawAtBottomRight(void *sprites, s32 mode, s32 x, s32 y, s32 depth);
void FUN_00231bcc(void *sprites, u32 image, s32 x, s32 y, s32 depth, u32 flags);
void textFormatBuffer(char *buffer, const char *format, ...);
void drawTextAtRelativePosition(void *sprites, s32 a, s32 x, s32 y, s32 b, u32 mode, u32 color, s32 depth,
                                const char *text);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);

/* Draws one choice of the panel: its frame, the marks it carries and its number. */
void FUN_003a0f88(ChoicePanel *panel)
{
    char number[36];
    s32 depth = panel->baseDepth + 6;
    s32 step = 2;
    s32 kind = panel->kind;

    if (kind == 7 || kind == 8) {
        step = 1;
    }
    const SpritePosition *frame = FUN_002bf4f0(panel->sprites, flaggedEntryGetValueByState(&panel->entries[kind]) + step + 0x4f);
    s32 frameX = frame->x;
    s32 frameY = frame->y;
    const SpritePosition *origin = FUN_002bf4f0(panel->sprites, 200);
    s32 x = origin->x + frameX;
    s32 y = frameY + origin->y;
    if (panel->kind == 8) {
        uiRectDrawAtBottomRight(panel->sprites, 9, x, y, depth);
    } else {
        uiRectDrawAtBottomRight(panel->sprites, 8, x, y, depth);
    }
    FUN_00231bcc(panel->sprites, 0xc2, x, y, depth, 1);
    FUN_00231bcc(panel->sprites, 0xc3, x, y, depth, 1);
    renderCtxPushB(g_titleScene, packNibblesAndByte(6, 1, 0));
    if (panel->showFirstMark != 0) {
        FUN_00231bcc(panel->sprites, 0xc4, x, y, depth + 1, 1);
    }
    if (panel->showSecondMark != 0) {
        FUN_00231bcc(panel->sprites, 0xc5, x, y, depth + 1, 1);
    }
    renderStackPop(&g_titleScene->stackB);
    s32 value = panel->value;
    const SpritePosition *numberPos = FUN_002bf4f0(panel->sprites, 199);
    u32 color = 0xffffffff;
    if (panel->value == panel->selected) {
        color = 0xf49800ff;
    }
    textFormatBuffer(number, "%2d", value);
    drawTextAtRelativePosition(panel->sprites, 0, x + numberPos->x, y + numberPos->y, 0, 7, color, depth, number);
}

}
