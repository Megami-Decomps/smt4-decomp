#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "ui/MessageMain.h"

struct CounterPanel {
    u8 unk000[0x84];              // 0x000
    u32 mode;                     // 0x084
    u8 active;                    // 0x088
    u8 unk089[3];                 // 0x089
    u32 state;                    // 0x08C
    u16 count;                    // 0x090
    u16 displayCount;             // 0x092
    f32 countValue;               // 0x094
    u8 unk098[0xC];               // 0x098
    u8 spriteSource[0x8E0];       // 0x0A4
    SpritePlaybackView sprite;    // 0x984
};
typedef char CounterPanelLayoutCheck[
    offsetof(CounterPanel, mode) == 0x84 &&
    offsetof(CounterPanel, state) == 0x8C &&
    offsetof(CounterPanel, count) == 0x90 &&
    offsetof(CounterPanel, sprite) == 0x984 &&
    sizeof(CounterPanel) <= sizeof(MessagePanel) ? 1 : -1];

extern "C" {
extern MessageGlobals g_messageMain;

u16 gameDataBlocksGetCounter(void);
void FUN_002bd954(SpritePlaybackView *sprite, u32 value0, u32 value4, const void *source, u16 value38, f32 value20);
void pairSetFirstResetSecond(SpritePlaybackView *sprite, s32 value);
void spriteStartAnimationByIndex(SpritePlaybackView *sprite, s32 group);

/* Script command: opens the counter panel in mode 10 with the current counter value and starts its sprite animation. */
u32 scrCommOpenCounterPanel(void)
{
    CounterPanel *panel = reinterpret_cast<CounterPanel *>(g_messageMain.banner);

    panel->mode = 10;
    panel->state = 1;
    u16 counter = gameDataBlocksGetCounter();
    panel->count = counter;
    panel->displayCount = counter;
    panel->countValue = (f32)counter;
    panel->active = 1;
    FUN_002bd954(&panel->sprite, 14, 0xFFFFFFFF, panel->spriteSource, 11, 1.0f);
    pairSetFirstResetSecond(&panel->sprite, 0x11);
    spriteStartAnimationByIndex(&panel->sprite, 6);
    return 1;
}

} /* extern "C" */
