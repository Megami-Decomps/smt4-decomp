/* NON_MATCHING: readable rewrite compiles (219 vs 161 rows); retail unrolls the sprite bank loops and the row-state clears */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "common.h"

// UI sprite header (0x8c bytes each).
struct UiSprite {
    u8 unk00[0x8c];
};

// Item/skill list screen: its sprite pool and the state words cleared on init.
struct ListScreen {
    u8 unk0000[0x20];
    UiSprite sprites[0x42];     // 0x20: rows 0-9 icons, 10-59 columns, 60-65 buttons
    u8 unk2348[0xf0];
    u32 word2438;               // 0x2438
    u32 word243c;               // 0x243c
    u32 word2440;               // 0x2440
    u32 word2444;               // 0x2444
    u16 half2448;               // 0x2448
    u16 half244a;               // 0x244a
    u8 unk244c[4];
    u16 rowId[10];              // 0x2450
    u16 rowCount[10];           // 0x2464
    u32 rowValue[10];           // 0x2478
};

extern "C" {

extern u8 DAT_0052a40c;
extern u8 DAT_0052a418;
extern u8 DAT_0052a4b4;
extern u8 DAT_0052a544;
extern u8 DAT_0052a560;

void paramsClearPacket(void* screen);

void FUN_0014e188(void* sprite, s32 a, s32 b, void* owner, s32 c);
void FUN_00387240(void* sprite, s32 a, s32 index);
void FUN_0019e330(void* sprite, s32 a, s32 b);
void uiSpriteSelectAnim(void* sprite, s32 anim);

// One bank of ten sprites: spawn, bind to its element id and select the animation.
static void initBank(ListScreen* screen, s32 first, s32 type, s32 indexBias, s32 anim)
{
    for (s32 i = first; i < first + 10; i++) {
        FUN_0014e188(&screen->sprites[i], 0xc, type, screen, 2);
        FUN_00387240(&screen->sprites[i], 0xc, i + indexBias);
        uiSpriteSelectAnim(&screen->sprites[i], anim);
    }
}

// Initialises the list screen: clears its row state and creates its sprite banks.
void FUN_002b14c8(ListScreen* screen)
{
    screen->word243c = 0;
    screen->word2438 = 0;
    screen->word2444 = 0;
    screen->half2448 = 0;
    screen->half244a = 0;
    screen->word2440 = 0;
    u16* extra = reinterpret_cast<u16*>(reinterpret_cast<u8*>(screen) + 0x24a0);
    for (s32 i = 0; i < 10; i++) extra[i] = 0xffff;
    for (s32 i = 0; i < 10; i++) {
        screen->rowId[i] = 0xffff;
        screen->rowCount[i] = 0;
        screen->rowValue[i] = 0;
    }
    paramsClearPacket(screen);
    paramsInit(reinterpret_cast<UiResourceParameters *>(screen), &DAT_0052a40c, 0xc, &DAT_0052a418, 0x9c, &DAT_0052a4b4, 0x90, &DAT_0052a544, 0x1c,
               &DAT_0052a560, 0x40c);

    for (s32 i = 0; i < 10; i++) {
        FUN_0014e188(&screen->sprites[i], 0xc, 0, screen, 2);
        FUN_00387240(&screen->sprites[i], 0xc, i + 0xb);
        FUN_0019e330(&screen->sprites[i], 5, 0);
    }
    initBank(screen, 10, 4, 0x15, 2);
    initBank(screen, 0x14, 7, 1, 5);
    initBank(screen, 0x1e, 2, -9, 3);
    initBank(screen, 0x28, 4000, -0x13, 0xb);
    initBank(screen, 0x32, 0xfa6, -0x1d, 10);
    FUN_0014e188(&screen->sprites[0x3c], 0xc, 0, screen, 1);
    for (s32 i = 0x3d; i < 0x42; i++) {
        FUN_0014e188(&screen->sprites[i], 0xc, 0xf5 - i, screen, 1);
    }
}

} /* extern "C" */
