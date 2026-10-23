#include "shard/PlayScene.h"
#include <stddef.h>

extern "C" {
const char *FUN_002e38c0(u8 message, s32 alternate);
s32 textFormatBuffer(char *buffer, const char *format, ...);
void FUN_0029ee6c(const char *text, u32 color);
void FUN_00253fe8(u32 color, s32 start, s32 line, s32 length);

/* Selects the menu help text and highlights a formatted numeric argument when present. */
void FUN_00297b94(PlayScene *scene, s32 selection, s32 page)
{
    /* The shared scene's byte-aligned padding cannot contain a word-aligned union view. */
    struct PlaySceneHelpView {
        /* 0x0000 */ u8 unk0000[0x306C];
        /* 0x306C */ s32 value;
    };
    typedef char HelpValueOffsetCheck[offsetof(PlaySceneHelpView, value) == 0x306C ? 1 : -1];
    PlaySceneHelpView *help = (PlaySceneHelpView *)scene;
    u8 message = 0;
    switch (selection) {
    case 1: message = 1; break;
    case 2: message = 2; break;
    case 7: message = 3; break;
    case 3: message = 4; break;
    case 10: message = 5; break;
    case 9: message = 6; break;
    case 5: message = 8; break;
    case 4: message = 7; break;
    }
    const char *text = FUN_002e38c0(message, page == 0);
    if (selection == 9) {
        char buffer[128];
        textFormatBuffer(buffer, text, help->value);
        FUN_0029ee6c(buffer, 0x323232FF);
        s32 highlightLength;
        if (help->value >= 100) {
            highlightLength = 5;
        } else if (help->value >= 10) {
            highlightLength = 4;
        } else {
            highlightLength = 3;
        }
        FUN_00253fe8(0xA11923FF, 1, 18, highlightLength);
        return;
    }
    FUN_0029ee6c(text, 0x323232FF);
}
}
