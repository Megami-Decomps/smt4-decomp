#include "common.h"

extern "C" {

#define TEXT_CAPACITY 0x5a

typedef struct Dialog {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ s32 state;           /* 3 -> 2 when text is set */
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ s32 timer;
    /* 0x014 */ s32 scroll;          /* extra width of long text */
    /* 0x018 */ s32 textWidth;
    /* 0x01C */ s32 totalWidth;
    /* 0x020 */ u8 unk020;
    /* 0x021 */ u8 hasText;
    /* 0x022 */ u8 isLong;
    /* 0x023 */ u8 unk023[0xAD];
    /* 0x0D0 */ u8 window[0x8C];
    /* 0x15C */ char text[TEXT_CAPACITY];
    /* 0x1B6 */ u8 unk1B6[2];
    /* 0x1B8 */ u32 handle;
} Dialog;

extern Dialog *g_infoWin;

int FUN_00296b3c(u32 handle, int arg1, u32 arg2, int arg3, int arg4, void *text);
int timerStart(void *window, int arg1, int arg2);
int vec2GetXInt(void *window);
int memClear(void *buffer, int size);
void *rt_memcpy(void *dst, const void *src, u32 size);

/* Sets the dialog text (NUL-terminated, at most 0x5a bytes): copies it, sizes the window around it and starts the message. */
void dialogSetText(const char *text)
{
    Dialog *dialog = g_infoWin;
    int length;

    dialog->hasText = 0;
    if (text == NULL) {
        return;
    }
    memClear(dialog->text, TEXT_CAPACITY);
    length = 0;
    do {
        if (text[length] == '\0') {
            rt_memcpy(dialog->text, text, length + 1);
            dialog->hasText = 1;
            if (length <= 0x5b) {
                dialog->isLong = 0;
            } else {
                dialog->isLong = 1;
                dialog->scroll = (length / 2) * 14;
            }
            timerStart(dialog->window, 2, 0);
            dialog->textWidth = vec2GetXInt(dialog->window);
            dialog->totalWidth = dialog->textWidth + dialog->scroll + 42;
            if (dialog->state == 3) {
                dialog->state = 2;
            }
            break;
        }
        length++;
    } while (length < TEXT_CAPACITY);
    FUN_00296b3c(dialog->handle, 3, 0xffffffff, 0, 3, dialog->text);
    dialog->timer = 30;
}

} /* extern "C" */
