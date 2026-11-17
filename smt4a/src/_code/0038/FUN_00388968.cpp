/* NON_MATCHING: panel tail-flag addressing and sprite initialization registers differ. */
#include "ui/UiSpriteApi.h"
#include "ui/MessageMainA.h"
#include "script/ScriptArgs.h"
#include "ui/UiControl.h"

extern "C" {

// Start the designated message-panel animation and wait for its pending flag to clear.
u8 FUN_00388968(void)
{
    // A word in the odd-sized trailing byte padding needs an aligned local view.
    struct MessageAnimationView {
        u8 unk0000[0x19f0];
        u8 active;
        s8 pending;
        u8 ready;
        u8 unk19f3;
        u32 value;
    };
    MessageAnimationView *initial = reinterpret_cast<MessageAnimationView *>(g_messageMain.banner);
    if (scrGetCommandFrame() == 0) {
        u32 value = scrGetArg(0);
        MessageWindowA *panel = g_messageMain.banner;
        void *sprite = &panel->sprites[34];
        uiSpriteStateInitFromSource((UiSpriteState *)sprite, 4, 0xabe1, &panel->parameters, 11, 1.0f);
        uiSpriteSelectAnim((UiSpriteState *)sprite, 11);
        MessageAnimationView *animation = reinterpret_cast<MessageAnimationView *>(panel);
        animation->value = value;
        animation->pending = 1;
        animation->ready = 1;
        animation->active = 1;
    }
    return initial->pending == 0;
}
}
