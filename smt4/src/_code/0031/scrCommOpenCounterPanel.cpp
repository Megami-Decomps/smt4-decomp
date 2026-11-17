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
    UiResourceParameters spriteSource; // 0x0A4
    u8 unk0C4[0x8C0];             // 0x0C4
    UiSpriteState sprite;         // 0x984
};
typedef char CounterPanelLayoutCheck[
    offsetof(CounterPanel, mode) == 0x84 &&
    offsetof(CounterPanel, state) == 0x8C &&
    offsetof(CounterPanel, count) == 0x90 &&
    offsetof(CounterPanel, sprite) == 0x984 &&
    sizeof(CounterPanel) <= sizeof(MessageWindow) ? 1 : -1];

extern "C" {

u16 gameDataBlocksGetCounter(void);

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
    uiSpriteStateInitFromSource(&panel->sprite, 14, 0xFFFFFFFF, &panel->spriteSource, 11, 1.0f);
    pairSetFirstResetSecond(&panel->sprite, 0x11);
    spriteStartAnimationByIndex(&panel->sprite, 6);
    return 1;
}

} /* extern "C" */
