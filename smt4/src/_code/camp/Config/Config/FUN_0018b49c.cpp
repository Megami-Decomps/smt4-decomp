/* NON_MATCHING: readable rewrite compiles (177 vs 166 rows); retail frame is 84 bytes with the label text buffer placed differently and the draw-state helper not inlined the same way */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "util/FUN_0029efa8.h"

// Title/menu scene: the draw-state ring the config screen writes into.
struct TitleScene {
    u8 unk0000[0x12ac];
    s32 ringIndex;          // 0x12ac
    s32 ring[6];            // 0x12b0
    u8 dirty;               // 0x12c4
    u8 unk12c5[3];
    void (*flush)(void);    // 0x12c8
};

struct LayoutEntry {
    u8 unk00[8];
    s16 x;                  // 0x08
    s16 y;                  // 0x0a
};

struct ConfigMenu {
    u8 unk00[0x80];
    u32 cursorValues[8];    // 0x80
    u8 unk_a0[8];
    u8 mode;                // 0xa8
};

extern "C" {

extern ConfigMenu* g_config;
extern TitleScene* g_titleScene;

s32 FUN_0029efc0(ConfigMenu* menu);
void FUN_002bf380(s32 a, s32 b, s32 c, s32 x, s32 y, s32 d);
LayoutEntry* asdTMTexTableEntryAt(u32 group, u32 index);
s32 packNibblesAndByte(u32 a, u32 b, u32 c);
s32 gameFlagIsSet(u32 flag);
u32 dataTableGet(u32 table, u32 arg);
u8* dataTableGetEntries(void);
u32 dataTableGetCount(u32 table);
void textFormatBuffer(u8* out, const char* format, ...);
void textDrawString(s32 a, u32 color, u8* text, s32 b, f32 x, f32 y);
void FUN_00196fe8(s32 kind, s32 x, s32 y, u32 value, u8* label);

extern const char LAB_0018b754[];

// Records a draw state in the title scene's ring and flushes it when it changed.
static void setDrawState(s32 value)
{
    TitleScene* scene = g_titleScene;
    s32* slot = &scene->ringIndex;
    s32 previous = slot[*slot + 2];
    slot[*slot + 2] = value;
    if (scene->dirty != 0 || previous != value) {
        scene->flush();
        scene->dirty = 0;
    }
}

// Draws one config option row at (x, y): the frame, its label and cursor value.
void FUN_0018b49c(s32 x, s32 y)
{
    ConfigMenu* menu = g_config;
    FUN_0029efc0(menu);
    FUN_0029efa8(menu);
    FUN_002bf380(2, 0x2f, 0, x, y, 0xb);
    u32 color = 0xe09800ff;
    LayoutEntry* frame = asdTMTexTableEntryAt(0x2f, 0x20);
    s32 rowX = frame->x + x;
    s32 rowY = frame->y + y;
    setDrawState(packNibblesAndByte(6, 1, 0));
    FUN_002bf288(2, 0x2f, 0xc, rowX, rowY, 0xb);
    setDrawState(packNibblesAndByte(6, 7, 0));
    FUN_002bf380(2, 0x2f, 1, rowX, rowY, 0x10);

    u32 variant = 0xffffffff;
    if (gameFlagIsSet(0x555) && gameFlagIsSet(0x557)) {
        variant = 2;
    } else if (gameFlagIsSet(0x557)) {
        variant = 1;
    } else if (gameFlagIsSet(0x555)) {
        variant = 0;
    }
    u32 table = dataTableGet(0x36, 0);
    u8* entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);
    if (variant < count && (entries + variant * 0x80) != NULL) {
        u8* entry = entries + variant * 0x80;
        LayoutEntry* label = asdTMTexTableEntryAt(0x2f, 0x1a);
        u8 text[64];
        textFormatBuffer(text, LAB_0018b754, entry);
        textDrawString(2, color, text, label->x, (f32)(frame->x + label->x + x), (f32)(frame->y + label->y + y));
        s32 kind = (menu->mode != 1) ? 2 : 3;
        u32 value = menu->cursorValues[FUN_0029efc0(menu)];
        FUN_00196fe8(kind, frame->x + x, frame->y + y, value, entry);
    }
}

} /* extern "C" */
