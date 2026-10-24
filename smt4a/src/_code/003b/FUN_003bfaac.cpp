#include "shard/W6_W6Match8_AnimatedSprite.h"

struct PromptDialog {
    u8 unk000[0x16C];          // 0x000
    SpritePlaybackView sprite; // 0x16C
    u8 unk1F8[0x3DC];          // 0x1F8
    u8 open;                   // 0x5D4
};

struct PromptHandles {
    u8 unk00;             // 0x00
    u8 opened;            // 0x01
    u8 unk02[2];          // 0x02
    PromptDialog *dialog; // 0x04
};

extern "C" {

extern PromptHandles g_engineResourceHandles; /* 0x57f254 */

void uiSpriteSetKeyframe(SpritePlaybackView *sprite, s16 key, s8 mode);
void uiSpriteSetImageKeyframe(SpritePlaybackView *sprite, s16 key, s8 mode);
void dialogEnterState(PromptDialog *dialog, s32 state, s32 arg);
void FUN_0039c0e4(void);

/* Opens the prompt dialog on the first call; returns 1 (and closes it) once the dialog has finished. */
u8 FUN_003bfaac(void)
{
    if (g_engineResourceHandles.opened == 0) {
        PromptDialog *dialog;

        g_engineResourceHandles.opened = 1;
        dialog = g_engineResourceHandles.dialog;
        uiSpriteSetKeyframe(&dialog->sprite, 2, 0);
        uiSpriteSetImageKeyframe(&dialog->sprite, 1, 0);
        dialog->open = 1;
        dialogEnterState(dialog, 10, 0);
    }
    if (g_engineResourceHandles.dialog->open == 0) {
        g_engineResourceHandles.opened = 0;
        FUN_0039c0e4();
        return 1;
    }
    return 0;
}

} /* extern "C" */
