/* NON_MATCHING: readable rewrite from retail disassembly compiles (221 vs ~221 rows); frame size and register assignment of the helper-inlined ring operations differ */
#include "common.h"
#include "shard/TextureDrawCall.h"

// Render-state stack: the current entry is slots[index]; the flush callback runs when the
// value changed (or a flush is already pending).
struct DrawStateRing {
    s32 index;              // 0x00
    u32 unk04;
    u32 slots[4];           // 0x08
    u8 dirty;               // 0x18
    u8 pad19[3];
    void (*flush)(void);    // 0x1c
};

struct TitleScene {
    u8 unk0000[0x124c];
    DrawStateRing stateRing;    // 0x124c
    u8 unk126c[0x12ac - 0x126c];
    DrawStateRing blendRing;    // 0x12ac
};

// Quest screen: the state, the cursor vector and the shown skill category.
struct QuestUi {
    u8 unk000[4];
    s32 state;              // 0x004
    u8 unk008[0x408 - 8];
    u8 pointer[8];          // 0x408
    u8 unk410[0x5f0 - 0x410];
    u8 revealed;            // 0x5f0
    u8 unk5f1[0x97e - 0x5f1];
    u16 category;           // 0x97e
};

extern "C" {

extern TitleScene* g_titleScene;
extern QuestUi* g_uiQuest;

void FUN_002c39a4(TitleScene* scene);
u32 FUN_002c5d80(u32 a, u32 b);
void FUN_00197e34(void);
void FUN_00186a48(void);
f32 renderCtxCalculateStereoParallax(TitleScene* scene, f32 amount);
s32 vec2GetXInt(void* vec);
s32 vec2GetYInt(void* vec);
void uiFadeDraw(u32 id);
void* FUN_002bf4f8(u32 group, u32 index);
void drawSkillCategoryLabel(u16 id, s32 x, s32 y, u32 arg);
u32 FUN_002bcddc(u16 id, u32 arg);
void textFormatBuffer(char* out, const char* format, ...);
void FUN_002be5a4(s32 a, s32 b, const char* text, f32 x, f32 y, f32 scale, f32 rotation, f32 alpha);
void effectRenderTransformedInstance(void* vec, f32 amount);
u32 packNibblesAndByte(u32 a, u32 b, u32 c);
void FUN_002c198c(TitleScene* scene);
void FUN_002c18e4(TitleScene* scene);

struct SpriteRect {
    u8 unk00[8];
    s16 x;                  // 0x08
    s16 y;                  // 0x0a
};

static void ringPush(DrawStateRing* ring, u32 value)
{
    s32 index = ring->index;
    u32 previous = ring->slots[index];
    ring->index = index + 1;
    ring->slots[index + 1] = value;
    if (ring->dirty != 0 || previous != value) {
        ring->flush();
        ring->dirty = 0;
    }
}

static void ringPop(DrawStateRing* ring)
{
    s32 index = ring->index;
    u32 previous = ring->slots[index];
    ring->index = index - 1;
    if (ring->dirty != 0 || previous != ring->slots[index - 1]) {
        ring->flush();
        ring->dirty = 0;
    }
}

static void ringReplace(DrawStateRing* ring, u32 value)
{
    u32 previous = ring->slots[ring->index];
    ring->slots[ring->index] = value;
    if (ring->dirty != 0 || previous != value) {
        ring->flush();
        ring->dirty = 0;
    }
}

// Draws the quest screen's skill-category panel (states 0x14-0x16) or hands the other quest
// states to their shared drawers, with the title scene's render state pushed around it.
u32 FUN_001ad9f0(void)
{
    QuestUi* quest = g_uiQuest;
    FUN_002c39a4(g_titleScene);
    ringPush(&g_titleScene->stateRing, FUN_002c5d80(1, 0));
    switch (quest->state) {
    case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
    case 11: case 12: case 13: case 14: case 15: case 16:
    case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30:
        FUN_00197e34();
        break;
    case 17: case 18: case 19:
        FUN_00186a48();
        break;
    case 20: case 21: case 22: {
        if (quest->revealed == 0) FUN_00197e34();
        quest = g_uiQuest;
        s32 shift = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
        void* pointer = quest->pointer;
        s32 x = vec2GetXInt(pointer);
        s32 y = vec2GetYInt(pointer);
        u16 category = quest->category;
        if (quest->revealed == 0) uiFadeDraw(0x92);
        x += shift;
        FUN_002bf288(2, 0x29, 0x57, x, y, 0x97);
        FUN_002bf288(2, 0x29, 0x58, x, y, 0x97);
        FUN_002bf288(2, 0x29, 0x59, x, y, 0x97);
        FUN_002bf288(2, 0x29, 0x51, x, y, 0xa1);
        SpriteRect* labelRect = static_cast<SpriteRect*>(FUN_002bf4f8(0x29, 0x54));
        drawSkillCategoryLabel(category, labelRect->x + x, labelRect->y + y, 0xa6);
        SpriteRect* nameRect = static_cast<SpriteRect*>(FUN_002bf4f8(0x29, 0x55));
        char text[64];
        textFormatBuffer(text, "%s", FUN_002bcddc(category, 0));
        FUN_002be5a4(3, -1, text, (f32)(nameRect->x + x), (f32)(nameRect->y + y), 0.375f, 0.0f, 1.0f);
        effectRenderTransformedInstance(pointer, (f32)(s32)renderCtxCalculateStereoParallax(g_titleScene, 0.28f));
        break;
    }
    default:
        break;
    }
    ringPop(&g_titleScene->stateRing);
    ringReplace(&g_titleScene->blendRing, packNibblesAndByte(6, 7, 0));
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
    return 0;
}

} /* extern "C" */
